/****************************************************************************
** Meta object code from reading C++ file 'dialog_del.h'
**
** Created: Sun Aug 20 01:14:54 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialog_del.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_del.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog_del[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      18,   11,   11,   11, 0x08,
      35,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog_del[] = {
    "Dialog_del\0\0ret()\0on_ret_clicked()\0"
    "on_del_buto_clicked()\0"
};

void Dialog_del::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dialog_del *_t = static_cast<Dialog_del *>(_o);
        switch (_id) {
        case 0: _t->ret(); break;
        case 1: _t->on_ret_clicked(); break;
        case 2: _t->on_del_buto_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dialog_del::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dialog_del::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_del,
      qt_meta_data_Dialog_del, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog_del::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog_del::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog_del::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_del))
        return static_cast<void*>(const_cast< Dialog_del*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog_del::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Dialog_del::ret()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
