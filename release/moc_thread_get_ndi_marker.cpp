/****************************************************************************
** Meta object code from reading C++ file 'thread_get_ndi_marker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../thread_get_ndi_marker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thread_get_ndi_marker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_thread_get_NDI_marker_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_thread_get_NDI_marker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_thread_get_NDI_marker_t qt_meta_stringdata_thread_get_NDI_marker = {
    {
QT_MOC_LITERAL(0, 0, 21), // "thread_get_NDI_marker"
QT_MOC_LITERAL(1, 22, 12), // "threadSignal"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "QList<Info_NDI>"
QT_MOC_LITERAL(4, 52, 12), // "ListInfo_NDI"
QT_MOC_LITERAL(5, 65, 7), // "revData"
QT_MOC_LITERAL(6, 73, 12), // "displayError"
QT_MOC_LITERAL(7, 86, 28) // "QAbstractSocket::SocketError"

    },
    "thread_get_NDI_marker\0threadSignal\0\0"
    "QList<Info_NDI>\0ListInfo_NDI\0revData\0"
    "displayError\0QAbstractSocket::SocketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_thread_get_NDI_marker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x08 /* Private */,
       6,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void thread_get_NDI_marker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        thread_get_NDI_marker *_t = static_cast<thread_get_NDI_marker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->threadSignal((*reinterpret_cast< QList<Info_NDI>(*)>(_a[1]))); break;
        case 1: _t->revData(); break;
        case 2: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (thread_get_NDI_marker::*_t)(QList<Info_NDI> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&thread_get_NDI_marker::threadSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject thread_get_NDI_marker::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_thread_get_NDI_marker.data,
      qt_meta_data_thread_get_NDI_marker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *thread_get_NDI_marker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *thread_get_NDI_marker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_thread_get_NDI_marker.stringdata0))
        return static_cast<void*>(const_cast< thread_get_NDI_marker*>(this));
    return QThread::qt_metacast(_clname);
}

int thread_get_NDI_marker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void thread_get_NDI_marker::threadSignal(QList<Info_NDI> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE