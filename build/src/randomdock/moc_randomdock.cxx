/****************************************************************************
** Meta object code from reading C++ file 'randomdock.h'
**
** Created: Mon Jan 13 08:11:07 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/randomdock/randomdock.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'randomdock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RandomDock__RandomDock[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      38,   23,   23,   23, 0x0a,
      67,   61,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RandomDock__RandomDock[] = {
    "RandomDock::RandomDock\0\0startSearch()\0"
    "generateNewStructure()\0scene\0"
    "initializeAndAddScene(Scene*)\0"
};

void RandomDock::RandomDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RandomDock *_t = static_cast<RandomDock *>(_o);
        switch (_id) {
        case 0: _t->startSearch(); break;
        case 1: _t->generateNewStructure(); break;
        case 2: _t->initializeAndAddScene((*reinterpret_cast< Scene*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RandomDock::RandomDock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RandomDock::RandomDock::staticMetaObject = {
    { &GlobalSearch::OptBase::staticMetaObject, qt_meta_stringdata_RandomDock__RandomDock,
      qt_meta_data_RandomDock__RandomDock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RandomDock::RandomDock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RandomDock::RandomDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RandomDock::RandomDock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RandomDock__RandomDock))
        return static_cast<void*>(const_cast< RandomDock*>(this));
    typedef GlobalSearch::OptBase QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int RandomDock::RandomDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef GlobalSearch::OptBase QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
