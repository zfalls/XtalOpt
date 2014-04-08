/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created: Mon Jan 13 08:11:07 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gapc/ui/dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GAPC__GAPCDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      32,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GAPC__GAPCDialog[] = {
    "GAPC::GAPCDialog\0\0saveSession()\0"
    "startSearch()\0"
};

void GAPC::GAPCDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GAPCDialog *_t = static_cast<GAPCDialog *>(_o);
        switch (_id) {
        case 0: _t->saveSession(); break;
        case 1: _t->startSearch(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GAPC::GAPCDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GAPC::GAPCDialog::staticMetaObject = {
    { &GlobalSearch::AbstractDialog::staticMetaObject, qt_meta_stringdata_GAPC__GAPCDialog,
      qt_meta_data_GAPC__GAPCDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GAPC::GAPCDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GAPC::GAPCDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GAPC::GAPCDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GAPC__GAPCDialog))
        return static_cast<void*>(const_cast< GAPCDialog*>(this));
    typedef GlobalSearch::AbstractDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int GAPC::GAPCDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef GlobalSearch::AbstractDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
