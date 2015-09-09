/**********************************************************************
  ExampleSearch -- A tool for analysing a matrix-substrate docking problem

  Copyright (C) 2012 by David C. Lonie

  This library is free software; you can redistribute it and/or modify
  it under the terms of the GNU Library General Public License as
  published by the Free Software Foundation; either version 2.1 of the
  License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 ***********************************************************************/

#include <examplesearch/ui/tab_progress.h>

#include <examplesearch/ui/dialog.h>
#include <examplesearch/examplesearch.h>

#include <globalsearch/optimizer.h>
#include <globalsearch/queuemanager.h>
#include <globalsearch/macros.h>

#include <QtCore/QTimer>
#include <QtCore/QSettings>
#include <QtCore/QMutexLocker>
#include <QtCore/QtConcurrentRun>

#include <QtGui/QMenu>
#include <QtGui/QInputDialog>

using namespace std;
using namespace Avogadro;
using namespace GlobalSearch;

namespace ExampleSearch {

  TabProgress::TabProgress( ExampleSearchDialog *parent, ExampleSearch *p ) :
    AbstractTab(parent, p),
    m_timer(new QTimer (this)),
    m_mutex(new QMutex),
    m_update_mutex(new QMutex),
    m_update_all_mutex(new QMutex),
    m_context_structure(0)
  {
    // Allow queued connections to work with the TableEntry struct
    qRegisterMetaType<ProgressTableEntry>("ProgressTableEntry");

    ui.setupUi(m_tab_widget);

    QHeaderView *horizontal = ui.table_list->horizontalHeader();
    horizontal->setResizeMode(QHeaderView::ResizeToContents);

    rowTracking = true;

    // dialog connections
    connect(m_dialog, SIGNAL(moleculeChanged(GlobalSearch::Structure*)),
            this, SLOT(highlightStructure(GlobalSearch::Structure*)));
    connect(m_opt, SIGNAL(sessionStarted()),
            this, SLOT(startTimer()));

    // Progress table connections
    connect(m_timer, SIGNAL(timeout()),
            this, SLOT(updateProgressTable()));
    connect(ui.push_refresh, SIGNAL(clicked()),
            this, SLOT(startTimer()));
    connect(ui.push_refresh, SIGNAL(clicked()),
            this, SLOT(updateProgressTable()));
    connect(ui.spin_period, SIGNAL(editingFinished()),
            this, SLOT(updateProgressTable()));
    connect(ui.table_list, SIGNAL(currentCellChanged(int,int,int,int)),
            this, SLOT(selectMoleculeFromProgress(int,int,int,int)));
    connect(m_opt->tracker(), SIGNAL(newStructureAdded(GlobalSearch::Structure*)),
            this, SLOT(addNewEntry()));
    connect(m_opt->queue(), SIGNAL(structureUpdated(GlobalSearch::Structure*)),
            this, SLOT(newInfoUpdate(GlobalSearch::Structure *)));
    connect(this, SIGNAL(infoUpdate()),
            this, SLOT(updateInfo()));
    connect(ui.table_list, SIGNAL(customContextMenuRequested(QPoint)),
            this, SLOT(progressContextMenu(QPoint)));
    connect(ui.push_refreshAll, SIGNAL(clicked()),
            this, SLOT(updateAllInfo()));
    connect(m_opt, SIGNAL(refreshAllStructureInfo()),
            this, SLOT(updateAllInfo()));
    connect(m_opt, SIGNAL(startingSession()),
            this, SLOT(disableRowTracking()));
    connect(m_opt, SIGNAL(sessionStarted()),
            this, SLOT(enableRowTracking()));
    connect(this, SIGNAL(updateTableEntry(int, const ProgressTableEntry&)),
            this, SLOT(setTableEntry(int, const ProgressTableEntry&)));

    initialize();
  }

  TabProgress::~TabProgress()
  {
    delete m_mutex;
    delete m_update_mutex;
    delete m_update_all_mutex;
    delete m_timer;
  }

  void TabProgress::writeSettings(const QString &filename)
  {
    SETTINGS(filename);
    settings->beginGroup("examplesearch/progress");
    const int version = 1;
    settings->setValue("version",     version);

    settings->setValue("refreshTime", ui.spin_period->value());
    settings->endGroup();
    DESTROY_SETTINGS(filename);
  }

