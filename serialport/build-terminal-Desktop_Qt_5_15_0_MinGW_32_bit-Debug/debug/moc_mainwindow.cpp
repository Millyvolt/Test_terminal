/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../terminal/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[465];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "openSerialPort"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "closeSerialPort"
QT_MOC_LITERAL(4, 43, 5), // "about"
QT_MOC_LITERAL(5, 49, 9), // "writeData"
QT_MOC_LITERAL(6, 59, 4), // "data"
QT_MOC_LITERAL(7, 64, 8), // "readData"
QT_MOC_LITERAL(8, 73, 11), // "handleError"
QT_MOC_LITERAL(9, 85, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(10, 114, 5), // "error"
QT_MOC_LITERAL(11, 120, 21), // "on_sendButton_clicked"
QT_MOC_LITERAL(12, 142, 27), // "on_HexCheckBox_stateChanged"
QT_MOC_LITERAL(13, 170, 4), // "arg1"
QT_MOC_LITERAL(14, 175, 36), // "on_hexInConsoleCheckBox_state..."
QT_MOC_LITERAL(15, 212, 30), // "on_actionFastConnect_triggered"
QT_MOC_LITERAL(16, 243, 22), // "on_sendButton2_clicked"
QT_MOC_LITERAL(17, 266, 30), // "on_repeatCheckBox_stateChanged"
QT_MOC_LITERAL(18, 297, 28), // "on_timeCheckBox_stateChanged"
QT_MOC_LITERAL(19, 326, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(20, 352, 22), // "on_lineEdit_textEdited"
QT_MOC_LITERAL(21, 375, 28), // "on_searchResetButton_clicked"
QT_MOC_LITERAL(22, 404, 28), // "on_checkBoxHex2_stateChanged"
QT_MOC_LITERAL(23, 433, 31) // "on_checkBoxRepeat2_stateChanged"

    },
    "MainWindow\0openSerialPort\0\0closeSerialPort\0"
    "about\0writeData\0data\0readData\0handleError\0"
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
    "on_checkBoxRepeat2_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x08 /* Private */,
       3,    0,  105,    2, 0x08 /* Private */,
       4,    0,  106,    2, 0x08 /* Private */,
       5,    1,  107,    2, 0x08 /* Private */,
       7,    0,  110,    2, 0x08 /* Private */,
       8,    1,  111,    2, 0x08 /* Private */,
      11,    0,  114,    2, 0x08 /* Private */,
      12,    1,  115,    2, 0x08 /* Private */,
      14,    1,  118,    2, 0x08 /* Private */,
      15,    0,  121,    2, 0x08 /* Private */,
      16,    0,  122,    2, 0x08 /* Private */,
      17,    1,  123,    2, 0x08 /* Private */,
      18,    1,  126,    2, 0x08 /* Private */,
      19,    0,  129,    2, 0x08 /* Private */,
      20,    1,  130,    2, 0x08 /* Private */,
      21,    0,  133,    2, 0x08 /* Private */,
      22,    1,  134,    2, 0x08 /* Private */,
      23,    1,  137,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openSerialPort(); break;
        case 1: _t->closeSerialPort(); break;
        case 2: _t->about(); break;
        case 3: _t->writeData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->readData(); break;
        case 5: _t->handleError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 6: _t->on_sendButton_clicked(); break;
        case 7: _t->on_HexCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_hexInConsoleCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_actionFastConnect_triggered(); break;
        case 10: _t->on_sendButton2_clicked(); break;
        case 11: _t->on_repeatCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_timeCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_lineEdit_returnPressed(); break;
        case 14: _t->on_lineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->on_searchResetButton_clicked(); break;
        case 16: _t->on_checkBoxHex2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_checkBoxRepeat2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
