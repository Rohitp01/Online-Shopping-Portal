/****************************************************************************
** Meta object code from reading C++ file 'shoppingcartwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../shoppingcartwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shoppingcartwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ShoppingCartWindow_t {
    QByteArrayData data[6];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShoppingCartWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShoppingCartWindow_t qt_meta_stringdata_ShoppingCartWindow = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ShoppingCartWindow"
QT_MOC_LITERAL(1, 19, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 31), // "on_ShoppingCartWindow_destroyed"
QT_MOC_LITERAL(4, 74, 27), // "on_cancelPushButton_clicked"
QT_MOC_LITERAL(5, 102, 29) // "on_checkoutPushButton_clicked"

    },
    "ShoppingCartWindow\0on_pushButton_clicked\0"
    "\0on_ShoppingCartWindow_destroyed\0"
    "on_cancelPushButton_clicked\0"
    "on_checkoutPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShoppingCartWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ShoppingCartWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShoppingCartWindow *_t = static_cast<ShoppingCartWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_ShoppingCartWindow_destroyed(); break;
        case 2: _t->on_cancelPushButton_clicked(); break;
        case 3: _t->on_checkoutPushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ShoppingCartWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ShoppingCartWindow.data,
      qt_meta_data_ShoppingCartWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ShoppingCartWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShoppingCartWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ShoppingCartWindow.stringdata0))
        return static_cast<void*>(const_cast< ShoppingCartWindow*>(this));
    if (!strcmp(_clname, "QCloseEvent"))
        return static_cast< QCloseEvent*>(const_cast< ShoppingCartWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ShoppingCartWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
