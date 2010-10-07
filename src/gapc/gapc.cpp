/**********************************************************************
  GAPC -- A genetic algorithm for protected clusters

  Copyright (C) 2010 by David C. Lonie

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation version 2 of the License.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 ***********************************************************************/

#include <gapc/gapc.h>

#include <gapc/genetic.h>
#include <gapc/ui/dialog.h>
#include <gapc/structures/protectedcluster.h>
#include <gapc/optimizers/openbabel.h>
#include <gapc/optimizers/adf.h>
#include <gapc/optimizers/gulp.h>

#include <globalsearch/macros.h>
#include <globalsearch/structure.h>
#include <globalsearch/tracker.h>
#include <globalsearch/queuemanager.h>
#include <globalsearch/sshmanager.h>

#include <QtCore/QDir>
#include <QtConcurrentRun>
#include <QtConcurrentMap>

#include <vector>

using namespace std;

namespace GAPC {

  OptGAPC::OptGAPC(GAPCDialog *parent) :
    OptBase(parent)
  {
    m_idString = "GAPC";

    connect(m_queue, SIGNAL(structureFinished(Structure*)),
            this, SLOT(checkForDuplicates()));
    connect(m_queue, SIGNAL(structureFinished(Structure*)),
            this, SLOT(checkOptimizedPC(Structure*)));
    connect(this, SIGNAL(sessionStarted()),
            this, SLOT(resetDuplicates()));
  }

  OptGAPC:: ~OptGAPC()
  {
  }

  Structure* OptGAPC::replaceWithRandom(Structure *s, const QString & reason)
  {
    ProtectedCluster *oldPC = qobject_cast<ProtectedCluster*>(s);
    QWriteLocker locker1 (oldPC->lock());

    // Generate/Check new cluster
    ProtectedCluster *PC = 0;
    while (!checkPC(PC)) {
      if (PC) delete PC;
      PC = generateRandomPC();
    }

    // Copy info over
    QWriteLocker locker2 (PC->lock());
    oldPC->resetEnergy();
    oldPC->resetEnthalpy();
    oldPC->setPV(0);
    oldPC->setCurrentOptStep(1);
    QString parents = "Randomly generated";
    if (!reason.isEmpty())
      parents += " (" + reason + ")";
    oldPC->setParents(parents);

    Atom *atom1, *atom2;
    for (uint i = 0; i < PC->numAtoms(); i++) {
      atom1 = oldPC->atom(i);
      atom2 = PC->atom(i);
      atom1->setPos(atom2->pos());
      atom1->setAtomicNumber(atom2->atomicNumber());
    }
    oldPC->resetFailCount();

    // TODO Perceive bonds?

    // Delete random PC
    PC->deleteLater();
    return qobject_cast<Structure*>(oldPC);
  }

  bool OptGAPC::checkLimits()
  {
    // Call error() and return false if there's a problem
    // Nothing to do here now -- limits cannot conflict.
    return true;
  }

  bool OptGAPC::checkPC(ProtectedCluster *pc)
  {
    if (!pc)
      return false;

    QReadLocker locker (pc->lock());

    double shortest = 0;
    if (pc->getShortestInteratomicDistance(shortest)) {
      if (shortest < minIAD) {
        qDebug() << "Discarding structure: IAD check failed: "
                 << shortest << " < " << minIAD;
        return false;
      }
    }

    return true;
  }

  void OptGAPC::checkOptimizedPC(Structure *s)
  {
    if (!s)
      return;

    ProtectedCluster *pc = qobject_cast<ProtectedCluster*>(s);
    if (!pc)
      return;

    QReadLocker locker (pc->lock());

    // Explode check
    QList<double> dists;
    if (!pc->checkForExplosion(explodeLimit)) {
      qDebug() << "Cluster " << pc->getIDString() << " exploded!";
      switch (explodeAction) {
      case EA_Kill:
        m_queue->killStructure(pc);
        return;
      case EA_Randomize:
        pc->setStatus(ProtectedCluster::Updating);
        locker.unlock();
        replaceWithRandom(pc, tr("Cluster exploded"));
        m_queue->prepareStructureForSubmission(pc);
        return;
      }
    }
  }

