/****************************************************************************
** Meta object code from reading C++ file 'setup_assistant_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit/moveit_setup_assistant/src/widgets/setup_assistant_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setup_assistant_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup_assistant__SetupAssistantWidget_t {
    QByteArrayData data[17];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__SetupAssistantWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__SetupAssistantWidget_t qt_meta_stringdata_moveit_setup_assistant__SetupAssistantWidget = {
    {
QT_MOC_LITERAL(0, 0, 44), // "moveit_setup_assistant::Setup..."
QT_MOC_LITERAL(1, 45, 17), // "navigationClicked"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 5), // "index"
QT_MOC_LITERAL(4, 70, 11), // "updateTimer"
QT_MOC_LITERAL(5, 82, 23), // "progressPastStartScreen"
QT_MOC_LITERAL(6, 106, 8), // "loadRviz"
QT_MOC_LITERAL(7, 115, 12), // "setModalMode"
QT_MOC_LITERAL(8, 128, 7), // "isModal"
QT_MOC_LITERAL(9, 136, 13), // "highlightLink"
QT_MOC_LITERAL(10, 150, 11), // "std::string"
QT_MOC_LITERAL(11, 162, 9), // "link_name"
QT_MOC_LITERAL(12, 172, 5), // "color"
QT_MOC_LITERAL(13, 178, 14), // "highlightGroup"
QT_MOC_LITERAL(14, 193, 10), // "group_name"
QT_MOC_LITERAL(15, 204, 14), // "unhighlightAll"
QT_MOC_LITERAL(16, 219, 33) // "virtualJointReferenceFrameCha..."

    },
    "moveit_setup_assistant::SetupAssistantWidget\0"
    "navigationClicked\0\0index\0updateTimer\0"
    "progressPastStartScreen\0loadRviz\0"
    "setModalMode\0isModal\0highlightLink\0"
    "std::string\0link_name\0color\0highlightGroup\0"
    "group_name\0unhighlightAll\0"
    "virtualJointReferenceFrameChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__SetupAssistantWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    1,   65,    2, 0x08 /* Private */,
       9,    2,   68,    2, 0x08 /* Private */,
      13,    1,   73,    2, 0x08 /* Private */,
      15,    0,   76,    2, 0x08 /* Private */,
      16,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QColor,   11,   12,
    QMetaType::Void, 0x80000000 | 10,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void moveit_setup_assistant::SetupAssistantWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SetupAssistantWidget *_t = static_cast<SetupAssistantWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->navigationClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->updateTimer(); break;
        case 2: _t->progressPastStartScreen(); break;
        case 3: _t->loadRviz(); break;
        case 4: _t->setModalMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->highlightLink((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 6: _t->highlightGroup((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 7: _t->unhighlightAll(); break;
        case 8: _t->virtualJointReferenceFrameChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::string >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::string >(); break;
            }
            break;
        }
    }
}

const QMetaObject moveit_setup_assistant::SetupAssistantWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_moveit_setup_assistant__SetupAssistantWidget.data,
      qt_meta_data_moveit_setup_assistant__SetupAssistantWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *moveit_setup_assistant::SetupAssistantWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::SetupAssistantWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__SetupAssistantWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::SetupAssistantWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
