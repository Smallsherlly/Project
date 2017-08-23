/****************************************************************************
** Meta object code from reading C++ file 'stu_log.h'
**
** Created: Sun Aug 20 04:16:11 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stu_log.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stu_log.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Stu_log[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      15,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,    8,    8,    8, 0x08,
      44,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Stu_log[] = {
    "Stu_log\0\0ret()\0send(int)\0on_login_clicked()\0"
    "on_ret_clicked()\0"
};

void Stu_log::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Stu_log *_t = static_cast<Stu_log *>(_o);
        switch (_id) {
        case 0: _t->ret(); break;
        case 1: _t->send((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_login_clicked(); break;
        case 3: _t->on_ret_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Stu_log::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Stu_log::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Stu_log,
      qt_meta_data_Stu_log, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Stu_log::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Stu_log::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Stu_log::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Stu_log))
        return static_cast<void*>(const_cast< Stu_log*>(this));
    return QDialog::qt_metacast(_clname);
}

int Stu_log::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Stu_log::ret()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Stu_log::send(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