  bool OptGAPC::load(const QString &filename) {
    // Attempt to open state file
    QFile file (filename);
    if (!file.open(QIODevice::ReadOnly)) {
      error("OptGAPC::load(): Error opening file "+file.fileName()+" for reading...");
      return false;
    }

    SETTINGS(filename);
    int loadedVersion = settings->value(m_idString.toLower() + "/version", 0).toInt();

    // Update config data
    switch (loadedVersion) {
    case 0:
    case 1:
    default:
      break;
    }

    bool stateFileIsValid = settings->value(m_idString.toLower() + "/saveSuccessful", false).toBool();
    if (!stateFileIsValid) {
      error("OptGAPC::load(): File "+file.fileName()+" is incomplete, corrupt, or invalid. (Try "
            + file.fileName() + ".old if it exists)");
      return false;
    }

    // Get path and other info for later:
    QFileInfo stateInfo (file);
    // path to resume file
    QDir dataDir  = stateInfo.absoluteDir();
    QString dataPath = dataDir.absolutePath() + "/";
    // list of structure dirs
    QStringList structureDirs = dataDir.entryList(QStringList(), QDir::AllDirs, QDir::Size);
    structureDirs.removeAll(".");
    structureDirs.removeAll("..");
    for (int i = 0; i < structureDirs.size(); i++) {
      if (!QFile::exists(dataPath + "/" + structureDirs.at(i) + "/structure.state") ){
        structureDirs.removeAt(i);
        i--;
      }
    }

    // Set filePath:
    QString newFilePath = dataPath;
    QString newFileBase = filename;
    newFileBase.remove(newFilePath);
    newFileBase.remove(m_idString.toLower() + ".state.old");
    newFileBase.remove(m_idString.toLower() + ".state.tmp");
    newFileBase.remove(m_idString.toLower() + ".state");

    m_dialog->readSettings(filename);

    // Set optimizer
    setOptimizer(OptTypes(settings->value(m_idString.toLower() + "/edit/optType").toInt()),
                 filename);

    // Create SSHConnection
    if (m_optimizer->getIDString() != "OpenBabel" && // OpenBabel won't use ssh
        m_optimizer->getIDString() != "GULP") {      // Nor will GULP
      QString pw = "";
      for (;;) {
        try {
          m_ssh->makeConnections(host, username, pw, port);
        }
        catch (SSHConnection::SSHConnectionException e) {
          QString err;
          switch (e) {
          case SSHConnection::SSH_CONNECTION_ERROR:
          case SSHConnection::SSH_UNKNOWN_ERROR:
          default:
            err = "There was a problem connection to the ssh server at "
              + username + "@" + host + ":" + QString::number(port) + ". "
              + "Please check that all provided information is correct, "
              + "and attempt to log in outside of Avogadro before trying again."
              + "GAPC will continue to load in read-only mode.";
            error(err);
            readOnly = true;
            break;
          case SSHConnection::SSH_UNKNOWN_HOST_ERROR: {
            // The host is not known, or has changed its key.
            // Ask user if this is ok.
            err = "The host "
              + host + ":" + QString::number(port)
              + " either has an unknown key, or has changed it's key:\n"
              + m_ssh->getServerKeyHash() + "\n"
              + "Would you like to trust the specified host? (Clicking 'No' will"
              + "resume the session in read only mode.)";
            bool ok;
            // Commenting this until ticket:53 (load in bg thread) is fixed
            // // This is a BlockingQueuedConnection, which blocks until
            // // the slot returns.
            // emit needPassword(err, &newPassword, &ok);
            promptForBoolean(err, &ok);
            if (!ok) { // user cancels
              readOnly = true;
              break;
            }
            m_ssh->validateServerKey();
            continue;
          } // end case
          case SSHConnection::SSH_BAD_PASSWORD_ERROR: {
            // Chances are that the pubkey auth was attempted but failed,
            // so just prompt user for password.
            err = "Please enter a password for "
              + username + "@" + host + ":" + QString::number(port)
              + " or cancel to load the session in read-only mode.";
            bool ok;
            QString newPassword;
            // Commenting this until ticket:53 (load in bg thread) is fixed
            // // This is a BlockingQueuedConnection, which blocks until
            // // the slot returns.
            // emit needPassword(err, &newPassword, &ok);
            promptForPassword(err, &newPassword, &ok);
            if (!ok) { // user cancels
              readOnly = true;
              break;
            }
            pw = newPassword;
            continue;
          } // end case
          } // end switch
        } // end catch
        break;
      } // end forever
    }

    debug(tr("Resuming %1 session in '%2' (%3) readOnly = %4")
          .arg(m_idString)
          .arg(filename)
          .arg(m_optimizer->getIDString())
          .arg( (readOnly) ? "true" : "false"));

    // Structures
    // Initialize progress bar:
    m_dialog->updateProgressMaximum(structureDirs.size());
    ProtectedCluster *pc;
    QList<uint> keys = comp.core.keys();
    QList<Structure*> loadedStructures;
    QString pcStateFileName;
    uint count = 0;
    int numDirs = structureDirs.size();
    for (int i = 0; i < numDirs; i++) {
      count++;
      m_dialog->updateProgressLabel(tr("Loading structures(%1 of %2)...").arg(count).arg(numDirs));
      m_dialog->updateProgressValue(count-1);

      pcStateFileName = dataPath + "/" + structureDirs.at(i) + "/structure.state";

      pc = new ProtectedCluster();
      QWriteLocker locker (pc->lock());
      // Add empty atoms to pc, updatePC will populate it
      for (int j = 0; j < keys.size(); j++) {
        for (uint k = 0; k < comp.core.value(keys.at(j)); k++)
          pc->addAtom();
      }
      pc->setFileName(dataPath + "/" + structureDirs.at(i) + "/");
      pc->readSettings(pcStateFileName);

      // Store current state -- updatePC will overwrite it.
      ProtectedCluster::State state = pc->getStatus();
      QDateTime endtime = pc->getOptTimerEnd();

      locker.unlock();

      if (!m_optimizer->load(pc)) {
        error(tr("Error, no (or not appropriate for %1) structural data in %2.\n\n\
This could be a result of resuming a structure that has not yet done any local \
optimizations. If so, safely ignore this message.")
              .arg(m_optimizer->getIDString())
              .arg(pc->fileName()));
        continue;
      }

      // Reset state
      locker.relock();
      pc->setStatus(state);
      pc->setOptTimerEnd(endtime);
      locker.unlock();
      loadedStructures.append(qobject_cast<Structure*>(pc));
    }

    m_dialog->updateProgressMinimum(0);
    m_dialog->updateProgressValue(0);
    m_dialog->updateProgressMaximum(loadedStructures.size());
    m_dialog->updateProgressLabel("Sorting and checking structures...");

    // Sort structures by index values
    int curpos = 0;
    for (int i = 0; i < loadedStructures.size(); i++) {
      m_dialog->updateProgressValue(i);
      for (int j = 0; j < loadedStructures.size(); j++) {
        if (loadedStructures.at(j)->getIndex() == i) {
          loadedStructures.swap(j, curpos);
          curpos++;
        }
      }
    }

    m_dialog->updateProgressMinimum(0);
    m_dialog->updateProgressValue(0);
    m_dialog->updateProgressMaximum(loadedStructures.size());
    m_dialog->updateProgressLabel("Updating structure indices...");

    // Reassign indices (shouldn't always be necessary, but just in case...)
    for (int i = 0; i < loadedStructures.size(); i++) {
      m_dialog->updateProgressValue(i);
      loadedStructures.at(i)->setIndex(i);
    }

    m_dialog->updateProgressMinimum(0);
    m_dialog->updateProgressValue(0);
    m_dialog->updateProgressMaximum(loadedStructures.size());
    m_dialog->updateProgressLabel("Preparing GUI and tracker...");

    // Reset the local file path information in case the files have moved
    filePath = newFilePath;

    Structure *s= 0;
    for (int i = 0; i < loadedStructures.size(); i++) {
      s = loadedStructures.at(i);
      m_dialog->updateProgressValue(i);
      m_tracker->append(s);
      if (s->getStatus() == Structure::WaitingForOptimization)
        m_queue->appendToJobStartTracker(s);
    }

    m_dialog->updateProgressLabel("Done!");

    return true;
  }

