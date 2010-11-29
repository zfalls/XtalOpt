/**********************************************************************
  TabPlot - Tab with interactive plot

  Copyright (C) 2009-2010 by David Lonie

  This library is free software; you can redistribute it and/or modify
  it under the terms of the GNU Library General Public License as
  published by the Free Software Foundation; either version 2.1 of the
  License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public icense for more details.
 ***********************************************************************/

#ifndef TAB_PLOT_H
#define TAB_PLOT_H

#include <globalsearch/ui/abstracttab.h>

#include "ui_tab_plot.h"

class QReadWriteLock;

namespace GlobalSearch {
  class Structure;
}

namespace Avogadro {
  class PlotPoint;
}

namespace GAPC {
  class GAPCDialog;
  class OptGAPC;
  class ProtectedCluster;

  class TabPlot : public GlobalSearch::AbstractTab
  {
    Q_OBJECT

  public:
    explicit TabPlot( GAPCDialog *parent, OptGAPC *p );
    virtual ~TabPlot();

    enum PlotAxes {
      Structure_T = 0,
      Generation_T,
      Enthalpy_T
    };

    enum PlotType {
      Trend_PT = 0,
      DistHist_PT
    };

    enum LabelTypes {
      Structure_L = 0,
      Generation_L,
      Enthalpy_L
    };

  public slots:
    void readSettings(const QString &filename = "");
    void writeSettings(const QString &filename = "");
    void updateGUI();
    void disconnectGUI();
    void lockClearAndSelectPoint(Avogadro::PlotPoint *pp);
    void refreshPlot();
    void updatePlot();
    void plotTrends();
    void plotDistHist();
    void populatePCList();
    void selectMoleculeFromPlot(Avogadro::PlotPoint *pp);
    void selectMoleculeFromIndex(int index);
    void highlightPC(GlobalSearch::Structure *s);

  private:
    Ui::Tab_Plot ui;
    QReadWriteLock *m_plot_mutex;
    Avogadro::PlotObject *m_plotObject;
  };
}

#endif
