/****************************************************************************
** Meta object code from reading C++ file 'queueinterface.h'
**
** Created: Mon Jan 13 08:10:52 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/globalsearch/queueinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'queueinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlobalSearch__QueueInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      39,   30,   29,   29, 0x0a,
      61,   29,   29,   29, 0x2a,
      76,   30,   29,   29, 0x0a,
      99,   29,   29,   29, 0x2a,
     122,  120,  115,   29, 0x0a,
     158,  150,  115,   29, 0x0a,
     204,  120,  115,   29, 0x0a,
     225,  120,  115,   29, 0x0a,
     273,  120,  245,   29, 0x0a,
     295,  120,  115,   29, 0x0a,
     351,  333,  115,   29, 0x0a,
     415,  395,  115,   29, 0x0a,
     506,  454,  115,   29, 0x0a,
     604,  566,  115,   29, 0x2a,
     688,  659,  115,   29, 0x2a,
     759,  738,  115,   29, 0x2a,
     804,   29,  796,   29, 0x0a,
     830,   29,  818,   29, 0x0a,
     853,   29,  115,   29, 0x0a,
     874,   29,  865,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GlobalSearch__QueueInterface[] = {
    "GlobalSearch::QueueInterface\0\0filename\0"
    "readSettings(QString)\0readSettings()\0"
    "writeSettings(QString)\0writeSettings()\0"
    "bool\0s\0writeInputFiles(Structure*)\0"
    "s,files\0writeFiles(Structure*,QHash<QString,QString>)\0"
    "startJob(Structure*)\0stopJob(Structure*)\0"
    "QueueInterface::QueueStatus\0"
    "getStatus(Structure*)\0"
    "prepareForStructureUpdate(Structure*)\0"
    "s,filename,exists\0"
    "checkIfFileExists(Structure*,QString,bool*)\0"
    "s,filename,contents\0"
    "fetchFile(Structure*,QString,QString*)\0"
    "s,matchText,filename,matches,exitcode,caseSensitive\0"
    "grepFile(Structure*,QString,QString,QStringList*,int*,bool)\0"
    "s,matchText,filename,matches,exitcode\0"
    "grepFile(Structure*,QString,QString,QStringList*,int*)\0"
    "s,matchText,filename,matches\0"
    "grepFile(Structure*,QString,QString,QStringList*)\0"
    "s,matchText,filename\0"
    "grepFile(Structure*,QString,QString)\0"
    "QString\0getIDString()\0QStringList\0"
    "getTemplateFileNames()\0hasDialog()\0"
    "QDialog*\0dialog()\0"
};

void GlobalSearch::QueueInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QueueInterface *_t = static_cast<QueueInterface *>(_o);
        switch (_id) {
        case 0: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->readSettings(); break;
        case 2: _t->writeSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->writeSettings(); break;
        case 4: { bool _r = _t->writeInputFiles((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->writeFiles((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QHash<QString,QString>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->startJob((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->stopJob((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QueueInterface::QueueStatus _r = _t->getStatus((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QueueInterface::QueueStatus*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->prepareForStructureUpdate((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->checkIfFileExists((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->fetchFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QStringList*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])),(*reinterpret_cast< const bool(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QStringList*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QStringList*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->getIDString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { QStringList _r = _t->getTemplateFileNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->hasDialog();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { QDialog* _r = _t->dialog();
            if (_a[0]) *reinterpret_cast< QDialog**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlobalSearch::QueueInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalSearch::QueueInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GlobalSearch__QueueInterface,
      qt_meta_data_GlobalSearch__QueueInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalSearch::QueueInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalSearch::QueueInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalSearch::QueueInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__QueueInterface))
        return static_cast<void*>(const_cast< QueueInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int GlobalSearch::QueueInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