  void OptGAPC::startSearch()
  {
    debug("Starting optimization.");
    emit startingSession();

    // Settings checks
    // Check lattice parameters, volume, etc
    if (!checkLimits()) {
      return;
    }

    // Do we have a composition?
    if (comp.core.isEmpty()) {
      error("Cannot create structures. Core composition is not set.");
      return;
    }

    // Create the SSHManager
    if (m_optimizer->getIDString() != "OpenBabel" && // OpenBabel won't use ssh
        m_optimizer->getIDString() != "GULP") {      // Nor will GULP
      QString pw = "";
      for (;;) {
        try {
          m_ssh->makeConnections(host, username, pw, port);
        }
        catch (SSHConnection::SSHConnectionException e) {
          QString err;
          switch (e) {
          case SSHConnection::SSH_CONNECTION_ERROR:
          case SSHConnection::SSH_UNKNOWN_ERROR:
          default:
            err = "There was a problem connection to the ssh server at "
              + username + "@" + host + ":" + QString::number(port) + ". "
              + "Please check that all provided information is correct, "
              + "and attempt to log in outside of Avogadro before trying again.";
            error(err);
            return;
          case SSHConnection::SSH_UNKNOWN_HOST_ERROR: {
            // The host is not known, or has changed its key.
            // Ask user if this is ok.
            err = "The host "
              + host + ":" + QString::number(port)
              + " either has an unknown key, or has changed it's key:\n"
              + m_ssh->getServerKeyHash() + "\n"
              + "Would you like to trust the specified host?";
            bool ok;
            // This is a BlockingQueuedConnection, which blocks until
            // the slot returns.
            emit needBoolean(err, &ok);
            if (!ok) { // user cancels
              return;
            }
            m_ssh->validateServerKey();
            continue;
          } // end case
          case SSHConnection::SSH_BAD_PASSWORD_ERROR: {
            // Chances are that the pubkey auth was attempted but failed,
            // so just prompt user for password.
            err = "Please enter a password for "
              + username + "@" + host + ":" + QString::number(port)
              + ":";
            bool ok;
            QString newPassword;
            // This is a BlockingQueuedConnection, which blocks until
            // the slot returns.
            emit needPassword(err, &newPassword, &ok);
            if (!ok) { // user cancels
              return;
            }
            pw = newPassword;
            continue;
          } // end case
          } // end switch
        } // end catch
        break;
      } // end forever
    }

    // prepare pointers
    m_tracker->deleteAllStructures();

    ///////////////////////////////////////////////
    // Generate random structures and load seeds //
    ///////////////////////////////////////////////

    // Set up progress bar
    m_dialog->startProgressUpdate(tr("Generating structures..."), 0, 0);

    // Initalize loop variables
    int failed = 0;
    uint progCount = 0;
    QString filename;
    ProtectedCluster *pc = 0;
    // Use newPCCount in case the tracker falls behind so that we
    // don't duplicate structures when switching from seeds -> random.
    uint newPCCount=0;

    // Load seeds...
    for (int i = 0; i < seedList.size(); i++) {
      filename = seedList.at(i);
      pc = new ProtectedCluster;
      pc->setFileName(filename);
      if ( !m_optimizer->read(pc, filename) || (pc == 0) ) {
        m_tracker->deleteAllStructures();
        error(tr("Error loading seed %1").arg(filename));
        return;
      }
      QString parents = tr("Seeded: %1", "1 is a filename").arg(filename);
      initializeAndAddPC(pc, 1, parents);
      debug(tr("GAPC::StartOptimization: Loaded seed: %1", "1 is a filename").arg(filename));
      m_dialog->updateProgressLabel(tr("%1 structures generated (%2 kept, %3 rejected)...").arg(i + failed).arg(i).arg(failed));
      newPCCount++;
    }

    // Generation loop...
    for (uint i = newPCCount; i < numInitial; i++) {
      // Update progress bar
      m_dialog->updateProgressMaximum( (i == 0)
                                        ? 0
                                        : int(progCount / static_cast<double>(i)) * numInitial );
      m_dialog->updateProgressValue(progCount);
      progCount++;
      m_dialog->updateProgressLabel(tr("%1 structures generated (%2 kept, %3 rejected)...").arg(i + failed).arg(i).arg(failed));

      // Generate/Check cluster
      pc = generateRandomPC(1, i+1);
      if (!checkPC(pc)) {
        delete pc;
        i--;
        failed++;
      }
      else {
        initializeAndAddPC(pc, 1, pc->getParents());
        newPCCount++;
      }
    }

    m_dialog->stopProgressUpdate();

    m_dialog->saveSession();
    emit sessionStarted();
  }

