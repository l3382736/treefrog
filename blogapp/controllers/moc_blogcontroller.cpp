/****************************************************************************
** Meta object code from reading C++ file 'blogcontroller.h'
**
** Created: Sun Aug 3 18:23:32 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "blogcontroller.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blogcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BlogController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      27,   24,   15,   15, 0x0a,
      41,   15,   15,   15, 0x0a,
      49,   15,   15,   15, 0x0a,
      58,   24,   15,   15, 0x0a,
      72,   24,   15,   15, 0x0a,
      86,   24,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BlogController[] = {
    "BlogController\0\0index()\0pk\0show(QString)\0"
    "entry()\0create()\0edit(QString)\0"
    "save(QString)\0remove(QString)\0"
};

void BlogController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BlogController *_t = static_cast<BlogController *>(_o);
        switch (_id) {
        case 0: _t->index(); break;
        case 1: _t->show((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->entry(); break;
        case 3: _t->create(); break;
        case 4: _t->edit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->save((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->remove((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BlogController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BlogController::staticMetaObject = {
    { &ApplicationController::staticMetaObject, qt_meta_stringdata_BlogController,
      qt_meta_data_BlogController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BlogController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BlogController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BlogController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BlogController))
        return static_cast<void*>(const_cast< BlogController*>(this));
    return ApplicationController::qt_metacast(_clname);
}

int BlogController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ApplicationController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