  void TabProgress::readSettings(const QString &filename)
  {
    SETTINGS(filename);
    settings->beginGroup("examplesearch/progress");
    int loadedVersion = settings->value("version", 0).toInt();

    ui.spin_period->setValue(settings->value("refreshTime", 1).toInt());
    settings->endGroup();

    // Update config data
    switch (loadedVersion) {
    case 0:
    case 1:
    default:
      break;
    }
  }

  void TabProgress::disconnectGUI()
 {
    m_timer->disconnect();
    ui.push_refresh->disconnect();
    ui.push_refreshAll->disconnect();
    ui.spin_period->disconnect();
    ui.table_list->disconnect();
    disconnect(m_opt->tracker(), 0, this, 0);
    disconnect(m_opt->queue(), 0, this, 0);
    disconnect(m_dialog, 0, this, 0);
    this->disconnect();
  }

  void TabProgress::updateProgressTable()
  {
    // Only allow one update at a time
    if (!m_update_mutex->tryLock()) {
      qDebug() << "Killing extra TabProgress::updateProgressTable() call";
      return;
    }

    QList<Structure*> running = m_opt->queue()->getAllRunningStructures();

    for (QList<Structure*>::iterator
           it = running.begin(),
           it_end = running.end();
         it != it_end;
         ++it) {
      newInfoUpdate(*it);
    }

    m_update_mutex->unlock();
  }

  void TabProgress::addNewEntry()
  {
    QMutexLocker locker (m_mutex);

    // The new entry will be at the end of the table, so determine the index:
    int index = ui.table_list->rowCount();
    m_opt->tracker()->lockForRead();
    Structure *structure = m_opt->tracker()->at(index);
    m_opt->tracker()->unlock();

    // Turn off signals
    ui.table_list->blockSignals(true);

    // Store current index for later. If -1, this will be re-set at the end of table
    int currentInd = ui.table_list->currentRow();
    if (currentInd >= ui.table_list->rowCount() - 1)
      currentInd = -1;

    // Add the new row
    ui.table_list->insertRow(index);

    // Columns: once for each column in ProgressColumns:
    for (int i = 0; i < 5; i++) {
      ui.table_list->setItem(index, i, new QTableWidgetItem());
    }

    m_infoUpdateTracker.lockForWrite();
    m_infoUpdateTracker.append(structure);
    m_infoUpdateTracker.unlock();
    locker.unlock();
    ProgressTableEntry e;
    structure->lock()->lockForRead();
    e.elapsed = structure->getOptElapsed();
    e.id      = structure->getIDNumber();
    e.jobID   = structure->getJobID();
    e.status  = "Waiting for data...";
    e.brush   = QBrush (Qt::white);

    if (structure->hasEnthalpy() || structure->getEnergy() != 0)
      e.energy = structure->getEnthalpy();
    else
      e.energy = 0.0;
    structure->lock()->unlock();

    ui.table_list->blockSignals(false);

    if (currentInd < 0) currentInd = index;
    if (rowTracking) ui.table_list->setCurrentCell(currentInd, 0);

    locker.unlock();
    setTableEntry(index, e);
    emit infoUpdate();
  }

  void TabProgress::updateAllInfo()
  {
    if (!m_update_all_mutex->tryLock()) {
      qDebug() << "Killing extra TabProgress::updateAllInfo() call";
      return;
    }
    m_opt->tracker()->lockForRead();
    m_infoUpdateTracker.lockForWrite();
    QList<Structure*> *structures = m_opt->tracker()->list();
    for (int i = 0; i < ui.table_list->rowCount(); i++) {
      m_infoUpdateTracker.append(structures->at(i));
      emit infoUpdate();
    }
    m_infoUpdateTracker.unlock();
    m_opt->tracker()->unlock();
    m_update_all_mutex->unlock();
  }

  void TabProgress::newInfoUpdate(Structure *s)
  {
    m_infoUpdateTracker.lockForWrite();
    if (m_infoUpdateTracker.append(s)) {
      emit infoUpdate();
    }
    m_infoUpdateTracker.unlock();
  }

