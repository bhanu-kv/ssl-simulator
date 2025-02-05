/****************************************************************************
** Meta object code from reading C++ file 'ranbhoomi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/kshetra/include/kshetra/ranbhoomi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ranbhoomi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Ranbhoomi_t {
    QByteArrayData data[9];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ranbhoomi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ranbhoomi_t qt_meta_stringdata_Ranbhoomi = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Ranbhoomi"
QT_MOC_LITERAL(1, 10, 11), // "handleState"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "QByteArray*"
QT_MOC_LITERAL(4, 35, 6), // "buffer"
QT_MOC_LITERAL(5, 42, 11), // "handleGraph"
QT_MOC_LITERAL(6, 54, 21), // "std::vector<QPointF>*"
QT_MOC_LITERAL(7, 76, 8), // "vertices"
QT_MOC_LITERAL(8, 85, 9) // "setHotMap"

    },
    "Ranbhoomi\0handleState\0\0QByteArray*\0"
    "buffer\0handleGraph\0std::vector<QPointF>*\0"
    "vertices\0setHotMap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ranbhoomi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    1,   32,    2, 0x0a /* Public */,
       8,    0,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void Ranbhoomi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Ranbhoomi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleState((*reinterpret_cast< QByteArray*(*)>(_a[1]))); break;
        case 1: _t->handleGraph((*reinterpret_cast< std::vector<QPointF>*(*)>(_a[1]))); break;
        case 2: _t->setHotMap(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Ranbhoomi::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_Ranbhoomi.data,
    qt_meta_data_Ranbhoomi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Ranbhoomi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ranbhoomi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ranbhoomi.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int Ranbhoomi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
