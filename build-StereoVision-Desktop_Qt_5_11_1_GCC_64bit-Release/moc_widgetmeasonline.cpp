/****************************************************************************
** Meta object code from reading C++ file 'widgetmeasonline.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../StereoVision/widgetmeasonline.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetmeasonline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_widgetMeasOnline_t {
    QByteArrayData data[20];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_widgetMeasOnline_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_widgetMeasOnline_t qt_meta_stringdata_widgetMeasOnline = {
    {
QT_MOC_LITERAL(0, 0, 16), // "widgetMeasOnline"
QT_MOC_LITERAL(1, 17, 10), // "sendCoords"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 1), // "x"
QT_MOC_LITERAL(4, 31, 1), // "y"
QT_MOC_LITERAL(5, 33, 16), // "receiveDisparity"
QT_MOC_LITERAL(6, 50, 7), // "cv::Mat"
QT_MOC_LITERAL(7, 58, 9), // "lFrameRaw"
QT_MOC_LITERAL(8, 68, 9), // "rFrameRaw"
QT_MOC_LITERAL(9, 78, 4), // "disp"
QT_MOC_LITERAL(10, 83, 15), // "receiveDistance"
QT_MOC_LITERAL(11, 99, 8), // "distance"
QT_MOC_LITERAL(12, 108, 13), // "receiveCoords"
QT_MOC_LITERAL(13, 122, 10), // "receiveFPS"
QT_MOC_LITERAL(14, 133, 3), // "fps"
QT_MOC_LITERAL(15, 137, 24), // "on_spinBoxX_valueChanged"
QT_MOC_LITERAL(16, 162, 4), // "arg1"
QT_MOC_LITERAL(17, 167, 24), // "on_spinBoxY_valueChanged"
QT_MOC_LITERAL(18, 192, 26), // "on_pushButtonWrite_toggled"
QT_MOC_LITERAL(19, 219, 5) // "write"

    },
    "widgetMeasOnline\0sendCoords\0\0x\0y\0"
    "receiveDisparity\0cv::Mat\0lFrameRaw\0"
    "rFrameRaw\0disp\0receiveDistance\0distance\0"
    "receiveCoords\0receiveFPS\0fps\0"
    "on_spinBoxX_valueChanged\0arg1\0"
    "on_spinBoxY_valueChanged\0"
    "on_pushButtonWrite_toggled\0write"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_widgetMeasOnline[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   59,    2, 0x0a /* Public */,
      10,    1,   66,    2, 0x0a /* Public */,
      12,    2,   69,    2, 0x0a /* Public */,
      13,    1,   74,    2, 0x0a /* Public */,
      15,    1,   77,    2, 0x08 /* Private */,
      17,    1,   80,    2, 0x08 /* Private */,
      18,    1,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6,    7,    8,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Bool,   19,

       0        // eod
};

void widgetMeasOnline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        widgetMeasOnline *_t = static_cast<widgetMeasOnline *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendCoords((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->receiveDisparity((*reinterpret_cast< cv::Mat(*)>(_a[1])),(*reinterpret_cast< cv::Mat(*)>(_a[2])),(*reinterpret_cast< cv::Mat(*)>(_a[3]))); break;
        case 2: _t->receiveDistance((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->receiveCoords((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->receiveFPS((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_spinBoxX_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_spinBoxY_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_pushButtonWrite_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (widgetMeasOnline::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&widgetMeasOnline::sendCoords)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject widgetMeasOnline::staticMetaObject = {
    { &AppWidget::staticMetaObject, qt_meta_stringdata_widgetMeasOnline.data,
      qt_meta_data_widgetMeasOnline,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *widgetMeasOnline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *widgetMeasOnline::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_widgetMeasOnline.stringdata0))
        return static_cast<void*>(this);
    return AppWidget::qt_metacast(_clname);
}

int widgetMeasOnline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AppWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void widgetMeasOnline::sendCoords(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
