/****************************************************************************
** Meta object code from reading C++ file 'cluster.h'
**
** Created: Mon Jan 13 08:11:07 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gapc/structures/cluster.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cluster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GAPC__Cluster[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   15,   14,   14, 0x0a,
      87,   14,   14,   14, 0x0a,
     125,   14,  101,   14, 0x0a,
     152,  147,  142,   14, 0x0a,
     185,  178,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GAPC__Cluster[] = {
    "GAPC::Cluster\0\0comp,minIAD,maxIAD\0"
    "constructRandomCluster(QHash<uint,uint>,float,float)\0"
    "centerAtoms()\0QHash<QString,QVariant>\0"
    "getFingerprint()\0bool\0rcut\0"
    "checkForExplosion(double)\0factor\0"
    "expand(double)\0"
};

void GAPC::Cluster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Cluster *_t = static_cast<Cluster *>(_o);
        switch (_id) {
        case 0: _t->constructRandomCluster((*reinterpret_cast< const QHash<uint,uint>(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 1: _t->centerAtoms(); break;
        case 2: { QHash<QString,QVariant> _r = _t->getFingerprint();
            if (_a[0]) *reinterpret_cast< QHash<QString,QVariant>*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->checkForExplosion((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->expand((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GAPC::Cluster::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GAPC::Cluster::staticMetaObject = {
    { &GlobalSearch::Structure::staticMetaObject, qt_meta_stringdata_GAPC__Cluster,
      qt_meta_data_GAPC__Cluster, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GAPC::Cluster::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GAPC::Cluster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GAPC::Cluster::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GAPC__Cluster))
        return static_cast<void*>(const_cast< Cluster*>(this));
    typedef GlobalSearch::Structure QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int GAPC::Cluster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef GlobalSearch::Structure QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
