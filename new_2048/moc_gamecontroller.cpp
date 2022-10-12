/****************************************************************************
** Meta object code from reading C++ file 'gamecontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gamecontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamecontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameController_t {
    QByteArrayData data[20];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameController_t qt_meta_stringdata_GameController = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GameController"
QT_MOC_LITERAL(1, 15, 10), // "gameIsOver"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "generateNewTile"
QT_MOC_LITERAL(4, 43, 1), // "i"
QT_MOC_LITERAL(5, 45, 1), // "j"
QT_MOC_LITERAL(6, 47, 5), // "value"
QT_MOC_LITERAL(7, 53, 5), // "merge"
QT_MOC_LITERAL(8, 59, 3), // "src"
QT_MOC_LITERAL(9, 63, 3), // "dst"
QT_MOC_LITERAL(10, 67, 4), // "move"
QT_MOC_LITERAL(11, 72, 12), // "scoreChanged"
QT_MOC_LITERAL(12, 85, 15), // "maxScoreChanged"
QT_MOC_LITERAL(13, 101, 8), // "moveLeft"
QT_MOC_LITERAL(14, 110, 9), // "moveRight"
QT_MOC_LITERAL(15, 120, 6), // "moveUp"
QT_MOC_LITERAL(16, 127, 8), // "moveDown"
QT_MOC_LITERAL(17, 136, 9), // "gameStart"
QT_MOC_LITERAL(18, 146, 5), // "score"
QT_MOC_LITERAL(19, 152, 8) // "maxScore"

    },
    "GameController\0gameIsOver\0\0generateNewTile\0"
    "i\0j\0value\0merge\0src\0dst\0move\0scoreChanged\0"
    "maxScoreChanged\0moveLeft\0moveRight\0"
    "moveUp\0moveDown\0gameStart\0score\0"
    "maxScore"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    3,   70,    2, 0x06 /* Public */,
       7,    3,   77,    2, 0x06 /* Public */,
      10,    3,   84,    2, 0x06 /* Public */,
      11,    0,   91,    2, 0x06 /* Public */,
      12,    0,   92,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      13,    0,   93,    2, 0x02 /* Public */,
      14,    0,   94,    2, 0x02 /* Public */,
      15,    0,   95,    2, 0x02 /* Public */,
      16,    0,   96,    2, 0x02 /* Public */,
      17,    0,   97,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,    6,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::Int, 0x00495001,
      19, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       4,
       5,

       0        // eod
};

void GameController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gameIsOver(); break;
        case 1: _t->generateNewTile((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->merge((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->move((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->scoreChanged(); break;
        case 5: _t->maxScoreChanged(); break;
        case 6: _t->moveLeft(); break;
        case 7: _t->moveRight(); break;
        case 8: _t->moveUp(); break;
        case 9: _t->moveDown(); break;
        case 10: _t->gameStart(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameController::gameIsOver)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GameController::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameController::generateNewTile)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GameController::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameController::merge)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GameController::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameController::move)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GameController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameController::scoreChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GameController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameController::maxScoreChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GameController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->score(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->maxScore(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GameController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GameController.data,
    qt_meta_data_GameController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GameController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GameController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GameController::gameIsOver()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GameController::generateNewTile(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GameController::merge(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GameController::move(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GameController::scoreChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void GameController::maxScoreChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
