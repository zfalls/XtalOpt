/****************************************************************************
** Meta object code from reading C++ file 'tab_opt.h'
**
** Created: Mon Jan 13 08:11:07 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gapc/ui/tab_opt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab_opt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GAPC__TabOpt[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      33,   24,   13,   13, 0x0a,
      55,   13,   13,   13, 0x2a,
      70,   24,   13,   13, 0x0a,
      93,   13,   13,   13, 0x2a,
     109,   13,   13,   13, 0x0a,
     121,   13,   13,   13, 0x0a,
     151,  146,   13,   13, 0x0a,
     177,   13,   13,   13, 0x2a,
     187,   13,   13,   13, 0x0a,
     200,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GAPC__TabOpt[] = {
    "GAPC::TabOpt\0\0lockGUI()\0filename\0"
    "readSettings(QString)\0readSettings()\0"
    "writeSettings(QString)\0writeSettings()\0"
    "updateGUI()\0updateOptimizationInfo()\0"
    "item\0addSeed(QListWidgetItem*)\0addSeed()\0"
    "removeSeed()\0updateSeeds()\0"
};

void GAPC::TabOpt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabOpt *_t = static_cast<TabOpt *>(_o);
        switch (_id) {
        case 0: _t->lockGUI(); break;
        case 1: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->readSettings(); break;
        case 3: _t->writeSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->writeSettings(); break;
        case 5: _t->updateGUI(); break;
        case 6: _t->updateOptimizationInfo(); break;
        case 7: _t->addSeed((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->addSeed(); break;
        case 9: _t->removeSeed(); break;
        case 10: _t->updateSeeds(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GAPC::TabOpt::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GAPC::TabOpt::staticMetaObject = {
    { &GlobalSearch::AbstractTab::staticMetaObject, qt_meta_stringdata_GAPC__TabOpt,
      qt_meta_data_GAPC__TabOpt, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GAPC::TabOpt::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GAPC::TabOpt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GAPC::TabOpt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GAPC__TabOpt))
        return static_cast<void*>(const_cast< TabOpt*>(this));
    typedef GlobalSearch::AbstractTab QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int GAPC::TabOpt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef GlobalSearch::AbstractTab QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
