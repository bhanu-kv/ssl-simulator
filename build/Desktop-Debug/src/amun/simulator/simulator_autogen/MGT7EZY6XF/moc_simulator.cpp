/****************************************************************************
** Meta object code from reading C++ file 'simulator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/amun/simulator/include/simulator/simulator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_camun__simulator__Simulator_t {
    QByteArrayData data[35];
    char stringdata0[398];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_camun__simulator__Simulator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_camun__simulator__Simulator_t qt_meta_stringdata_camun__simulator__Simulator = {
    {
QT_MOC_LITERAL(0, 0, 27), // "camun::simulator::Simulator"
QT_MOC_LITERAL(1, 28, 9), // "gotPacket"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 4), // "data"
QT_MOC_LITERAL(4, 44, 4), // "time"
QT_MOC_LITERAL(5, 49, 6), // "sender"
QT_MOC_LITERAL(6, 56, 10), // "sendStatus"
QT_MOC_LITERAL(7, 67, 6), // "Status"
QT_MOC_LITERAL(8, 74, 6), // "status"
QT_MOC_LITERAL(9, 81, 18), // "sendRadioResponses"
QT_MOC_LITERAL(10, 100, 27), // "QList<robot::RadioResponse>"
QT_MOC_LITERAL(11, 128, 9), // "responses"
QT_MOC_LITERAL(12, 138, 12), // "sendRealData"
QT_MOC_LITERAL(13, 151, 15), // "sendSSLSimError"
QT_MOC_LITERAL(14, 167, 18), // "QList<SSLSimError>"
QT_MOC_LITERAL(15, 186, 6), // "errors"
QT_MOC_LITERAL(16, 193, 11), // "ErrorSource"
QT_MOC_LITERAL(17, 205, 6), // "source"
QT_MOC_LITERAL(18, 212, 13), // "handleCommand"
QT_MOC_LITERAL(19, 226, 7), // "Command"
QT_MOC_LITERAL(20, 234, 7), // "command"
QT_MOC_LITERAL(21, 242, 19), // "handleRadioCommands"
QT_MOC_LITERAL(22, 262, 18), // "SSLSimRobotControl"
QT_MOC_LITERAL(23, 281, 7), // "control"
QT_MOC_LITERAL(24, 289, 6), // "isBlue"
QT_MOC_LITERAL(25, 296, 15), // "processingStart"
QT_MOC_LITERAL(26, 312, 10), // "setScaling"
QT_MOC_LITERAL(27, 323, 7), // "scaling"
QT_MOC_LITERAL(28, 331, 10), // "setFlipped"
QT_MOC_LITERAL(29, 342, 7), // "flipped"
QT_MOC_LITERAL(30, 350, 18), // "safelyTeleportBall"
QT_MOC_LITERAL(31, 369, 1), // "x"
QT_MOC_LITERAL(32, 371, 1), // "y"
QT_MOC_LITERAL(33, 373, 7), // "process"
QT_MOC_LITERAL(34, 381, 16) // "sendVisionPacket"

    },
    "camun::simulator::Simulator\0gotPacket\0"
    "\0data\0time\0sender\0sendStatus\0Status\0"
    "status\0sendRadioResponses\0"
    "QList<robot::RadioResponse>\0responses\0"
    "sendRealData\0sendSSLSimError\0"
    "QList<SSLSimError>\0errors\0ErrorSource\0"
    "source\0handleCommand\0Command\0command\0"
    "handleRadioCommands\0SSLSimRobotControl\0"
    "control\0isBlue\0processingStart\0"
    "setScaling\0scaling\0setFlipped\0flipped\0"
    "safelyTeleportBall\0x\0y\0process\0"
    "sendVisionPacket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_camun__simulator__Simulator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   74,    2, 0x06 /* Public */,
       6,    1,   81,    2, 0x06 /* Public */,
       9,    1,   84,    2, 0x06 /* Public */,
      12,    1,   87,    2, 0x06 /* Public */,
      13,    2,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,   95,    2, 0x0a /* Public */,
      21,    3,   98,    2, 0x0a /* Public */,
      26,    1,  105,    2, 0x0a /* Public */,
      28,    1,  108,    2, 0x0a /* Public */,
      30,    2,  111,    2, 0x0a /* Public */,
      33,    0,  116,    2, 0x0a /* Public */,
      34,    0,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16,   15,   17,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22, QMetaType::Bool, QMetaType::LongLong,   23,   24,   25,
    QMetaType::Void, QMetaType::Double,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   31,   32,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void camun::simulator::Simulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Simulator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->gotPacket((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->sendStatus((*reinterpret_cast< const Status(*)>(_a[1]))); break;
        case 2: _t->sendRadioResponses((*reinterpret_cast< const QList<robot::RadioResponse>(*)>(_a[1]))); break;
        case 3: _t->sendRealData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->sendSSLSimError((*reinterpret_cast< const QList<SSLSimError>(*)>(_a[1])),(*reinterpret_cast< ErrorSource(*)>(_a[2]))); break;
        case 5: _t->handleCommand((*reinterpret_cast< const Command(*)>(_a[1]))); break;
        case 6: _t->handleRadioCommands((*reinterpret_cast< const SSLSimRobotControl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 7: _t->setScaling((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->safelyTeleportBall((*reinterpret_cast< const float(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 10: _t->process(); break;
        case 11: _t->sendVisionPacket(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Simulator::*)(const QByteArray & , qint64 , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulator::gotPacket)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Simulator::*)(const Status & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulator::sendStatus)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Simulator::*)(const QList<robot::RadioResponse> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulator::sendRadioResponses)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Simulator::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulator::sendRealData)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Simulator::*)(const QList<SSLSimError> & , ErrorSource );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulator::sendSSLSimError)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject camun::simulator::Simulator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_camun__simulator__Simulator.data,
    qt_meta_data_camun__simulator__Simulator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *camun::simulator::Simulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *camun::simulator::Simulator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_camun__simulator__Simulator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int camun::simulator::Simulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void camun::simulator::Simulator::gotPacket(const QByteArray & _t1, qint64 _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void camun::simulator::Simulator::sendStatus(const Status & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void camun::simulator::Simulator::sendRadioResponses(const QList<robot::RadioResponse> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void camun::simulator::Simulator::sendRealData(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void camun::simulator::Simulator::sendSSLSimError(const QList<SSLSimError> & _t1, ErrorSource _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
