/****************************************************************************
** Meta object code from reading C++ file 'local.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/globalsearch/queueinterfaces/local.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'local.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlobalSearch__LocalQueueProcess[] = {

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
      32,   45,   45,   45, 0x0a,
      46,   45,   45,   45, 0x0a,
      60,   45,   69,   45, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GlobalSearch__LocalQueueProcess[] = {
    "GlobalSearch::LocalQueueProcess\0"
    "setRunning()\0\0setFinished()\0status()\0"
    "Status\0"
};

void GlobalSearch::LocalQueueProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LocalQueueProcess *_t = static_cast<LocalQueueProcess *>(_o);
        switch (_id) {
        case 0: _t->setRunning(); break;
        case 1: _t->setFinished(); break;
        case 2: { Status _r = _t->status();
            if (_a[0]) *reinterpret_cast< Status*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlobalSearch::LocalQueueProcess::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalSearch::LocalQueueProcess::staticMetaObject = {
    { &QProcess::staticMetaObject, qt_meta_stringdata_GlobalSearch__LocalQueueProcess,
      qt_meta_data_GlobalSearch__LocalQueueProcess, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalSearch::LocalQueueProcess::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalSearch::LocalQueueProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalSearch::LocalQueueProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__LocalQueueProcess))
        return static_cast<void*>(const_cast< LocalQueueProcess*>(this));
    return QProcess::qt_metacast(_clname);
}

int GlobalSearch::LocalQueueProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_GlobalSearch__LocalQueueInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   80,   88,   93, 0x0a,
      94,  115,   88,   93, 0x0a,
     117,  115,   88,   93, 0x0a,
     137,  115,  159,   93, 0x0a,
     187,  115,   88,   93, 0x0a,
     225,  269,   88,   93, 0x0a,
     287,  326,   88,   93, 0x0a,
     346,  406,   88,   93, 0x0a,
     458,  513,   88,   93, 0x2a,
     551,  601,   88,   93, 0x2a,
     630,  667,   88,   93, 0x2a,
     688,   93,  697,   93, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GlobalSearch__LocalQueueInterface[] = {
    "GlobalSearch::LocalQueueInterface\0"
    "writeFiles(Structure*,QHash<QString,QString>)\0"
    "s,files\0bool\0\0startJob(Structure*)\0s\0"
    "stopJob(Structure*)\0getStatus(Structure*)\0"
    "QueueInterface::QueueStatus\0"
    "prepareForStructureUpdate(Structure*)\0"
    "checkIfFileExists(Structure*,QString,bool*)\0"
    "s,filename,exists\0"
    "fetchFile(Structure*,QString,QString*)\0"
    "s,filename,contents\0"
    "grepFile(Structure*,QString,QString,QStringList*,int*,bool)\0"
    "s,matchText,filename,matches,exitcode,caseSensitive\0"
    "grepFile(Structure*,QString,QString,QStringList*,int*)\0"
    "s,matchText,filename,matches,exitcode\0"
    "grepFile(Structure*,QString,QString,QStringList*)\0"
    "s,matchText,filename,matches\0"
    "grepFile(Structure*,QString,QString)\0"
    "s,matchText,filename\0dialog()\0QDialog*\0"
};

void GlobalSearch::LocalQueueInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LocalQueueInterface *_t = static_cast<LocalQueueInterface *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->writeFiles((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QHash<QString,QString>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->startJob((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->stopJob((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { QueueInterface::QueueStatus _r = _t->getStatus((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QueueInterface::QueueStatus*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->prepareForStructureUpdate((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->checkIfFileExists((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->fetchFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QStringList*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])),(*reinterpret_cast< const bool(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QStringList*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QStringList*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QDialog* _r = _t->dialog();
            if (_a[0]) *reinterpret_cast< QDialog**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlobalSearch::LocalQueueInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalSearch::LocalQueueInterface::staticMetaObject = {
    { &QueueInterface::staticMetaObject, qt_meta_stringdata_GlobalSearch__LocalQueueInterface,
      qt_meta_data_GlobalSearch__LocalQueueInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalSearch::LocalQueueInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalSearch::LocalQueueInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalSearch::LocalQueueInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__LocalQueueInterface))
        return static_cast<void*>(const_cast< LocalQueueInterface*>(this));
    return QueueInterface::qt_metacast(_clname);
}

int GlobalSearch::LocalQueueInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QueueInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
