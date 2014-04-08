/****************************************************************************
** Meta object code from reading C++ file 'tab_edit.h'
**
** Created: Mon Jan 13 08:11:07 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/xtalopt/ui/tab_edit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab_edit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XtalOpt__TabEdit[] = {

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
      27,   18,   17,   17, 0x0a,
      49,   17,   17,   17, 0x2a,
      64,   18,   17,   17, 0x0a,
      87,   17,   17,   17, 0x2a,
     103,   17,   17,   17, 0x0a,
     122,   17,   17,   17, 0x0a,
     138,   17,   17,   17, 0x0a,
     166,   17,  161,   17, 0x09,
     198,  193,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_XtalOpt__TabEdit[] = {
    "XtalOpt::TabEdit\0\0filename\0"
    "readSettings(QString)\0readSettings()\0"
    "writeSettings(QString)\0writeSettings()\0"
    "updateEditWidget()\0appendOptStep()\0"
    "removeCurrentOptStep()\0bool\0"
    "generateVASP_POTCAR_info()\0item\0"
    "changePOTCAR(QListWidgetItem*)\0"
};

void XtalOpt::TabEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabEdit *_t = static_cast<TabEdit *>(_o);
        switch (_id) {
        case 0: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->readSettings(); break;
        case 2: _t->writeSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->writeSettings(); break;
        case 4: _t->updateEditWidget(); break;
        case 5: _t->appendOptStep(); break;
        case 6: _t->removeCurrentOptStep(); break;
        case 7: { bool _r = _t->generateVASP_POTCAR_info();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->changePOTCAR((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XtalOpt::TabEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XtalOpt::TabEdit::staticMetaObject = {
    { &GlobalSearch::DefaultEditTab::staticMetaObject, qt_meta_stringdata_XtalOpt__TabEdit,
      qt_meta_data_XtalOpt__TabEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XtalOpt::TabEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XtalOpt::TabEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XtalOpt::TabEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__TabEdit))
        return static_cast<void*>(const_cast< TabEdit*>(this));
    typedef GlobalSearch::DefaultEditTab QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int XtalOpt::TabEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef GlobalSearch::DefaultEditTab QMocSuperClass;
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
