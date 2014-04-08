/****************************************************************************
** Meta object code from reading C++ file 'tab_progress.h'
**
** Created: Mon Jan 13 08:11:07 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/xtalopt/ui/tab_progress.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab_progress.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XtalOpt__TabProgress[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      56,   37,   21,   21, 0x05,
      86,   21,   21,   21, 0x05,
     105,   99,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     155,  146,   21,   21, 0x0a,
     177,   21,   21,   21, 0x2a,
     192,  146,   21,   21, 0x0a,
     215,   21,   21,   21, 0x2a,
     231,   21,   21,   21, 0x0a,
     247,   21,   21,   21, 0x0a,
     261,   21,   21,   21, 0x0a,
     301,   21,   21,   21, 0x0a,
     314,   21,   21,   21, 0x0a,
     330,   21,   21,   21, 0x0a,
     352,   99,   21,   21, 0x0a,
     394,  390,   21,   21, 0x0a,
     440,  438,   21,   21, 0x0a,
     480,   21,   21,   21, 0x0a,
     493,   21,   21,   21, 0x0a,
     505,   21,   21,   21, 0x0a,
     533,   21,   21,   21, 0x0a,
     554,   21,   21,   21, 0x0a,
     573,   21,   21,   21, 0x0a,
     594,   21,   21,   21, 0x0a,
     622,   21,   21,   21, 0x0a,
     651,   21,   21,   21, 0x0a,
     682,   21,   21,   21, 0x0a,
     708,   21,   21,   21, 0x0a,
     729,   21,   21,   21, 0x0a,
     749,   21,   21,   21, 0x0a,
     770,   21,   21,   21, 0x0a,
     783,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XtalOpt__TabProgress[] = {
    "XtalOpt::TabProgress\0\0deleteJob(int)\0"
    "opt,run,queue,fail\0updateStatus(int,int,int,int)\0"
    "infoUpdate()\0row,e\0"
    "updateTableEntry(int,XO_Prog_TableEntry)\0"
    "filename\0readSettings(QString)\0"
    "readSettings()\0writeSettings(QString)\0"
    "writeSettings()\0disconnectGUI()\0"
    "addNewEntry()\0newInfoUpdate(GlobalSearch::Structure*)\0"
    "updateInfo()\0updateAllInfo()\0"
    "updateProgressTable()\0"
    "setTableEntry(int,XO_Prog_TableEntry)\0"
    ",,,\0selectMoleculeFromProgress(int,int,int,int)\0"
    "s\0highlightXtal(GlobalSearch::Structure*)\0"
    "startTimer()\0stopTimer()\0"
    "progressContextMenu(QPoint)\0"
    "restartJobProgress()\0killXtalProgress()\0"
    "unkillXtalProgress()\0resetFailureCountProgress()\0"
    "randomizeStructureProgress()\0"
    "replaceWithOffspringProgress()\0"
    "injectStructureProgress()\0"
    "clipPOSCARProgress()\0enableRowTracking()\0"
    "disableRowTracking()\0updateRank()\0"
    "clearFiles()\0"
};

void XtalOpt::TabProgress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabProgress *_t = static_cast<TabProgress *>(_o);
        switch (_id) {
        case 0: _t->deleteJob((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->infoUpdate(); break;
        case 3: _t->updateTableEntry((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const XO_Prog_TableEntry(*)>(_a[2]))); break;
        case 4: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->readSettings(); break;
        case 6: _t->writeSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->writeSettings(); break;
        case 8: _t->disconnectGUI(); break;
        case 9: _t->addNewEntry(); break;
        case 10: _t->newInfoUpdate((*reinterpret_cast< GlobalSearch::Structure*(*)>(_a[1]))); break;
        case 11: _t->updateInfo(); break;
        case 12: _t->updateAllInfo(); break;
        case 13: _t->updateProgressTable(); break;
        case 14: _t->setTableEntry((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const XO_Prog_TableEntry(*)>(_a[2]))); break;
        case 15: _t->selectMoleculeFromProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 16: _t->highlightXtal((*reinterpret_cast< GlobalSearch::Structure*(*)>(_a[1]))); break;
        case 17: _t->startTimer(); break;
        case 18: _t->stopTimer(); break;
        case 19: _t->progressContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 20: _t->restartJobProgress(); break;
        case 21: _t->killXtalProgress(); break;
        case 22: _t->unkillXtalProgress(); break;
        case 23: _t->resetFailureCountProgress(); break;
        case 24: _t->randomizeStructureProgress(); break;
        case 25: _t->replaceWithOffspringProgress(); break;
        case 26: _t->injectStructureProgress(); break;
        case 27: _t->clipPOSCARProgress(); break;
        case 28: _t->enableRowTracking(); break;
        case 29: _t->disableRowTracking(); break;
        case 30: _t->updateRank(); break;
        case 31: _t->clearFiles(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XtalOpt::TabProgress::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XtalOpt::TabProgress::staticMetaObject = {
    { &GlobalSearch::AbstractTab::staticMetaObject, qt_meta_stringdata_XtalOpt__TabProgress,
      qt_meta_data_XtalOpt__TabProgress, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XtalOpt::TabProgress::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XtalOpt::TabProgress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XtalOpt::TabProgress::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__TabProgress))
        return static_cast<void*>(const_cast< TabProgress*>(this));
    typedef GlobalSearch::AbstractTab QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int XtalOpt::TabProgress::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef GlobalSearch::AbstractTab QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void XtalOpt::TabProgress::deleteJob(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XtalOpt::TabProgress::updateStatus(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XtalOpt::TabProgress::infoUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void XtalOpt::TabProgress::updateTableEntry(int _t1, const XO_Prog_TableEntry & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
