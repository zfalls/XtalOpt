/****************************************************************************
** Meta object code from reading C++ file 'sshconnection.h'
**
** Created: Mon Jan 13 08:10:52 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/globalsearch/sshconnection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sshconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlobalSearch__SSHConnection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   29,   28,   28, 0x0a,
     109,   94,   28,   28, 0x2a,
     160,  150,   28,   28, 0x2a,
     198,  193,   28,   28, 0x2a,
     267,  228,  223,   28, 0x0a,
     328,  307,  223,   28, 0x0a,
     383,  362,  223,   28, 0x0a,
     437,  419,  223,   28, 0x0a,
     479,  470,  223,   28, 0x0a,
     505,  307,  223,   28, 0x0a,
     544,  362,  223,   28, 0x0a,
     605,  585,  223,   28, 0x0a,
     685,  655,  223,   28, 0x0a,
     732,  721,  223,   28, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_GlobalSearch__SSHConnection[] = {
    "GlobalSearch::SSHConnection\0\0"
    "host,user,pass,port\0"
    "setLoginDetails(QString,QString,QString,int)\0"
    "host,user,pass\0setLoginDetails(QString,QString,QString)\0"
    "host,user\0setLoginDetails(QString,QString)\0"
    "host\0setLoginDetails(QString)\0bool\0"
    "command,stdout_str,stderr_str,exitcode\0"
    "execute(QString,QString&,QString&,int&)\0"
    "localpath,remotepath\0"
    "copyFileToServer(QString,QString)\0"
    "remotepath,localpath\0"
    "copyFileFromServer(QString,QString)\0"
    "filename,contents\0readRemoteFile(QString,QString&)\0"
    "filename\0removeRemoteFile(QString)\0"
    "copyDirectoryToServer(QString,QString)\0"
    "copyDirectoryFromServer(QString,QString)\0"
    "remotepath,contents\0"
    "readRemoteDirectoryContents(QString,QStringList&)\0"
    "remotepath,onlyDeleteContents\0"
    "removeRemoteDirectory(QString,bool)\0"
    "remotepath\0removeRemoteDirectory(QString)\0"
};

void GlobalSearch::SSHConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SSHConnection *_t = static_cast<SSHConnection *>(_o);
        switch (_id) {
        case 0: _t->setLoginDetails((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->setLoginDetails((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->setLoginDetails((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->setLoginDetails((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: { bool _r = _t->execute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->copyFileToServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->copyFileFromServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->readRemoteFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->removeRemoteFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->copyDirectoryToServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->copyDirectoryFromServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->readRemoteDirectoryContents((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->removeRemoteDirectory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->removeRemoteDirectory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlobalSearch::SSHConnection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalSearch::SSHConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GlobalSearch__SSHConnection,
      qt_meta_data_GlobalSearch__SSHConnection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalSearch::SSHConnection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalSearch::SSHConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalSearch::SSHConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__SSHConnection))
        return static_cast<void*>(const_cast< SSHConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int GlobalSearch::SSHConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
