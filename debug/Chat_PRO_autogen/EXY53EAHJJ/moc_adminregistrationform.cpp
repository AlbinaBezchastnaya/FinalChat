/****************************************************************************
** Meta object code from reading C++ file 'adminregistrationform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../sources/adminregistrationform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminregistrationform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminRegistrationForm_t {
    QByteArrayData data[12];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminRegistrationForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminRegistrationForm_t qt_meta_stringdata_AdminRegistrationForm = {
    {
QT_MOC_LITERAL(0, 0, 21), // "AdminRegistrationForm"
QT_MOC_LITERAL(1, 22, 19), // "AdminLoginRequested"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 8), // "accepted"
QT_MOC_LITERAL(4, 52, 6), // "userId"
QT_MOC_LITERAL(5, 59, 8), // "userName"
QT_MOC_LITERAL(6, 68, 7), // "banTime"
QT_MOC_LITERAL(7, 76, 5), // "admin"
QT_MOC_LITERAL(8, 82, 8), // "rejected"
QT_MOC_LITERAL(9, 91, 27), // "on_AdminLoginButton_clicked"
QT_MOC_LITERAL(10, 119, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(11, 141, 21) // "on_buttonBox_rejected"

    },
    "AdminRegistrationForm\0AdminLoginRequested\0"
    "\0accepted\0userId\0userName\0banTime\0"
    "admin\0rejected\0on_AdminLoginButton_clicked\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminRegistrationForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    4,   45,    2, 0x06 /* Public */,
       8,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   55,    2, 0x08 /* Private */,
      10,    0,   56,    2, 0x08 /* Private */,
      11,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QDateTime, QMetaType::Bool,    4,    5,    6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminRegistrationForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminRegistrationForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AdminLoginRequested(); break;
        case 1: _t->accepted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->rejected(); break;
        case 3: _t->on_AdminLoginButton_clicked(); break;
        case 4: _t->on_buttonBox_accepted(); break;
        case 5: _t->on_buttonBox_rejected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AdminRegistrationForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AdminRegistrationForm::AdminLoginRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AdminRegistrationForm::*)(int , QString , QDateTime , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AdminRegistrationForm::accepted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AdminRegistrationForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AdminRegistrationForm::rejected)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdminRegistrationForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AdminRegistrationForm.data,
    qt_meta_data_AdminRegistrationForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdminRegistrationForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminRegistrationForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminRegistrationForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AdminRegistrationForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AdminRegistrationForm::AdminLoginRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AdminRegistrationForm::accepted(int _t1, QString _t2, QDateTime _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AdminRegistrationForm::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
