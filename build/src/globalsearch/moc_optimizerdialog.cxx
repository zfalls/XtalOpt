/****************************************************************************
** Meta object code from reading C++ file 'optimizerdialog.h'
**
** Created: Mon Jan 13 08:10:51 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/globalsearch/optimizerdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optimizerdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlobalSearch__OptimizerConfigDialog[] = {

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
      37,   36,   36,   36, 0x0a,
      51,   36,   36,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GlobalSearch__OptimizerConfigDialog[] = {
    "GlobalSearch::OptimizerConfigDialog\0"
    "\0updateState()\0updateGUI()\0"
};

void GlobalSearch::OptimizerConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OptimizerConfigDialog *_t = static_cast<OptimizerConfigDialog *>(_o);
        switch (_id) {
        case 0: _t->updateState(); break;
        case 1: _t->updateGUI(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GlobalSearch::OptimizerConfigDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalSearch::OptimizerConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GlobalSearch__OptimizerConfigDialog,
      qt_meta_data_GlobalSearch__OptimizerConfigDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalSearch::OptimizerConfigDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalSearch::OptimizerConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalSearch::OptimizerConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__OptimizerConfigDialog))
        return static_cast<void*>(const_cast< OptimizerConfigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int GlobalSearch::OptimizerConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