  void OptGAPC::initializeAndAddPC(ProtectedCluster *pc,
                                   uint generation,
                                   const QString &parents) {
    initMutex.lock();
    QList<Structure*> allStructures = m_queue->lockForNaming();
    Structure *structure;
    uint id = 1;
    for (int j = 0; j < allStructures.size(); j++) {
      structure = allStructures.at(j);
      structure->lock()->lockForRead();
      if (structure->getGeneration() == generation &&
          structure->getIDNumber() >= id) {
        id = structure->getIDNumber() + 1;
      }
      structure->lock()->unlock();
    }

    QWriteLocker pcLocker (pc->lock());
    pc->setIDNumber(id);
    pc->setGeneration(generation);
    pc->setParents(parents);
    QString id_s, gen_s, locpath_s, rempath_s;
    id_s.sprintf("%05d",pc->getIDNumber());
    gen_s.sprintf("%05d",pc->getGeneration());
    locpath_s = filePath + "/" + gen_s + "x" + id_s + "/";
    rempath_s = rempath + "/" + gen_s + "x" + id_s + "/";
    QDir dir (locpath_s);
    if (!dir.exists()) {
      if (!dir.mkpath(locpath_s)) {
        error(tr("OptGAPC::initializeAndAddPC: Cannot write to path: %1 (path creation failure)",
                 "1 is a file path.")
              .arg(locpath_s));
      }
    }
    pc->setFileName(locpath_s);
    pc->setRempath(rempath_s);
    pc->setCurrentOptStep(1);
    pc->moveToThread(m_tracker->thread());
    pc->setupConnections();
    pc->enableAutoHistogramGeneration(true);
    pc->update();
    m_queue->unlockForNaming(pc);
    initMutex.unlock();
  }

