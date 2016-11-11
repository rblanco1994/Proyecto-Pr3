/****************************************************************************
** Meta object code from reading C++ file 'editor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../prueba/editor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_editor_t {
    QByteArrayData data[14];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_editor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_editor_t qt_meta_stringdata_editor = {
    {
QT_MOC_LITERAL(0, 0, 6), // "editor"
QT_MOC_LITERAL(1, 7, 24), // "on_actionNuevo_triggered"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 24), // "on_actionAbrir_triggered"
QT_MOC_LITERAL(4, 58, 26), // "on_actionGuardar_triggered"
QT_MOC_LITERAL(5, 85, 31), // "on_actionGuardar_Como_triggered"
QT_MOC_LITERAL(6, 117, 25), // "on_actionCopiar_triggered"
QT_MOC_LITERAL(7, 143, 25), // "on_actionCortar_triggered"
QT_MOC_LITERAL(8, 169, 24), // "on_actionPegar_triggered"
QT_MOC_LITERAL(9, 194, 27), // "on_actionDeshacer_triggered"
QT_MOC_LITERAL(10, 222, 26), // "on_actionRehacer_triggered"
QT_MOC_LITERAL(11, 249, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(12, 271, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(13, 295, 23) // "on_pushButton_3_clicked"

    },
    "editor\0on_actionNuevo_triggered\0\0"
    "on_actionAbrir_triggered\0"
    "on_actionGuardar_triggered\0"
    "on_actionGuardar_Como_triggered\0"
    "on_actionCopiar_triggered\0"
    "on_actionCortar_triggered\0"
    "on_actionPegar_triggered\0"
    "on_actionDeshacer_triggered\0"
    "on_actionRehacer_triggered\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_editor[] = {

 // content:
       7,       // revision
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
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void editor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        editor *_t = static_cast<editor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionNuevo_triggered(); break;
        case 1: _t->on_actionAbrir_triggered(); break;
        case 2: _t->on_actionGuardar_triggered(); break;
        case 3: _t->on_actionGuardar_Como_triggered(); break;
        case 4: _t->on_actionCopiar_triggered(); break;
        case 5: _t->on_actionCortar_triggered(); break;
        case 6: _t->on_actionPegar_triggered(); break;
        case 7: _t->on_actionDeshacer_triggered(); break;
        case 8: _t->on_actionRehacer_triggered(); break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->on_pushButton_2_clicked(); break;
        case 11: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject editor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_editor.data,
      qt_meta_data_editor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *editor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *editor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_editor.stringdata0))
        return static_cast<void*>(const_cast< editor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int editor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
