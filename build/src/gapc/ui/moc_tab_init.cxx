/****************************************************************************
** Meta object code from reading C++ file 'tab_init.h'
**
** Created: Mon Jan 13 08:11:07 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gapc/ui/tab_init.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab_init.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GAPC__TabInit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      34,   25,   14,   14, 0x0a,
      56,   14,   14,   14, 0x2a,
      71,   25,   14,   14, 0x0a,
      94,   14,   14,   14, 0x2a,
     110,   14,   14,   14, 0x0a,
     126,  122,   14,   14, 0x0a,
     150,   14,   14,   14, 0x0a,
     170,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GAPC__TabInit[] = {
    "GAPC::TabInit\0\0lockGUI()\0filename\0"
    "readSettings(QString)\0readSettings()\0"
    "writeSettings(QString)\0writeSettings()\0"
    "updateGUI()\0str\0getComposition(QString)\0"
    "updateComposition()\0updateParams()\0"
};

void GAPC::TabInit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabInit *_t = static_cast<TabInit *>(_o);
        switch (_id) {
        case 0: _t->lockGUI(); break;
        case 1: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->readSettings(); break;
        case 3: _t->writeSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->writeSettings(); break;
        case 5: _t->updateGUI(); break;
        case 6: _t->getComposition((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->updateComposition(); break;
        case 8: _t->updateParams(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GAPC::TabInit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GAPC::TabInit::staticMetaObject = {
    { &GlobalSearch::AbstractTab::staticMetaObject, qt_meta_stringdata_GAPC__TabInit,
      qt_meta_data_GAPC__TabInit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GAPC::TabInit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GAPC::TabInit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GAPC::TabInit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GAPC__TabInit))
        return static_cast<void*>(const_cast< TabInit*>(this));
    typedef GlobalSearch::AbstractTab QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int GAPC::TabInit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef GlobalSearch::AbstractTab QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