  void OptGAPC::generateNewStructure()
  {
    INIT_RANDOM_GENERATOR();
    // Get all optimized structures
    QList<Structure*> structures = m_queue->getAllOptimizedStructures();

    // Check to see if there are enough optimized structure to perform
    // genetic operations
    if (structures.size() < 3) {
      ProtectedCluster *pc = generateRandomPC(1, 0);
      initializeAndAddPC(pc, 1, pc->getParents());
      return;
    }

    // return pc
    ProtectedCluster *pc = 0;

    // temporary use pc
    ProtectedCluster *tpc;

    // Trim and sort list
    Structure::sortByEnthalpy(&structures);
    // Remove all but (n_consider + 1). The "+ 1" will be removed
    // during probability generation.
    while ( static_cast<uint>(structures.size()) > popSize + 1 )
      structures.removeLast();

    // Make list of weighted probabilities based on enthalpy values
    QList<double> probs = getProbabilityList(structures);

    // Convert stuctures to pcs
    QList<ProtectedCluster*> pcs;
    for (int i = 0; i < structures.size(); i++)
      pcs.append(qobject_cast<ProtectedCluster*>(structures.at(i)));

    // Initialize loop vars
    double r;
    unsigned int gen;
    QString parents;

    // Perform operation until pc is valid:
    while (!checkPC(pc)) {
      // First delete any previous failed structure in pc
      if (pc) {
        delete pc;
        pc = 0;
      }

      // Decide operator:
      r = RANDDOUBLE() * 100.0;
      Operators op;
      if (r < p_cross)
        op = OP_Crossover;
      else if (r < p_cross + p_twist)
        op = OP_Twist;
      else if (r < p_cross + p_twist + p_exch)
        op = OP_Exchange;
      else
        op = OP_RandomWalk;

      // Try 1000 times to get a good structure from the selected
      // operation. If not possible, send a warning to the log and
      // start anew.
      int attemptCount = 0;
      while (attemptCount < 1000 && !checkPC(pc)) {
        attemptCount++;
        if (pc) {
          delete pc;
          pc = 0;
        }

        // Operation specific set up:
        switch (op) {
        case OP_Crossover: {
          int ind1, ind2;
          ProtectedCluster *pc1=0, *pc2=0;
          // Select structures
          ind1 = ind2 = 0;
          double r1 = RANDDOUBLE();
          double r2 = RANDDOUBLE();
          for (ind1 = 0; ind1 < probs.size(); ind1++)
            if (r1 < probs.at(ind1)) break;
          for (ind2 = 0; ind2 < probs.size(); ind2++)
            if (r2 < probs.at(ind2)) break;

          pc1 = pcs.at(ind1);
          pc2 = pcs.at(ind2);

          // Perform operation
          pc = GAPCGenetic::crossover(pc1, pc2);

          // Lock parents and get info from them
          pc1->lock()->lockForRead();
          pc2->lock()->lockForRead();
          unsigned int gen1 = pc1->getGeneration();
          unsigned int gen2 = pc2->getGeneration();
          unsigned int id1  = pc1->getIDNumber();
          unsigned int id2  = pc2->getIDNumber();
          pc2->lock()->unlock();
          pc1->lock()->unlock();

          // Determine generation number
          gen = ( gen1 >= gen2 ) ?
            gen1 + 1 :
            gen2 + 1 ;
          parents = tr("Crossover: %1x%2 + %4x%5")
            .arg(gen1)
            .arg(id1)
            .arg(gen2)
            .arg(id2);
          continue;
        }

        case OP_Twist: {
          int ind=0;
          ProtectedCluster *pc1=0;
          // Select structures
          double r = RANDDOUBLE();
          for (ind = 0; ind < probs.size(); ind++)
            if (r < probs.at(ind)) break;

          pc1 = pcs.at(ind);

          // Perform operation
          double rotation;
          pc = GAPCGenetic::twist(pc1, twist_minRot, rotation);

          // Lock parents and get info from them
          pc1->lock()->lockForRead();
          unsigned int gen1 = pc1->getGeneration();
          unsigned int id1  = pc1->getIDNumber();
          pc1->lock()->unlock();

          // Determine generation number
          gen = gen1 + 1;
          parents = tr("Twist: %1x%2 (%3 deg)")
            .arg(gen1)
            .arg(id1)
            .arg(rotation);
          continue;
        }

        case OP_Exchange: {
          int ind=0;
          ProtectedCluster *pc1=0;
          // Select structures
          double r = RANDDOUBLE();
          for (ind = 0; ind < probs.size(); ind++)
            if (r < probs.at(ind)) break;

          pc1 = pcs.at(ind);

          // Perform operation
          pc = GAPCGenetic::exchange(pc1, exch_numExch);

          // Lock parents and get info from them
          pc1->lock()->lockForRead();
          unsigned int gen1 = pc1->getGeneration();
          unsigned int id1  = pc1->getIDNumber();
          pc1->lock()->unlock();

          // Determine generation number
          gen = gen1 + 1;
          parents = tr("Exchange: %1x%2 (%3 swaps)")
            .arg(gen1)
            .arg(id1)
            .arg(exch_numExch);
          continue;
        }

        case OP_RandomWalk: {
          int ind=0;
          ProtectedCluster *pc1=0;
          // Select structures
          double r = RANDDOUBLE();
          for (ind = 0; ind < probs.size(); ind++)
            if (r < probs.at(ind)) break;

          pc1 = pcs.at(ind);

          // Perform operation
          pc = GAPCGenetic::randomWalk(pc1,
                                       randw_numWalkers,
                                       randw_minWalk,
                                       randw_maxWalk);

          // Lock parents and get info from them
          pc1->lock()->lockForRead();
          unsigned int gen1 = pc1->getGeneration();
          unsigned int id1  = pc1->getIDNumber();
          pc1->lock()->unlock();

          // Determine generation number
          gen = gen1 + 1;
          parents = tr("RandomWalk: %1x%2 (%3 walkers, %4-%5)")
            .arg(gen1)
            .arg(id1)
            .arg(randw_numWalkers)
            .arg(randw_minWalk)
            .arg(randw_maxWalk);
          continue;
        }

        } // end switch
      }
      if (attemptCount >= 1000) {
        QString opStr;
        switch (op) {
        case OP_Crossover:   opStr = "crossover"; break;
        case OP_Twist:       opStr = "twist"; break;
        case OP_Exchange:    opStr = "exchange"; break;
        case OP_RandomWalk:  opStr = "random walk"; break;
        default:             opStr = "(unknown)"; break;
        }
        warning(tr("Unable to perform operation %1 after 1000 tries. Reselecting operator...").arg(opStr));
      }
    }
    initializeAndAddPC(pc, gen, parents);
    return;
  }

