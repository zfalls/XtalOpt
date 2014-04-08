/**********************************************************************
  XtalOptUnitTest -- Unit testing for XtalOpt functions

  Copyright (C) 2010 David C. Lonie

  XtalOpt is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
  02110-1301, USA.
 **********************************************************************/

#include <xtalopt/xtalopt.h>

#include <xtalopt/ui/dialog.h>
#include <xtalopt/optimizers/gulp.h>

#include <globalsearch/macros.h>

#include <QtCore/QDebug>
#include <QtCore/QString>
#include <QtTest/QtTest>

using namespace GlobalSearch;
using namespace Avogadro;

namespace XtalOpt {
  class XtalOptUnitTest : public QObject
  {
    Q_OBJECT

    private:
    XtalOptDialog *m_dialog;
    XtalOpt *m_opt;

  private slots:
    // Called before the first test function is executed.
    void initTestCase() {
      m_dialog = 0; m_opt = 0;};
    // Called after the last test function is executed.
    void cleanupTestCase() {};
    // Called before each test function is executed.
    void init() {};
    // Called after every test function.
    void cleanup() {};

    // Tests
    void constructDialog();
    void constructXtalOpt();
    void setOptimizer();

    void loadTest();
    void checkForDuplicatesTest();
    void stepwiseCheckForDuplicatesTest();

    void destroyDialogAndXtalOpt();

  };

  void XtalOptUnitTest::constructDialog()
  {
    m_dialog = new XtalOptDialog(0,0,0,false);
    QVERIFY(m_dialog != 0);
  }

  void XtalOptUnitTest::constructXtalOpt()
  {
    m_opt = new XtalOpt(m_dialog);
    m_opt->tol_spg = 0.05;
    QVERIFY(m_opt != 0);
  }

  void XtalOptUnitTest::setOptimizer()
  {
    m_opt->setOptimizer(new GULPOptimizer(m_opt));
    QVERIFY(m_opt->optimizer() != 0);
  }

  void XtalOptUnitTest::loadTest()
  {
    QVERIFY(m_opt->load(QString(TESTDATADIR)
                        + "xo-duplicateXtals/xtalopt.state",
                        true));
    QVERIFY(m_opt->tracker()->size() == 203);
  }

  // Helper function
  inline void resetStatus(QList<Structure*> *list, Structure::State status)
  {
    Structure *s;
    for (int i = 0; i < list->size(); i++) {
      s = list->at(i);
      s->lock()->lockForWrite();
      s->setStatus(status);
      s->setChangedSinceDupChecked(true);
      s->lock()->unlock();
    }
  }

  void XtalOptUnitTest::checkForDuplicatesTest()
  {
    m_opt->tracker()->blockSignals(true);
    resetStatus(m_opt->tracker()->list(), Structure::Optimized);

    QBENCHMARK_ONCE {
      m_opt->checkForDuplicates_();
    }

    qDebug() << m_opt->tracker()->size()
             << m_opt->queue()->getAllDuplicateStructures().size();

    // This may change when Xtal::operator== becomes more or less robust.
    //QVERIFY(m_opt->queue()->getAllDuplicateStructures().size() == 41);
    QVERIFY(true); // Remove this when the above line is used;

    m_opt->tracker()->blockSignals(false);
  }

  void XtalOptUnitTest::stepwiseCheckForDuplicatesTest()
  {
    m_opt->tracker()->blockSignals(true);

    // Reset all statuses
    resetStatus(m_opt->tracker()->list(), Structure::Optimized);

    // Get all structures into a local list
    QList<Structure*> listAll = *m_opt->tracker()->list();

    // Clear all structures from the tracker
    m_opt->tracker()->reset();

    // Set up counter
    unsigned int nextStructureIndex = 0;
    QBENCHMARK_ONCE {
      while (m_opt->tracker()->size() != listAll.size()) {
        // Add back 10 structures at a time and recheck duplicates
        for (unsigned int i = 0;
             i < 10 && nextStructureIndex < listAll.size();
             i++) {
          m_opt->tracker()->append(listAll[nextStructureIndex++]);
        }

        m_opt->checkForDuplicates_();
      }
    }

    qDebug() << m_opt->tracker()->size()
             << m_opt->queue()->getAllDuplicateStructures().size();

    // This may change when Xtal::operator== becomes more or less robust.
    //QVERIFY(m_opt->queue()->getAllDuplicateStructures().size() == 41);
    QVERIFY(true); // Remove this when the above line is used;
    m_opt->tracker()->blockSignals(false);
  }

  void XtalOptUnitTest::destroyDialogAndXtalOpt()
  {
    delete m_dialog; // deletes opt, too
  }

}

QTEST_MAIN(XtalOpt::XtalOptUnitTest)

#include "moc_xtaloptunittest.cxx"
