/****************************************************************************
** Meta object code from reading C++ file 'schedule_menu_.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Database_shcedule/schedule_menu_.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'schedule_menu_.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Schedule_menu__t {
    QByteArrayData data[10];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Schedule_menu__t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Schedule_menu__t qt_meta_stringdata_Schedule_menu_ = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Schedule_menu_"
QT_MOC_LITERAL(1, 15, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 19), // "on_bachelor_clicked"
QT_MOC_LITERAL(4, 60, 16), // "on_first_clicked"
QT_MOC_LITERAL(5, 77, 16), // "on_third_clicked"
QT_MOC_LITERAL(6, 94, 17), // "on_master_clicked"
QT_MOC_LITERAL(7, 112, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(8, 134, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(9, 158, 23) // "on_pushButton_4_clicked"

    },
    "Schedule_menu_\0on_pushButton_3_clicked\0"
    "\0on_bachelor_clicked\0on_first_clicked\0"
    "on_third_clicked\0on_master_clicked\0"
    "on_buttonBox_accepted\0on_pushButton_5_clicked\0"
    "on_pushButton_4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Schedule_menu_[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

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

void Schedule_menu_::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Schedule_menu_ *_t = static_cast<Schedule_menu_ *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_3_clicked(); break;
        case 1: _t->on_bachelor_clicked(); break;
        case 2: _t->on_first_clicked(); break;
        case 3: _t->on_third_clicked(); break;
        case 4: _t->on_master_clicked(); break;
        case 5: _t->on_buttonBox_accepted(); break;
        case 6: _t->on_pushButton_5_clicked(); break;
        case 7: _t->on_pushButton_4_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Schedule_menu_::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Schedule_menu_.data,
      qt_meta_data_Schedule_menu_,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Schedule_menu_::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Schedule_menu_::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Schedule_menu_.stringdata0))
        return static_cast<void*>(const_cast< Schedule_menu_*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Schedule_menu_::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