  ProtectedCluster* OptGAPC::generateRandomPC(unsigned int gen, unsigned int id)
  {
    // Create cluster
    ProtectedCluster *pc = new ProtectedCluster();
    QWriteLocker locker (pc->lock());

    pc->setStatus(ProtectedCluster::Empty);

    // Populate cluster
    pc->constructRandomCluster(comp.core, minIAD, maxIAD);

    // Set up geneology info
    pc->setGeneration(gen);
    pc->setIDNumber(id);
    pc->setParents("Randomly generated");
    pc->setStatus(ProtectedCluster::WaitingForOptimization);

    return pc;
  }

  void OptGAPC::resetDuplicates() {
    if (isStarting) {
      return;
    }
    QtConcurrent::run(this, &OptGAPC::resetDuplicates_);
  }

  void OptGAPC::resetDuplicates_() {
    QList<Structure*> *structures = m_tracker->list();
    ProtectedCluster *pc;
    for (int i = 0; i < structures->size(); i++) {
      pc = qobject_cast<ProtectedCluster*>(structures->at(i));
      pc->lock()->lockForWrite();
      pc->setChangedSinceDupChecked(true);
      if (pc->getStatus() == ProtectedCluster::Duplicate)
        pc->setStatus(ProtectedCluster::Optimized);
      pc->lock()->unlock();
    }
    checkForDuplicates();
    emit updateAllInfo();
  }

