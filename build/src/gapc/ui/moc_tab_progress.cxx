/****************************************************************************
** Meta object code from reading C++ file 'tab_progress.h'
**
** Created: Mon Jan 13 08:11:07 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gapc/ui/tab_progress.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab_progress.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GAPC__TabProgress[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      53,   34,   18,   18, 0x05,
      83,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     105,   96,   18,   18, 0x0a,
     127,   18,   18,   18, 0x2a,
     142,   96,   18,   18, 0x0a,
     165,   18,   18,   18, 0x2a,
     181,   18,   18,   18, 0x0a,
     197,   18,   18,   18, 0x0a,
     211,   18,   18,   18, 0x0a,
     251,   18,   18,   18, 0x0a,
     264,   18,   18,   18, 0x0a,
     280,   18,   18,   18, 0x0a,
     306,  302,   18,   18, 0x0a,
     352,  350,   18,   18, 0x0a,
     390,   18,   18,   18, 0x0a,
     403,   18,   18,   18, 0x0a,
     415,   18,   18,   18, 0x0a,
     443,   18,   18,   18, 0x0a,
     464,   18,   18,   18, 0x0a,
     481,   18,   18,   18, 0x0a,
     500,   18,   18,   18, 0x0a,
     528,   18,   18,   18, 0x0a,
     557,   18,   18,   18, 0x0a,
     577,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GAPC__TabProgress[] = {
    "GAPC::TabProgress\0\0deleteJob(int)\0"
    "opt,run,queue,fail\0updateStatus(int,int,int,int)\0"
    "infoUpdate()\0filename\0readSettings(QString)\0"
    "readSettings()\0writeSettings(QString)\0"
    "writeSettings()\0disconnectGUI()\0"
    "addNewEntry()\0newInfoUpdate(GlobalSearch::Structure*)\0"
    "updateInfo()\0updateAllInfo()\0"
    "updateProgressTable()\0,,,\0"
    "selectMoleculeFromProgress(int,int,int,int)\0"
    "s\0highlightPC(GlobalSearch::Structure*)\0"
    "startTimer()\0stopTimer()\0"
    "progressContextMenu(QPoint)\0"
    "restartJobProgress()\0killPCProgress()\0"
    "unkillPCProgress()\0resetFailureCountProgress()\0"
    "randomizeStructureProgress()\0"
    "enableRowTracking()\0disableRowTracking()\0"
};

void GAPC::TabProgress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabProgress *_t = static_cast<TabProgress *>(_o);
        switch (_id) {
        case 0: _t->deleteJob((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->infoUpdate(); break;
        case 3: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->readSettings(); break;
        case 5: _t->writeSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->writeSettings(); break;
        case 7: _t->disconnectGUI(); break;
        case 8: _t->addNewEntry(); break;
        case 9: _t->newInfoUpdate((*reinterpret_cast< GlobalSearch::Structure*(*)>(_a[1]))); break;
        case 10: _t->updateInfo(); break;
        case 11: _t->updateAllInfo(); break;
        case 12: _t->updateProgressTable(); break;
        case 13: _t->selectMoleculeFromProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 14: _t->highlightPC((*reinterpret_cast< GlobalSearch::Structure*(*)>(_a[1]))); break;
        case 15: _t->startTimer(); break;
        case 16: _t->stopTimer(); break;
        case 17: _t->progressContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 18: _t->restartJobProgress(); break;
        case 19: _t->killPCProgress(); break;
        case 20: _t->unkillPCProgress(); break;
        case 21: _t->resetFailureCountProgress(); break;
        case 22: _t->randomizeStructureProgress(); break;
        case 23: _t->enableRowTracking(); break;
        case 24: _t->disableRowTracking(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GAPC::TabProgress::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GAPC::TabProgress::staticMetaObject = {
    { &GlobalSearch::AbstractTab::staticMetaObject, qt_meta_stringdata_GAPC__TabProgress,
      qt_meta_data_GAPC__TabProgress, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GAPC::TabProgress::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GAPC::TabProgress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GAPC::TabProgress::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GAPC__TabProgress))
        return static_cast<void*>(const_cast< TabProgress*>(this));
    typedef GlobalSearch::AbstractTab QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int GAPC::TabProgress::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef GlobalSearch::AbstractTab QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void GAPC::TabProgress::deleteJob(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GAPC::TabProgress::updateStatus(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GAPC::TabProgress::infoUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
