/****************************************************************************
** Meta object code from reading C++ file 'teacher_sel.h'
**
** Created: Sun Aug 20 03:41:35 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "teacher_sel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teacher_sel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_teacher_sel[] = {

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
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      19,   12,   12,   12, 0x08,
      41,   12,   12,   12, 0x08,
      58,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_teacher_sel[] = {
    "teacher_sel\0\0ret()\0on_sel_buto_clicked()\0"
    "on_ret_clicked()\0recv(int)\0"
};

void teacher_sel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        teacher_sel *_t = static_cast<teacher_sel *>(_o);
        switch (_id) {
        case 0: _t->ret(); break;
        case 1: _t->on_sel_buto_clicked(); break;
        case 2: _t->on_ret_clicked(); break;
        case 3: _t->recv((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData teacher_sel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject teacher_sel::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_teacher_sel,
      qt_meta_data_teacher_sel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &teacher_sel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *teacher_sel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *teacher_sel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_teacher_sel))
        return static_cast<void*>(const_cast< teacher_sel*>(this));
    return QDialog::qt_metacast(_clname);
}

int teacher_sel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void teacher_sel::ret()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
