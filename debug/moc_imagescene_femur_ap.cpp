/****************************************************************************
** Meta object code from reading C++ file 'imagescene_femur_ap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../imagescene_femur_ap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imagescene_femur_ap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_imageScene_Femur_AP_t {
    QByteArrayData data[5];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_imageScene_Femur_AP_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_imageScene_Femur_AP_t qt_meta_stringdata_imageScene_Femur_AP = {
    {
QT_MOC_LITERAL(0, 0, 19), // "imageScene_Femur_AP"
QT_MOC_LITERAL(1, 20, 12), // "showsubline1"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "radio"
QT_MOC_LITERAL(4, 40, 12) // "showsubline2"

    },
    "imageScene_Femur_AP\0showsubline1\0\0"
    "radio\0showsubline2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_imageScene_Femur_AP[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,

       0        // eod
};

void imageScene_Femur_AP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        imageScene_Femur_AP *_t = static_cast<imageScene_Femur_AP *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showsubline1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->showsubline2((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject imageScene_Femur_AP::staticMetaObject = {
    { &ImageScene::staticMetaObject, qt_meta_stringdata_imageScene_Femur_AP.data,
      qt_meta_data_imageScene_Femur_AP,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *imageScene_Femur_AP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *imageScene_Femur_AP::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_imageScene_Femur_AP.stringdata0))
        return static_cast<void*>(const_cast< imageScene_Femur_AP*>(this));
    return ImageScene::qt_metacast(_clname);
}

int imageScene_Femur_AP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ImageScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE