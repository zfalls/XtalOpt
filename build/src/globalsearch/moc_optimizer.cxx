/****************************************************************************
** Meta object code from reading C++ file 'optimizer.h'
**
** Created: Mon Jan 13 08:10:51 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/globalsearch/optimizer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optimizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlobalSearch__Optimizer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      65,   30,   25,   24, 0x0a,
     120,   98,   25,   24, 0x0a,
     153,   98,   25,   24, 0x0a,
     198,  185,   25,   24, 0x0a,
     248,  232,   25,   24, 0x0a,
     276,  274,   24,   24, 0x0a,
     294,  274,   24,   24, 0x0a,
     312,  274,   24,   24, 0x0a,
     330,  274,   24,   24, 0x0a,
     356,   24,  348,   24, 0x0a,
     374,   24,  348,   24, 0x0a,
     390,   24,  348,   24, 0x0a,
     407,   24,  348,   24, 0x0a,
     447,  274,  424,   24, 0x0a,
     483,   24,   25,   24, 0x0a,
     504,   24,  495,   24, 0x0a,
     513,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_GlobalSearch__Optimizer[] = {
    "GlobalSearch::Optimizer\0\0bool\0"
    "filename,templateData,optStepIndex\0"
    "setTemplate(QString,QString,int)\0"
    "filename,templateData\0"
    "setTemplate(QString,QStringList)\0"
    "appendTemplate(QString,QString)\0"
    "optStepIndex\0removeAllTemplatesForOptStep(int)\0"
    "identifier,data\0setData(QString,QVariant)\0"
    "s\0setUser1(QString)\0setUser2(QString)\0"
    "setUser3(QString)\0setUser4(QString)\0"
    "QString\0localRunCommand()\0stdinFilename()\0"
    "stdoutFilename()\0stderrFilename()\0"
    "QHash<QString,QString>\0"
    "getInterpretedTemplates(Structure*)\0"
    "hasDialog()\0QDialog*\0dialog()\0"
    "updateQueueInterface()\0"
};

void GlobalSearch::Optimizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Optimizer *_t = static_cast<Optimizer *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->setTemplate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->setTemplate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->appendTemplate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->removeAllTemplatesForOptStep((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->setData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->setUser1((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setUser2((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setUser3((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setUser4((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: { QString _r = _t->localRunCommand();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->stdinFilename();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->stdoutFilename();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->stderrFilename();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QHash<QString,QString> _r = _t->getInterpretedTemplates((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHash<QString,QString>*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->hasDialog();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QDialog* _r = _t->dialog();
            if (_a[0]) *reinterpret_cast< QDialog**>(_a[0]) = _r; }  break;
        case 16: _t->updateQueueInterface(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlobalSearch::Optimizer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalSearch::Optimizer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GlobalSearch__Optimizer,
      qt_meta_data_GlobalSearch__Optimizer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalSearch::Optimizer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalSearch::Optimizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalSearch::Optimizer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__Optimizer))
        return static_cast<void*>(const_cast< Optimizer*>(this));
    return QObject::qt_metacast(_clname);
}

int GlobalSearch::Optimizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
