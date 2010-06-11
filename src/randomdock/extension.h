/**********************************************************************
  RandomDock - Random Docking Search

  Copyright (C) 2009-2010 by David C. Lonie

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation version 2 of the License.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 ***********************************************************************/

#ifndef RDEXTENSION_H
#define RDEXTENSION_H

#include <randomdock/ui/dialog.h>

#include <avogadro/extension.h>

#include <QObject>
#include <QList>
#include <QString>
#include <QUndoCommand>

namespace RandomDock {

 class RandomDockExtension : public Extension
  {
    Q_OBJECT
    AVOGADRO_EXTENSION("RandomDock", tr("Random Docking Search"),
                       tr("Tool to search for docking configurations."))

    public:
      //! Constructor
      RandomDockExtension(QObject *parent=0);
      //! Deconstructor
      virtual ~RandomDockExtension();

      //! Perform Action
      virtual QList<QAction *> actions() const;
      virtual QUndoCommand* performAction(QAction *action, GLWidget *widget);
      virtual QString menuPath(QAction *action) const;
      virtual void setMolecule(Molecule *molecule);
      void writeSettings(QSettings &settings) const;
      void readSettings(QSettings &settings);

   public slots:
      void reemitMoleculeChanged(Structure *structure);

    private:
      QList<QAction *> m_actions;
      RandomDockDialog *m_dialog;
      Molecule *m_molecule;
  };

  class RandomDockExtensionFactory : public QObject, public PluginFactory
  {
      Q_OBJECT
      Q_INTERFACES(Avogadro::PluginFactory)
      AVOGADRO_EXTENSION_FACTORY(RandomDockExtension)
  };


} // end namespace RandomDock

#endif
