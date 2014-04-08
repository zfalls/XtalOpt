/****************************************************************************
** Meta object code from reading C++ file 'gapc.h'
**
** Created: Mon Jan 13 08:11:07 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gapc/gapc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gapc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GAPC__OptGAPC[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      31,   29,   14,   14, 0x0a,
      74,   14,   14,   14, 0x0a,
     112,   97,   14,   14, 0x0a,
     163,   14,   14,   14, 0x0a,
     181,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GAPC__OptGAPC[] = {
    "GAPC::OptGAPC\0\0startSearch()\0s\0"
    "checkOptimizedPC(GlobalSearch::Structure*)\0"
    "generateNewStructure()\0pc,gen,parents\0"
    "initializeAndAddPC(ProtectedCluster*,uint,QString)\0"
    "resetDuplicates()\0checkForDuplicates()\0"
};

void GAPC::OptGAPC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OptGAPC *_t = static_cast<OptGAPC *>(_o);
        switch (_id) {
        case 0: _t->startSearch(); break;
        case 1: _t->checkOptimizedPC((*reinterpret_cast< GlobalSearch::Structure*(*)>(_a[1]))); break;
        case 2: _t->generateNewStructure(); break;
        case 3: _t->initializeAndAddPC((*reinterpret_cast< ProtectedCluster*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->resetDuplicates(); break;
        case 5: _t->checkForDuplicates(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GAPC::OptGAPC::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GAPC::OptGAPC::staticMetaObject = {
    { &GlobalSearch::OptBase::staticMetaObject, qt_meta_stringdata_GAPC__OptGAPC,
      qt_meta_data_GAPC__OptGAPC, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GAPC::OptGAPC::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GAPC::OptGAPC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GAPC::OptGAPC::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GAPC__OptGAPC))
        return static_cast<void*>(const_cast< OptGAPC*>(this));
    typedef GlobalSearch::OptBase QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int GAPC::OptGAPC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef GlobalSearch::OptBase QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