  void OptGAPC::checkForDuplicates() {
    if (isStarting) {
      return;
    }
    QtConcurrent::run(this, &OptGAPC::checkForDuplicates_);
  }

  // Helper function for QtConcurrent::blockingMapped below
  QHash<QString, QVariant> getFingerprint(Structure *s)
  { return s->getFingerprint();}

  // Helper function/struct for QtConcurrent::blockingMap below
  struct checkForDupsStruct {
    unsigned int i, j, numAtoms;
    double scale;
    QList<QHash<QString, QVariant> > *fps;
    Structure *s_i, *s_j;
    vector<double> *dist;
    QList<vector<double> > *freqs;
    OptGAPC *opt;
  };

  void checkIfDuplicates(checkForDupsStruct & st)
  {
    QHash<QString, QVariant> *fp_i=0, *fp_j=0;
    vector<double> *freq_i, *freq_j;

    fp_i = &((*st.fps)[st.i]);
    fp_j = &((*st.fps)[st.j]);
    freq_i = &((*st.freqs)[st.i]);
    freq_j = &((*st.freqs)[st.j]);

    double error = 0;
    if (!ProtectedCluster::compareIADDistributions((*st.dist),
                                                   (*freq_i),
                                                   (*freq_j),
                                                   0, 0.1,
                                                   &error))
      {
        st.opt->warning("Geometric fingerprint comparison failed. Aborting...");
        return;
      }
    error /= st.scale;
    qDebug() << error;
    if (error >= st.opt->tol_geo) return;
    if ( fabs(
              fp_i->value("enthalpy").toDouble() -
              fp_j->value("enthalpy").toDouble()
              ) /
         st.scale
         >=
         st.opt->tol_enthalpy
         ) return;
    // If we get here, all the fingerprint values match,
    // and we have a duplicate. Mark the xtal with the
    // highest enthalpy as a duplicate of the other.
    if (fp_i->value("enthalpy").toDouble() > fp_j->value("enthalpy").toDouble()) {
      st.s_i->lock()->lockForWrite();
      st.s_j->lock()->lockForRead();
      st.s_i->setStatus(Structure::Duplicate);
      st.s_i->setDuplicateString(QString("%1x%2 (%3)")
                                 .arg(st.s_j->getGeneration())
                                 .arg(st.s_j->getIDNumber())
                                 .arg(error, 5, 'g'));
      st.s_i->lock()->unlock();
      st.s_j->lock()->unlock();
    }
    else {
      st.s_j->lock()->lockForWrite();
      st.s_i->lock()->lockForRead();
      st.s_j->setStatus(Structure::Duplicate);
      st.s_j->setDuplicateString(QString("%1x%2 (%3)")
                                 .arg(st.s_i->getGeneration())
                                 .arg(st.s_i->getIDNumber())
                                 .arg(error, 5, 'g'));
      st.s_j->lock()->unlock();
      st.s_i->lock()->unlock();
    }
  }

  long factorial (long a)
  {
    if (a > 1)
      return (a * factorial (a-1));
    else
      return (1);
  }

