/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ECGAnalyzer/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 58, 30), // "on_tableWidget_3_cellActivated"
QT_MOC_LITERAL(5, 89, 3), // "row"
QT_MOC_LITERAL(6, 93, 6), // "column"
QT_MOC_LITERAL(7, 100, 23), // "on_comboBox_2_activated"
QT_MOC_LITERAL(8, 124, 4), // "arg1"
QT_MOC_LITERAL(9, 129, 23), // "on_comboBox_3_activated"
QT_MOC_LITERAL(10, 153, 4), // "arg2"
QT_MOC_LITERAL(11, 158, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(12, 182, 23), // "on_rPeaks_Start_clicked"
QT_MOC_LITERAL(13, 206, 21), // "on_HRV1_Start_clicked"
QT_MOC_LITERAL(14, 228, 21), // "on_HRV2_Start_clicked"
QT_MOC_LITERAL(15, 250, 22), // "on_Waves_Start_clicked"
QT_MOC_LITERAL(16, 273, 26), // "on_STSegment_Start_clicked"
QT_MOC_LITERAL(17, 300, 20) // "on_DFA_Start_clicked"

    },
    "MainWindow\0on_pushButton_clicked\0\0"
    "on_pushButton_2_clicked\0"
    "on_tableWidget_3_cellActivated\0row\0"
    "column\0on_comboBox_2_activated\0arg1\0"
    "on_comboBox_3_activated\0arg2\0"
    "on_pushButton_3_clicked\0on_rPeaks_Start_clicked\0"
    "on_HRV1_Start_clicked\0on_HRV2_Start_clicked\0"
    "on_Waves_Start_clicked\0"
    "on_STSegment_Start_clicked\0"
    "on_DFA_Start_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    2,   76,    2, 0x08 /* Private */,
       7,    1,   81,    2, 0x08 /* Private */,
       9,    1,   84,    2, 0x08 /* Private */,
      11,    0,   87,    2, 0x08 /* Private */,
      12,    0,   88,    2, 0x08 /* Private */,
      13,    0,   89,    2, 0x08 /* Private */,
      14,    0,   90,    2, 0x08 /* Private */,
      15,    0,   91,    2, 0x08 /* Private */,
      16,    0,   92,    2, 0x08 /* Private */,
      17,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_tableWidget_3_cellActivated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_comboBox_2_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_comboBox_3_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_rPeaks_Start_clicked(); break;
        case 7: _t->on_HRV1_Start_clicked(); break;
        case 8: _t->on_HRV2_Start_clicked(); break;
        case 9: _t->on_Waves_Start_clicked(); break;
        case 10: _t->on_STSegment_Start_clicked(); break;
        case 11: _t->on_DFA_Start_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
