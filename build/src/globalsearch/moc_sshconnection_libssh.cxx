/****************************************************************************
** Meta object code from reading C++ file 'sshconnection_libssh.h'
**
** Created: Mon Jan 13 08:10:52 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/globalsearch/sshconnection_libssh.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sshconnection_libssh.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlobalSearch__SSHConnectionLibSSH[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   35,   34,   34, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   64,   34,   34, 0x0a,
      85,   34,   80,   34, 0x0a,
     132,   93,   80,   34, 0x0a,
     193,  172,   80,   34, 0x0a,
     248,  227,   80,   34, 0x0a,
     302,  284,   80,   34, 0x0a,
     344,  335,   80,   34, 0x0a,
     370,  172,   80,   34, 0x0a,
     409,  227,   80,   34, 0x0a,
     470,  450,   80,   34, 0x0a,
     550,  520,   80,   34, 0x0a,
     597,  586,   80,   34, 0x2a,
     628,   34,   80,   34, 0x0a,
     638,   34,   80,   34, 0x0a,
     668,  652,   80,   34, 0x0a,
     689,   34,   80,   34, 0x2a,
     706,  652,   80,   34, 0x0a,
     729,   34,   80,   34, 0x2a,
     748,   34,   80,   34, 0x0a,
     768,   34,   80,   34, 0x0a,
     798,  788,   80,   34, 0x0a,
     836,  831,   80,   34, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_GlobalSearch__SSHConnectionLibSSH[] = {
    "GlobalSearch::SSHConnectionLibSSH\0\0"
    "hexa\0unknownHostKey(QString)\0b\0"
    "setUsed(bool)\0bool\0inUse()\0"
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
    "isValid()\0isConnected()\0throwExceptions\0"
    "connectSession(bool)\0connectSession()\0"
    "reconnectSession(bool)\0reconnectSession()\0"
    "disconnectSession()\0reconnectIfNeeded()\0"
    "host,port\0addKeyToKnownHosts(QString,uint)\0"
    "host\0addKeyToKnownHosts(QString)\0"
};

void GlobalSearch::SSHConnectionLibSSH::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SSHConnectionLibSSH *_t = static_cast<SSHConnectionLibSSH *>(_o);
        switch (_id) {
        case 0: _t->unknownHostKey((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setUsed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->inUse();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->execute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->copyFileToServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->copyFileFromServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->readRemoteFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->removeRemoteFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->copyDirectoryToServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->copyDirectoryFromServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->readRemoteDirectoryContents((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->removeRemoteDirectory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->removeRemoteDirectory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isValid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isConnected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->connectSession((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->connectSession();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->reconnectSession((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->reconnectSession();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->disconnectSession();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->reconnectIfNeeded();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->addKeyToKnownHosts((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->addKeyToKnownHosts((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlobalSearch::SSHConnectionLibSSH::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalSearch::SSHConnectionLibSSH::staticMetaObject = {
    { &SSHConnection::staticMetaObject, qt_meta_stringdata_GlobalSearch__SSHConnectionLibSSH,
      qt_meta_data_GlobalSearch__SSHConnectionLibSSH, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalSearch::SSHConnectionLibSSH::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalSearch::SSHConnectionLibSSH::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalSearch::SSHConnectionLibSSH::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__SSHConnectionLibSSH))
        return static_cast<void*>(const_cast< SSHConnectionLibSSH*>(this));
    return SSHConnection::qt_metacast(_clname);
}

int GlobalSearch::SSHConnectionLibSSH::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SSHConnection::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void GlobalSearch::SSHConnectionLibSSH::unknownHostKey(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