  void OptGAPC::checkForDuplicates_() {
    QTime alltimer = QTime::currentTime();
    m_tracker->lockForRead();
    QList<Structure*> *structures = m_tracker->list();

    if (structures->size() == 0) return;
    // getFingerprint is defined above
    QTime gentimer = QTime::currentTime();
    QList<QHash<QString, QVariant> > fps = QtConcurrent::blockingMapped((*structures),
                                                                        getFingerprint);
    double gentime = gentimer.msecsTo(QTime::currentTime()) / (double)1000;

    m_tracker->unlock();

    QVariantList distv = fps.first().value("IADDist").toList();
    vector<double> dist;
    QList<vector<double> > freqs;
    QVariantList freqv;
    vector<double> *freq;

    QTime convtimer = QTime::currentTime();
    // Convert QVariant lists to doubles
    dist.reserve(distv.size());
    for (int i = 0; i < distv.size(); i++) {
      dist.push_back(distv.at(i).toDouble());
    }
    for (int i = 0; i < fps.size(); i++) {
      freqv = fps.at(i).value("IADFreq").toList();
      freqs.append(vector<double>());
      freq = &(freqs[i]);
      freq->reserve(freqv.size());
      for (int i = 0; i < freqv.size(); i++) {
        freq->push_back(freqv.at(i).toDouble());
      }
    }

    double convtime = convtimer.msecsTo(QTime::currentTime()) / (double)1000;

    QTime comptimer = QTime::currentTime();
    // compute tol scaling factor (number of atoms)
    double scale = 1;
    if (structures->size() > 0 &&
        structures->first()->numAtoms() != 0) {
      scale = structures->first()->numAtoms();
    }
    // Create helper structs
    QList<checkForDupsStruct> sts;
    Structure *s_i, *s_j;
    for (int i = 0; i < structures->size()-1; i++) {
      s_i = structures->at(i);
      if (s_i->getStatus() != Structure::Optimized) continue;
      for (int j = i+1; j < structures->size(); j++) {
        s_j = structures->at(j);
        if (s_j->getStatus() != Structure::Optimized) continue;
        if (s_i->hasChangedSinceDupChecked() ||
            s_j->hasChangedSinceDupChecked()) {
          checkForDupsStruct st;
          st.i = i; st.j = j; st.fps = &fps; st.s_i = s_i; st.s_j = s_j;
          st.scale = scale; st.dist = &dist; st.freqs = &freqs; st.opt = this;
          sts.append(st);
        }
      }
      s_i->setChangedSinceDupChecked(false);
    }
    QtConcurrent::blockingMap(sts, checkIfDuplicates);
    double comptime = comptimer.msecsTo(QTime::currentTime()) / (double)1000;
    double alltime = alltimer.msecsTo(QTime::currentTime()) / (double)1000;
    qDebug() << QString("Fingerprint timings: %1 structs | %2 (gen) + %3 (conv) + %4 (comp) = %5 (tot). %6 comps")
      .arg(fps.size())
      .arg(gentime,  5, 'g')
      .arg(convtime, 5, 'g')
      .arg(comptime, 5, 'g')
      .arg(alltime,  5, 'g')
      .arg(sts.size());
    emit updateAllInfo();
  }

  void OptGAPC::setOptimizer_string(const QString &IDString, const QString &filename)
  {
    if (IDString.toLower() == "openbabel")
      setOptimizer(new OpenBabelOptimizer (this, filename));
    else if (IDString.toLower() == "adf")
      setOptimizer(new ADFOptimizer (this, filename));
    else if (IDString.toLower() == "gulp")
      setOptimizer(new GULPOptimizer (this, filename));
    else
      error(tr("GAPC::setOptimizer: unable to determine optimizer from '%1'")
            .arg(IDString));
  }

  void OptGAPC::setOptimizer_enum(OptTypes opttype, const QString &filename)
  {
    switch (opttype) {
    case OT_OpenBabel:
      setOptimizer(new OpenBabelOptimizer (this, filename));
      break;
    case OT_ADF:
      setOptimizer(new ADFOptimizer (this, filename));
      break;
    case OT_GULP:
      setOptimizer(new GULPOptimizer (this, filename));
      break;
    default:
      error(tr("GAPC::setOptimizer: unable to determine optimizer from '%1'")
            .arg(QString::number((int)opttype)));
      break;
    }
  }

}