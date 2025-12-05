/****************************************************************************
** Meta object code from reading C++ file 'AudioPlayer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../AudioPlayer.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioPlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN11AudioPlayerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11AudioPlayerE = QtMocHelpers::stringData(
    "AudioPlayer",
    "playPauseClicked",
    "",
    "stopClicked",
    "nextClicked",
    "prevClicked",
    "restartClicked",
    "onPlaylistDoubleClicked",
    "QListWidgetItem*",
    "item",
    "updateProgress",
    "seekTo",
    "value",
    "setVolume",
    "deleteSurahClicked",
    "addSurahClicked",
    "playlistSelectionChanged",
    "index",
    "createNewPlaylistClicked",
    "renamePlaylistClicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11AudioPlayerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x08,    1 /* Private */,
       3,    0,   99,    2, 0x08,    2 /* Private */,
       4,    0,  100,    2, 0x08,    3 /* Private */,
       5,    0,  101,    2, 0x08,    4 /* Private */,
       6,    0,  102,    2, 0x08,    5 /* Private */,
       7,    1,  103,    2, 0x08,    6 /* Private */,
      10,    0,  106,    2, 0x08,    8 /* Private */,
      11,    1,  107,    2, 0x08,    9 /* Private */,
      13,    1,  110,    2, 0x08,   11 /* Private */,
      14,    0,  113,    2, 0x08,   13 /* Private */,
      15,    0,  114,    2, 0x08,   14 /* Private */,
      16,    1,  115,    2, 0x08,   15 /* Private */,
      18,    0,  118,    2, 0x08,   17 /* Private */,
      19,    0,  119,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AudioPlayer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN11AudioPlayerE.offsetsAndSizes,
    qt_meta_data_ZN11AudioPlayerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11AudioPlayerE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AudioPlayer, std::true_type>,
        // method 'playPauseClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nextClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prevClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'restartClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPlaylistDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'updateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'seekTo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'deleteSurahClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addSurahClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playlistSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'createNewPlaylistClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'renamePlaylistClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AudioPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AudioPlayer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->playPauseClicked(); break;
        case 1: _t->stopClicked(); break;
        case 2: _t->nextClicked(); break;
        case 3: _t->prevClicked(); break;
        case 4: _t->restartClicked(); break;
        case 5: _t->onPlaylistDoubleClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 6: _t->updateProgress(); break;
        case 7: _t->seekTo((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setVolume((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->deleteSurahClicked(); break;
        case 10: _t->addSurahClicked(); break;
        case 11: _t->playlistSelectionChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->createNewPlaylistClicked(); break;
        case 13: _t->renamePlaylistClicked(); break;
        default: ;
        }
    }
}

const QMetaObject *AudioPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11AudioPlayerE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AudioPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
