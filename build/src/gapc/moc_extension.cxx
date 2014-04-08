/****************************************************************************
** Meta object code from reading C++ file 'extension.h'
**
** Created: Mon Jan 13 08:11:07 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gapc/extension.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extension.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GAPC__GAPCExtension[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   21,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GAPC__GAPCExtension[] = {
    "GAPC::GAPCExtension\0\0s\0"
    "reemitMoleculeChanged(GlobalSearch::Structure*)\0"
};

void GAPC::GAPCExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GAPCExtension *_t = static_cast<GAPCExtension *>(_o);
        switch (_id) {
        case 0: _t->reemitMoleculeChanged((*reinterpret_cast< GlobalSearch::Structure*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GAPC::GAPCExtension::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GAPC::GAPCExtension::staticMetaObject = {
    { &Avogadro::Extension::staticMetaObject, qt_meta_stringdata_GAPC__GAPCExtension,
      qt_meta_data_GAPC__GAPCExtension, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GAPC::GAPCExtension::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GAPC::GAPCExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GAPC::GAPCExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GAPC__GAPCExtension))
        return static_cast<void*>(const_cast< GAPCExtension*>(this));
    typedef Avogadro::Extension QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int GAPC::GAPCExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Avogadro::Extension QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_GAPC__GAPCExtensionFactory[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_GAPC__GAPCExtensionFactory[] = {
    "GAPC::GAPCExtensionFactory\0"
};

void GAPC::GAPCExtensionFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GAPC::GAPCExtensionFactory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GAPC::GAPCExtensionFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GAPC__GAPCExtensionFactory,
      qt_meta_data_GAPC__GAPCExtensionFactory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GAPC::GAPCExtensionFactory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GAPC::GAPCExtensionFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GAPC::GAPCExtensionFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GAPC__GAPCExtensionFactory))
        return static_cast<void*>(const_cast< GAPCExtensionFactory*>(this));
    if (!strcmp(_clname, "Avogadro::PluginFactory"))
        return static_cast< Avogadro::PluginFactory*>(const_cast< GAPCExtensionFactory*>(this));
    if (!strcmp(_clname, "net.sourceforge.avogadro.pluginfactory/1.5"))
        return static_cast< Avogadro::PluginFactory*>(const_cast< GAPCExtensionFactory*>(this));
    return QObject::qt_metacast(_clname);
}

int GAPC::GAPCExtensionFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
