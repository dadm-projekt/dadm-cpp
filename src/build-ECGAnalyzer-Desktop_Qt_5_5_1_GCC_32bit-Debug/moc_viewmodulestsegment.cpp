/****************************************************************************
** Meta object code from reading C++ file 'viewmodulestsegment.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ECGAnalyzer/viewmodulestsegment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewmodulestsegment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ViewModuleStSegment_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewModuleStSegment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewModuleStSegment_t qt_meta_stringdata_ViewModuleStSegment = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ViewModuleStSegment"
QT_MOC_LITERAL(1, 20, 15), // "onButtonClicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16) // "visualiseResults"

    },
    "ViewModuleStSegment\0onButtonClicked\0"
    "\0visualiseResults"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewModuleStSegment[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ViewModuleStSegment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewModuleStSegment *_t = static_cast<ViewModuleStSegment *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onButtonClicked(); break;
        case 1: _t->visualiseResults(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ViewModuleStSegment::staticMetaObject = {
    { &ViewModule::staticMetaObject, qt_meta_stringdata_ViewModuleStSegment.data,
      qt_meta_data_ViewModuleStSegment,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ViewModuleStSegment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewModuleStSegment::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ViewModuleStSegment.stringdata0))
        return static_cast<void*>(const_cast< ViewModuleStSegment*>(this));
    return ViewModule::qt_metacast(_clname);
}

int ViewModuleStSegment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ViewModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
