/****************************************************************************
** Meta object code from reading C++ file 'dialog_student.h'
**
** Created: Sun Aug 20 04:16:09 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialog_student.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_student.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog_student[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      22,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   15,   15,   15, 0x08,
      50,   15,   15,   15, 0x08,
      72,   15,   15,   15, 0x08,
      94,   15,   15,   15, 0x08,
     104,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog_student[] = {
    "Dialog_student\0\0ret()\0send(int)\0"
    "on_quit_clicked()\0on_return_2_clicked()\0"
    "on_per_info_clicked()\0recv(int)\0"
    "on_alt_info_clicked()\0"
};

void Dialog_student::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dialog_student *_t = static_cast<Dialog_student *>(_o);
        switch (_id) {
        case 0: _t->ret(); break;
        case 1: _t->send((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_quit_clicked(); break;
        case 3: _t->on_return_2_clicked(); break;
        case 4: _t->on_per_info_clicked(); break;
        case 5: _t->recv((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_alt_info_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dialog_student::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dialog_student::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_student,
      qt_meta_data_Dialog_student, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog_student::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog_student::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog_student::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_student))
        return static_cast<void*>(const_cast< Dialog_student*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog_student::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Dialog_student::ret()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Dialog_student::send(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