  void TabProgress::updateInfo()
  {
    if (m_infoUpdateTracker.size() == 0) {
      return;
    }

    // Don't update while a context operation is in the works
    if (m_context_structure !=0) {
      qDebug() << "TabProgress::updateInfo: Waiting for context operation to complete (" << m_context_structure << ") Trying again very soon.";
      QTimer::singleShot(1000, this, SLOT(updateInfo()));
      return;
    }

    QtConcurrent::run(this, &TabProgress::updateInfo_);
    return;
  }

  void TabProgress::updateInfo_()
  {
    // Prep variables
    Structure *structure;

    m_infoUpdateTracker.lockForWrite();
    if (!m_infoUpdateTracker.popFirst(structure)) {
      m_infoUpdateTracker.unlock();
      return;
    }
    m_infoUpdateTracker.unlock();

    int i = m_opt->tracker()->list()->indexOf(structure);

    if (i < 0 || i > ui.table_list->rowCount() - 1) {
      qDebug() << "TabProgress::updateInfo: Trying to update an index that doesn't exist...yet: (" << i << ") Waiting...";
      m_infoUpdateTracker.lockForWrite();
      m_infoUpdateTracker.append(structure);
      m_infoUpdateTracker.unlock();
      QTimer::singleShot(100, this, SLOT(updateInfo()));
      return;
    }

    ProgressTableEntry e;
    uint totalOptSteps = m_opt->optimizer()->getNumberOfOptSteps();

    e.brush = QBrush(Qt::white);

    QReadLocker structureLocker (structure->lock());

    e.id      = structure->getIndex();
    e.elapsed = structure->getOptElapsed();
    e.jobID   = structure->getJobID();
    e.energy  = structure->getEnergy();

    switch (structure->getStatus()) {
    case Structure::InProcess: {
      structureLocker.unlock();
      QueueInterface::QueueStatus state = m_opt->queueInterface()->getStatus(structure);
      structureLocker.relock();
      switch (state) {
      case QueueInterface::Running:
        e.status = tr("Running (Opt Step %1 of %2, %3 failures)")
          .arg(QString::number(structure->getCurrentOptStep()))
          .arg(QString::number(totalOptSteps))
          .arg(QString::number(structure->getFailCount()));
        e.brush.setColor(Qt::green);
        break;
      case QueueInterface::Queued:
        e.status = tr("Queued (Opt Step %1 of %2, %3 failures)")
          .arg(QString::number(structure->getCurrentOptStep()))
          .arg(QString::number(totalOptSteps))
          .arg(QString::number(structure->getFailCount()));
        e.brush.setColor(Qt::cyan);
        break;
      case QueueInterface::Success:
        e.status = "Starting update...";
        break;
      case QueueInterface::Unknown:
        e.status = "Unknown";
        break;
      case QueueInterface::Error:
        e.status = "Error: Restarting job...";
        e.brush.setColor(Qt::darkRed);
        break;
      case QueueInterface::CommunicationError:
        e.status = "Communication Error";
        e.brush.setColor(Qt::darkRed);
        break;
        // Shouldn't happen; started and pending only occur when structure
        // is "Submitted"
      case QueueInterface::Started:
      case QueueInterface::Pending:
      default:
        break;
      }
      break;
    }
    case Structure::Submitted:
      e.status = tr("Job submitted (%1 of %2)")
        .arg(QString::number(structure->getCurrentOptStep()))
        .arg(QString::number(totalOptSteps));
      e.brush.setColor(Qt::cyan);
      break;
    case Structure::Restart:
      e.status = "Restarting job...";
      e.brush.setColor(Qt::cyan);
      break;
    case Structure::Killed:
    case Structure::Removed:
      e.status = "Killed";
      e.brush.setColor(Qt::darkGray);
      break;
    case Structure::Duplicate:
      e.status = tr("Duplicate of %1")
        .arg(structure->getDuplicateString());
      e.brush.setColor(Qt::darkGreen);
      break;
    case Structure::StepOptimized:
      e.status = "Checking status...";
      e.brush.setColor(Qt::cyan);
      break;
    case Structure::Optimized:
      e.status = "Optimized";
      e.brush.setColor(Qt::yellow);
      break;
    case Structure::WaitingForOptimization:
      e.status = tr("Waiting for Optimization (%1 of %2)")
        .arg(QString::number(structure->getCurrentOptStep()))
        .arg(QString::number(totalOptSteps));
      e.brush.setColor(Qt::darkCyan);
      break;
    case Structure::Error:
      e.status = tr("Job failed. Restarting...");
      e.brush.setColor(Qt::red);
      break;
    case Structure::Updating:
      e.status = "Updating structure...";
      e.brush.setColor(Qt::cyan);
      break;
    case Structure::Empty:
      e.status = "Structure empty...";
      break;
    }

    if (structure->getFailCount() != 0) {
      e.brush.setColor(Qt::red);
    }

    emit updateTableEntry(i, e);
  }

