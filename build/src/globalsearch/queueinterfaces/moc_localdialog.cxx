/****************************************************************************
** Meta object code from reading C++ file 'localdialog.h'
**
** Created: Mon Jan 13 08:10:52 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/globalsearch/queueinterfaces/localdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'localdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlobalSearch__LocalQueueInterfaceConfigDialog[] = {

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
      47,   46,   46,   46, 0x0a,
      56,   46,   46,   46, 0x0a,
      65,   46,   46,   46, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GlobalSearch__LocalQueueInterfaceConfigDialog[] = {
    "GlobalSearch::LocalQueueInterfaceConfigDialog\0"
    "\0accept()\0reject()\0updateGUI()\0"
};

void GlobalSearch::LocalQueueInterfaceConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LocalQueueInterfaceConfigDialog *_t = static_cast<LocalQueueInterfaceConfigDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        case 2: _t->updateGUI(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GlobalSearch::LocalQueueInterfaceConfigDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalSearch::LocalQueueInterfaceConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GlobalSearch__LocalQueueInterfaceConfigDialog,
      qt_meta_data_GlobalSearch__LocalQueueInterfaceConfigDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalSearch::LocalQueueInterfaceConfigDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalSearch::LocalQueueInterfaceConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalSearch::LocalQueueInterfaceConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__LocalQueueInterfaceConfigDialog))
        return static_cast<void*>(const_cast< LocalQueueInterfaceConfigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int GlobalSearch::LocalQueueInterfaceConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
