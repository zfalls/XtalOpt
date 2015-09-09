/**********************************************************************
  XtalOpt - Holds all data for genetic optimization

  Copyright (C) 2009-2011 by David C. Lonie

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation version 2 of the License.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 ***********************************************************************/

#ifndef XTALOPT_H
#define XTALOPT_H

#include <xtalopt/structures/xtal.h>
#include <xtalopt/genetic.h>

#include <globalsearch/optbase.h>
#include <globalsearch/queuemanager.h>
#include <globalsearch/macros.h>

#include <QtCore/QDebug>
#include <QtCore/QMutex>
#include <QtCore/QFuture>
#include <QtCore/QStringList>
#include <QtCore/QReadWriteLock>

#include <QtGui/QInputDialog>

namespace GlobalSearch {
  class SlottedWaitCondition;
}

namespace XtalOpt {
  class XtalOptDialog;

  struct XtalCompositionStruct
  {
    double minRadius;
    unsigned int quantity;
  };

  class XtalOpt : public GlobalSearch::OptBase
  {
    Q_OBJECT

   public:
    explicit XtalOpt(XtalOptDialog *parent);
    virtual ~XtalOpt();

    enum OptTypes {
      OT_VASP = 0,
      OT_GULP,
      OT_PWscf,
      OT_CASTEP,
      OT_SIESTA
    };

    enum QueueInterfaces {
      QI_LOCAL = 0
#ifdef ENABLE_SSH
      ,
      QI_PBS,
      QI_SGE,
      QI_SLURM,
      QI_LSF,
      QI_LOADLEVELER
#endif // ENABLE_SSH
    };

    enum Operators {
      OP_Crossover = 0,
      OP_Stripple,
      OP_Permustrain
    };

    Xtal* generateRandomXtal(uint generation, uint id);
    bool addSeed(const QString & filename);
    GlobalSearch::Structure* replaceWithRandom(GlobalSearch::Structure *s,
                                               const QString & reason = "");
    GlobalSearch::Structure* replaceWithOffspring(GlobalSearch::Structure *s,
                                                  const QString &reason = "");
    bool checkLimits();
    bool checkXtal(Xtal *xtal, QString * err = NULL);
    QString interpretTemplate(const QString & templateString, GlobalSearch::Structure* structure);
    QString getTemplateKeywordHelp();
    bool load(const QString & filename, const bool forceReadOnly = false);

    bool loaded;

    uint numInitial;                    // Number of initial structures

    uint popSize;                       // Population size

    uint p_cross;                       // Percentage of new structures by crossover
    uint p_strip;	                // Percentage of new structures by stripple
    uint p_perm;                        // Percentage of new structures by permustrain

    uint cross_minimumContribution;	// Minimum contribution each parent in crossover

    double strip_amp_min;		// Minimum amplitude of periodic displacement
    double strip_amp_max;		// Maximum amplitude of periodic displacement
    uint strip_per1;			// Number of cosine waves in direction 1
    uint strip_per2;			// Number of cosine waves in direction 2
    double strip_strainStdev_min;	// Minimum standard deviation of epsilon in the stripple strain matrix
    double strip_strainStdev_max;	// Maximum standard deviation of epsilon in the stripple strain matrix

    uint perm_ex;                       // Number of times atoms are swapped in permustrain
    double perm_strainStdev_max;	// Max standard deviation of epsilon in the permustrain strain matrix

    double
      a_min,            a_max,		// Limits for lattice
      b_min,            b_max,
      c_min,            c_max,
      alpha_min,        alpha_max,
      beta_min,         beta_max,
      gamma_min,        gamma_max,
      vol_min, vol_max, vol_fixed,
      scaleFactor, minRadius;

    int
        divisions,                  // Number of divisions for mitosis
        ax,                          // Number of divisions for cell vector 'a'
        bx,                          // Number of divisions for cell vector 'b'
        cx;                          // Number of divisions for cell vector 'c'

    double tol_xcLength;        	// Duplicate matching tolerances
    double tol_xcAngle;
    double tol_spg;

    bool using_fixed_volume;
    bool using_interatomicDistanceLimit;
    bool using_mitosis;
    bool using_subcellPrint;

    QHash<uint, XtalCompositionStruct> comp;
    QStringList seedList;

    QMutex *xtalInitMutex;

  public slots:
    void startSearch();
    void generateNewStructure();
    Xtal* generateNewXtal();
    void initializeAndAddXtal(Xtal *xtal,
                              unsigned int generation,
                              const QString &parents);
    void printSubXtal(Xtal *xtal,
                              unsigned int generation,
                              uint id);
    void resetSpacegroups();
    void resetDuplicates();
    void checkForDuplicates();

   protected:
    friend class XtalOptUnitTest;
    void resetSpacegroups_();
    void resetDuplicates_();
    void checkForDuplicates_();
    void generateNewStructure_();

    void interpretKeyword(QString &keyword, GlobalSearch::Structure* structure);
    QString getTemplateKeywordHelp_xtalopt();

    GlobalSearch::SlottedWaitCondition *m_initWC;
  };

} // end namespace XtalOpt

#endif