  void TabProgress::setTableEntry(int row, const ProgressTableEntry &e)
  {
    QMutexLocker locker (m_mutex);

    ui.table_list->item(row, C_Index)->setText(QString::number(e.id));
    ui.table_list->item(row, C_Elapsed)->setText(e.elapsed);
    ui.table_list->item(row, C_Status)->setText(e.status);
    ui.table_list->item(row, C_Status)->setBackground(e.brush);

    if (e.jobID)
      ui.table_list->item(row, C_JobID)->setText(QString::number(e.jobID));
    else
      ui.table_list->item(row, C_JobID)->setText("N/A");

    if (e.energy != 0.0)
      ui.table_list->item(row, C_Energy)->setText(QString::number(e.energy));
    else
      ui.table_list->item(row, C_Energy)->setText("N/A");
  }

  void TabProgress::selectMoleculeFromProgress(int row,int,int oldrow,int)
  {
    Q_UNUSED(oldrow);
    if (m_opt->isStarting) {
      qDebug() << "TabProgress::selectMoleculeFromProgress: Not updating widget while session is starting";
      return;
    }
    if ( row == -1 ) return;
    emit moleculeChanged(m_opt->tracker()->at(row));
  }

  void TabProgress::highlightStructure(Structure *structure)
  {
    structure->lock()->lockForRead();
    int id  = structure->getIndex();
    structure->lock()->unlock();
    for (int row = 0; row < ui.table_list->rowCount(); row++) {
      if (ui.table_list->item(row, C_Index)->text().toInt() == id) {
        ui.table_list->blockSignals(true);
        ui.table_list->setCurrentCell(row, 0);
        ui.table_list->blockSignals(false);
        return;
      }
    }
    // If not found, clear selection
    ui.table_list->blockSignals(true);
    ui.table_list->setCurrentCell(-1, -1);
    ui.table_list->blockSignals(false);
  }


  void TabProgress::startTimer()
  {
    if (m_timer->isActive())
      m_timer->stop();
    m_timer->start(ui.spin_period->value() * 1000);
  }

  void TabProgress::stopTimer()
  {
    m_timer->stop();
  }

  void TabProgress::progressContextMenu(QPoint p)
  {
    if (m_context_structure) return;
    QApplication::setOverrideCursor( Qt::WaitCursor );
    QTableWidgetItem *item = ui.table_list->itemAt(p);
    if (!item) {
      QApplication::restoreOverrideCursor();
      return;
    }
    int index = item->row();

    qDebug() << "Context menu at row " << index;

    // Set m_context_structure after locking to avoid threading issues.
    Structure * structure = m_opt->tracker()->at(index);

    structure->lock()->lockForRead();

    m_context_structure = structure;

    QApplication::restoreOverrideCursor();

    Structure::State state = m_context_structure->getStatus();

    QMenu menu;
    QAction *a_restart  = menu.addAction("&Restart job");
    QAction *a_kill	= menu.addAction("&Kill structure");
    QAction *a_unkill	= menu.addAction("Un&kill structure");
    QAction *a_resetFail= menu.addAction("Reset &failure count");
    menu.addSeparator();
    QAction *a_randomize= menu.addAction("Replace with &new random structure");

    // Connect actions
    connect(a_restart, SIGNAL(triggered()), this, SLOT(restartJobProgress()));
    connect(a_kill, SIGNAL(triggered()), this, SLOT(killStructureProgress()));
    connect(a_unkill, SIGNAL(triggered()), this, SLOT(unkillStructureProgress()));
    connect(a_resetFail, SIGNAL(triggered()), this, SLOT(resetFailureCountProgress()));
    connect(a_randomize, SIGNAL(triggered()), this, SLOT(randomizeStructureProgress()));

    if (state == Structure::Killed || state == Structure::Removed) {
      a_kill->setVisible(false);
      a_restart->setVisible(false);
    }
    else {
      a_unkill->setVisible(false);
    }

    m_context_structure->lock()->unlock();
    QAction *selection = menu.exec(QCursor::pos());

    if (selection == 0) {
      m_context_structure = 0;
      return;
    }
    QtConcurrent::run(this, &TabProgress::updateProgressTable);
    a_restart->disconnect();
    a_kill->disconnect();
    a_unkill->disconnect();
    a_resetFail->disconnect();
    a_randomize->disconnect();
  }

