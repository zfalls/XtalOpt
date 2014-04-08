/****************************************************************************
** Meta object code from reading C++ file 'sge.h'
**
** Created: Mon Jan 13 08:10:52 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/globalsearch/queueinterfaces/sge.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sge.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlobalSearch__SgeQueueInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   33,   32,   32, 0x0a,
      64,   32,   32,   32, 0x2a,
      79,   33,   32,   32, 0x0a,
     102,   32,   32,   32, 0x2a,
     125,  123,  118,   32, 0x0a,
     146,  123,  118,   32, 0x0a,
     194,  123,  166,   32, 0x0a,
     220,  216,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GlobalSearch__SgeQueueInterface[] = {
    "GlobalSearch::SgeQueueInterface\0\0"
    "filename\0readSettings(QString)\0"
    "readSettings()\0writeSettings(QString)\0"
    "writeSettings()\0bool\0s\0startJob(Structure*)\0"
    "stopJob(Structure*)\0QueueInterface::QueueStatus\0"
    "getStatus(Structure*)\0sec\0setInterval(int)\0"
};

void GlobalSearch::SgeQueueInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SgeQueueInterface *_t = static_cast<SgeQueueInterface *>(_o);
        switch (_id) {
        case 0: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->readSettings(); break;
        case 2: _t->writeSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->writeSettings(); break;
        case 4: { bool _r = _t->startJob((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->stopJob((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QueueInterface::QueueStatus _r = _t->getStatus((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QueueInterface::QueueStatus*>(_a[0]) = _r; }  break;
        case 7: _t->setInterval((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlobalSearch::SgeQueueInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalSearch::SgeQueueInterface::staticMetaObject = {
    { &RemoteQueueInterface::staticMetaObject, qt_meta_stringdata_GlobalSearch__SgeQueueInterface,
      qt_meta_data_GlobalSearch__SgeQueueInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalSearch::SgeQueueInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalSearch::SgeQueueInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalSearch::SgeQueueInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__SgeQueueInterface))
        return static_cast<void*>(const_cast< SgeQueueInterface*>(this));
    return RemoteQueueInterface::qt_metacast(_clname);
}

int GlobalSearch::SgeQueueInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RemoteQueueInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
