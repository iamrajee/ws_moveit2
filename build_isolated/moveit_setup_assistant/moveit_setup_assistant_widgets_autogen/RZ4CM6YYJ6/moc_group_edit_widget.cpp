/****************************************************************************
** Meta object code from reading C++ file 'group_edit_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit/moveit_setup_assistant/src/widgets/group_edit_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'group_edit_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup_assistant__GroupEditWidget_t {
    QByteArrayData data[9];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__GroupEditWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__GroupEditWidget_t qt_meta_stringdata_moveit_setup_assistant__GroupEditWidget = {
    {
QT_MOC_LITERAL(0, 0, 39), // "moveit_setup_assistant::Group..."
QT_MOC_LITERAL(1, 40, 10), // "saveJoints"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 9), // "saveLinks"
QT_MOC_LITERAL(4, 62, 9), // "saveChain"
QT_MOC_LITERAL(5, 72, 13), // "saveSubgroups"
QT_MOC_LITERAL(6, 86, 4), // "save"
QT_MOC_LITERAL(7, 91, 13), // "cancelEditing"
QT_MOC_LITERAL(8, 105, 11) // "deleteGroup"

    },
    "moveit_setup_assistant::GroupEditWidget\0"
    "saveJoints\0\0saveLinks\0saveChain\0"
    "saveSubgroups\0save\0cancelEditing\0"
    "deleteGroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__GroupEditWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,
       8,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void moveit_setup_assistant::GroupEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GroupEditWidget *_t = static_cast<GroupEditWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveJoints(); break;
        case 1: _t->saveLinks(); break;
        case 2: _t->saveChain(); break;
        case 3: _t->saveSubgroups(); break;
        case 4: _t->save(); break;
        case 5: _t->cancelEditing(); break;
        case 6: _t->deleteGroup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GroupEditWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupEditWidget::saveJoints)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GroupEditWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupEditWidget::saveLinks)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GroupEditWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupEditWidget::saveChain)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GroupEditWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupEditWidget::saveSubgroups)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (GroupEditWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupEditWidget::save)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (GroupEditWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupEditWidget::cancelEditing)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (GroupEditWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupEditWidget::deleteGroup)) {
                *result = 6;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject moveit_setup_assistant::GroupEditWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_moveit_setup_assistant__GroupEditWidget.data,
      qt_meta_data_moveit_setup_assistant__GroupEditWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *moveit_setup_assistant::GroupEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::GroupEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__GroupEditWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::GroupEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void moveit_setup_assistant::GroupEditWidget::saveJoints()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void moveit_setup_assistant::GroupEditWidget::saveLinks()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void moveit_setup_assistant::GroupEditWidget::saveChain()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void moveit_setup_assistant::GroupEditWidget::saveSubgroups()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void moveit_setup_assistant::GroupEditWidget::save()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void moveit_setup_assistant::GroupEditWidget::cancelEditing()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void moveit_setup_assistant::GroupEditWidget::deleteGroup()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