  void TabProgress::restartJobProgress()
  {
    if (!m_context_structure) return;

    // Get info from structure
    m_context_structure->lock()->lockForRead();
    int id = m_context_structure->getIDNumber();
    int optstep = m_context_structure->getCurrentOptStep();
    m_context_structure->lock()->unlock();

    // Choose which OptStep to use
    bool ok;
    int optStep = QInputDialog::getInt(m_dialog,
                                       tr("Restart Optimization %1")
                                       .arg(id),
                                       "Select optimization step to restart from:",
                                       optstep,
                                       1,
                                       m_opt->optimizer()->getNumberOfOptSteps(),
                                       1,
                                       &ok);
    if (!ok) return;
    QtConcurrent::run(this, &TabProgress::restartJobProgress_, optStep);
  }

  void TabProgress::restartJobProgress_(int optStep)
  {
    QWriteLocker locker (m_context_structure->lock());
    m_context_structure->setCurrentOptStep(optStep);

    m_context_structure->setStatus(Structure::Restart);
    newInfoUpdate(m_context_structure);

    // Clear context structure pointer
    locker.unlock();
    m_context_structure = 0;
  }

  void TabProgress::killStructureProgress()
  {
    QtConcurrent::run(this, &TabProgress::killStructureProgress_);
  }

  void TabProgress::killStructureProgress_()
  {
    if (!m_context_structure) return;

    // QueueManager will take care of mutex locking
    m_opt->queueInterface()->stopJob(m_context_structure);

    // Clear context structure pointer
    newInfoUpdate(m_context_structure);
    m_context_structure = 0;
  }

  void TabProgress::unkillStructureProgress()
  {
    QtConcurrent::run(this, &TabProgress::unkillStructureProgress_);
  }

  void TabProgress::unkillStructureProgress_()
  {
    if (!m_context_structure) return;
    QWriteLocker locker (m_context_structure->lock());
    if (m_context_structure->getStatus() != Structure::Killed &&
        m_context_structure->getStatus() != Structure::Removed ) return;

    // Setting status to Structure::Error will restart the job if was killed
    if (m_context_structure->getStatus() == Structure::Killed)
      m_context_structure->setStatus(Structure::Error);

    // Set status to Optimized if structure was previously optimized
    if (m_context_structure->getStatus() == Structure::Removed)
      m_context_structure->setStatus(Structure::Optimized);

    // Clear context structure pointer
    newInfoUpdate(m_context_structure);
    locker.unlock();
    m_context_structure = 0;
  }

  void TabProgress::resetFailureCountProgress()
  {
    QtConcurrent::run(this, &TabProgress::resetFailureCountProgress_);
  }

  void TabProgress::resetFailureCountProgress_()
  {
    if (!m_context_structure) return;
    QWriteLocker locker (m_context_structure->lock());

    m_context_structure->resetFailCount();

    // Clear context structure pointer
    newInfoUpdate(m_context_structure);
    locker.unlock();
    m_context_structure = 0;
  }

  void TabProgress::randomizeStructureProgress()
  {
    QtConcurrent::run(this, &TabProgress::randomizeStructureProgress_);
  }

  void TabProgress::randomizeStructureProgress_()
  {
    if (!m_context_structure) return;

    // End job if currently running
    if (m_context_structure->getJobID()) {
      m_opt->queueInterface()->stopJob(m_context_structure);
    }

    m_opt->replaceWithRandom(m_context_structure, "manual");

    // Restart job:
    newInfoUpdate(m_context_structure);
    restartJobProgress_(1);
  }

}

