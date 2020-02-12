/****************************************************************************
** Meta object code from reading C++ file 'ecganalyzercontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ECGAnalyzer/ecganalyzercontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ecganalyzercontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ECGAnalyzerController_t {
    QByteArrayData data[10];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ECGAnalyzerController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ECGAnalyzerController_t qt_meta_stringdata_ECGAnalyzerController = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ECGAnalyzerController"
QT_MOC_LITERAL(1, 22, 10), // "dataLoaded"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "setParamsECGBaseline"
QT_MOC_LITERAL(4, 55, 15), // "setParamsRPeaks"
QT_MOC_LITERAL(5, 71, 15), // "setParamsnWaves"
QT_MOC_LITERAL(6, 87, 13), // "setParamsHRV1"
QT_MOC_LITERAL(7, 101, 13), // "setParamsHRV2"
QT_MOC_LITERAL(8, 115, 15), // "setParamsHRVDFA"
QT_MOC_LITERAL(9, 131, 11) // "setParamsST"

    },
    "ECGAnalyzerController\0dataLoaded\0\0"
    "setParamsECGBaseline\0setParamsRPeaks\0"
    "setParamsnWaves\0setParamsHRV1\0"
    "setParamsHRV2\0setParamsHRVDFA\0setParamsST"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ECGAnalyzerController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ECGAnalyzerController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ECGAnalyzerController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataLoaded(); break;
        case 1: _t->setParamsECGBaseline(); break;
        case 2: _t->setParamsRPeaks(); break;
        case 3: _t->setParamsnWaves(); break;
        case 4: _t->setParamsHRV1(); break;
        case 5: _t->setParamsHRV2(); break;
        case 6: _t->setParamsHRVDFA(); break;
        case 7: _t->setParamsST(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ECGAnalyzerController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ECGAnalyzerController.data,
    qt_meta_data_ECGAnalyzerController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ECGAnalyzerController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ECGAnalyzerController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ECGAnalyzerController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ECGAnalyzerController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
