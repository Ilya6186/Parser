/****************************************************************************
** Meta object code from reading C++ file 'Parser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Parser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Parser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Parser_t {
    QByteArrayData data[6];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Parser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Parser_t qt_meta_stringdata_Parser = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Parser"
QT_MOC_LITERAL(1, 7, 5), // "start"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 6), // "analiz"
QT_MOC_LITERAL(4, 21, 5), // "ButOn"
QT_MOC_LITERAL(5, 27, 14) // "repaintEllipse"

    },
    "Parser\0start\0\0analiz\0ButOn\0repaintEllipse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Parser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Parser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Parser *_t = static_cast<Parser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->analiz(); break;
        case 2: _t->ButOn(); break;
        case 3: _t->repaintEllipse(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Parser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Parser::start)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Parser::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Parser.data,
      qt_meta_data_Parser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Parser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Parser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Parser.stringdata0))
        return static_cast<void*>(const_cast< Parser*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Parser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Parser::start()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
