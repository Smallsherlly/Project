/****************************************************************************
** Meta object code from reading C++ file 'dialog_update.h'
**
** Created: Sun Aug 20 04:16:08 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialog_update.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_update.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog_update[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      21,   14,   14,   14, 0x08,
      38,   14,   14,   14, 0x08,
      59,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog_update[] = {
    "Dialog_update\0\0ret()\0on_ret_clicked()\0"
    "on_up_buto_clicked()\0recv(int)\0"
};

void Dialog_update::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dialog_update *_t = static_cast<Dialog_update *>(_o);
        switch (_id) {
        case 0: _t->ret(); break;
        case 1: _t->on_ret_clicked(); break;
        case 2: _t->on_up_buto_clicked(); break;
        case 3: _t->recv((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dialog_update::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dialog_update::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_update,
      qt_meta_data_Dialog_update, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog_update::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog_update::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog_update::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_update))
        return static_cast<void*>(const_cast< Dialog_update*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog_update::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Dialog_update::ret()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
