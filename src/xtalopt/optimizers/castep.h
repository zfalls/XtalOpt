/**********************************************************************
  CASTEPOptimizer - Tools to interface with CASTEP

  Copyright (C) 2009-2010 by David C. Lonie

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation version 2 of the License.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 ***********************************************************************/

#ifndef CASTEPOPTIMIZER_H
#define CASTEPOPTIMIZER_H

#include <xtalopt/optimizers/xtaloptoptimizer.h>

#include <QtCore/QObject>

namespace GlobalSearch {
  class OptBase;
}

using namespace GlobalSearch;

namespace XtalOpt {
  class CASTEPOptimizer : public XtalOptOptimizer
  {
    Q_OBJECT

   public:
    CASTEPOptimizer(OptBase *parent, const QString &filename = "");

  };

} // end namespace XtalOpt

#endif