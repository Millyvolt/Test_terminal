/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../terminal/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[54];
    char stringdata0[541];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 16), // "writeDataPackets"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 4), // "data"
QT_MOC_LITERAL(34, 14), // "openSerialPort"
QT_MOC_LITERAL(49, 15), // "closeSerialPort"
QT_MOC_LITERAL(65, 5), // "about"
QT_MOC_LITERAL(71, 9), // "writeData"
QT_MOC_LITERAL(81, 8), // "readData"
QT_MOC_LITERAL(90, 11), // "handleError"
QT_MOC_LITERAL(102, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(131, 5), // "error"
QT_MOC_LITERAL(137, 21), // "on_sendButton_clicked"
QT_MOC_LITERAL(159, 27), // "on_HexCheckBox_stateChanged"
QT_MOC_LITERAL(187, 4), // "arg1"
QT_MOC_LITERAL(192, 36), // "on_hexInConsoleCheckBox_state..."
QT_MOC_LITERAL(229, 30), // "on_actionFastConnect_triggered"
QT_MOC_LITERAL(260, 22), // "on_sendButton2_clicked"
QT_MOC_LITERAL(283, 30), // "on_repeatCheckBox_stateChanged"
QT_MOC_LITERAL(314, 28), // "on_timeCheckBox_stateChanged"
QT_MOC_LITERAL(343, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(369, 22), // "on_lineEdit_textEdited"
QT_MOC_LITERAL(392, 28), // "on_searchResetButton_clicked"
QT_MOC_LITERAL(421, 28), // "on_checkBoxHex2_stateChanged"
QT_MOC_LITERAL(450, 31), // "on_checkBoxRepeat2_stateChanged"
QT_MOC_LITERAL(482, 31), // "on_checkBoxCapture_stateChanged"
QT_MOC_LITERAL(514, 26) // "on_actionPackets_triggered"

    },
    "MainWindow\0writeDataPackets\0\0data\0"
    "openSerialPort\0closeSerialPort\0about\0"
    "writeData\0readData\0handleError\0"
    "QSerialPort::SerialPortError\0error\0"
    "on_sendButton_clicked\0on_HexCheckBox_stateChanged\0"
    "arg1\0on_hexInConsoleCheckBox_stateChanged\0"
    "on_actionFastConnect_triggered\0"
    "on_sendButton2_clicked\0"
    "on_repeatCheckBox_stateChanged\0"
    "on_timeCheckBox_stateChanged\0"
    "on_lineEdit_returnPressed\0"
    "on_lineEdit_textEdited\0"
    "on_searchResetButton_clicked\0"
    "on_checkBoxHex2_stateChanged\0"
    "on_checkBoxRepeat2_stateChanged\0"
    "on_checkBoxCapture_stateChanged\0"
    "on_actionPackets_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  140,    2, 0x0a,    1 /* Public */,
       4,    0,  143,    2, 0x08,    3 /* Private */,
       5,    0,  144,    2, 0x08,    4 /* Private */,
       6,    0,  145,    2, 0x08,    5 /* Private */,
       7,    1,  146,    2, 0x08,    6 /* Private */,
       8,    0,  149,    2, 0x08,    8 /* Private */,
       9,    1,  150,    2, 0x08,    9 /* Private */,
      12,    0,  153,    2, 0x08,   11 /* Private */,
      13,    1,  154,    2, 0x08,   12 /* Private */,
      15,    1,  157,    2, 0x08,   14 /* Private */,
      16,    0,  160,    2, 0x08,   16 /* Private */,
      17,    0,  161,    2, 0x08,   17 /* Private */,
      18,    1,  162,    2, 0x08,   18 /* Private */,
      19,    1,  165,    2, 0x08,   20 /* Private */,
      20,    0,  168,    2, 0x08,   22 /* Private */,
      21,    1,  169,    2, 0x08,   23 /* Private */,
      22,    0,  172,    2, 0x08,   25 /* Private */,
      23,    1,  173,    2, 0x08,   26 /* Private */,
      24,    1,  176,    2, 0x08,   28 /* Private */,
      25,    1,  179,    2, 0x08,   30 /* Private */,
      26,    0,  182,    2, 0x08,   32 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->writeDataPackets((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->openSerialPort(); break;
        case 2: _t->closeSerialPort(); break;
        case 3: _t->about(); break;
        case 4: _t->writeData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 5: _t->readData(); break;
        case 6: _t->handleError((*reinterpret_cast< std::add_pointer_t<QSerialPort::SerialPortError>>(_a[1]))); break;
        case 7: _t->on_sendButton_clicked(); break;
        case 8: _t->on_HexCheckBox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_hexInConsoleCheckBox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_actionFastConnect_triggered(); break;
        case 11: _t->on_sendButton2_clicked(); break;
        case 12: _t->on_repeatCheckBox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_timeCheckBox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_lineEdit_returnPressed(); break;
        case 15: _t->on_lineEdit_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->on_searchResetButton_clicked(); break;
        case 17: _t->on_checkBoxHex2_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->on_checkBoxRepeat2_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->on_checkBoxCapture_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->on_actionPackets_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSerialPort::SerialPortError, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
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
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
