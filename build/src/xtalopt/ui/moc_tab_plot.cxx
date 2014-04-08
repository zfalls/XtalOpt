/****************************************************************************
** Meta object code from reading C++ file 'tab_plot.h'
**
** Created: Fri Feb 7 14:41:33 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/xtalopt/ui/tab_plot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab_plot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XtalOpt__TabPlot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
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
     115,   17,   17,   17, 0x0a,
     134,  131,   17,   17, 0x0a,
     174,  170,   17,   17, 0x0a,
     212,  131,   17,   17, 0x0a,
     247,   17,   17,   17, 0x0a,
     261,   17,   17,   17, 0x0a,
     274,   17,   17,   17, 0x0a,
     287,   17,   17,   17, 0x0a,
     302,   17,   17,   17, 0x0a,
     327,  321,   17,   17, 0x0a,
     358,  356,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XtalOpt__TabPlot[] = {
    "XtalOpt::TabPlot\0\0filename\0"
    "readSettings(QString)\0readSettings()\0"
    "writeSettings(QString)\0writeSettings()\0"
    "updateGUI()\0disconnectGUI()\0pp\0"
    "lockClearAndSelectPoint(PlotPoint*)\0"
    "x,y\0selectMoleculeFromPlot(double,double)\0"
    "selectMoleculeFromPlot(PlotPoint*)\0"
    "refreshPlot()\0updatePlot()\0plotTrends()\0"
    "plotDistHist()\0populateXtalList()\0"
    "index\0selectMoleculeFromIndex(int)\0s\0"
    "highlightXtal(GlobalSearch::Structure*)\0"
};

void XtalOpt::TabPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabPlot *_t = static_cast<TabPlot *>(_o);
        switch (_id) {
        case 0: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->readSettings(); break;
        case 2: _t->writeSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->writeSettings(); break;
        case 4: _t->updateGUI(); break;
        case 5: _t->disconnectGUI(); break;
        case 6: _t->lockClearAndSelectPoint((*reinterpret_cast< PlotPoint*(*)>(_a[1]))); break;
        case 7: _t->selectMoleculeFromPlot((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 8: _t->selectMoleculeFromPlot((*reinterpret_cast< PlotPoint*(*)>(_a[1]))); break;
        case 9: _t->refreshPlot(); break;
        case 10: _t->updatePlot(); break;
        case 11: _t->plotTrends(); break;
        case 12: _t->plotDistHist(); break;
        case 13: _t->populateXtalList(); break;
        case 14: _t->selectMoleculeFromIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->highlightXtal((*reinterpret_cast< GlobalSearch::Structure*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XtalOpt::TabPlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XtalOpt::TabPlot::staticMetaObject = {
    { &GlobalSearch::AbstractTab::staticMetaObject, qt_meta_stringdata_XtalOpt__TabPlot,
      qt_meta_data_XtalOpt__TabPlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XtalOpt::TabPlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XtalOpt::TabPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XtalOpt::TabPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__TabPlot))
        return static_cast<void*>(const_cast< TabPlot*>(this));
    typedef GlobalSearch::AbstractTab QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int XtalOpt::TabPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef GlobalSearch::AbstractTab QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
