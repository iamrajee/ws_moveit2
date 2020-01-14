/****************************************************************************
** Meta object code from reading C++ file 'task_panel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/moveit_task_constructor/visualization/motion_planning_tasks/src/task_panel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'task_panel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_rviz_plugin__SubPanel_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_rviz_plugin__SubPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_rviz_plugin__SubPanel_t qt_meta_stringdata_moveit_rviz_plugin__SubPanel = {
    {
QT_MOC_LITERAL(0, 0, 28), // "moveit_rviz_plugin::SubPanel"
QT_MOC_LITERAL(1, 29, 13), // "configChanged"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "moveit_rviz_plugin::SubPanel\0configChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_rviz_plugin__SubPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void moveit_rviz_plugin::SubPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubPanel *_t = static_cast<SubPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SubPanel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SubPanel::configChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject moveit_rviz_plugin::SubPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_moveit_rviz_plugin__SubPanel.data,
      qt_meta_data_moveit_rviz_plugin__SubPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *moveit_rviz_plugin::SubPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_rviz_plugin::SubPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__SubPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int moveit_rviz_plugin::SubPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void moveit_rviz_plugin::SubPanel::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_moveit_rviz_plugin__TaskPanel_t {
    QByteArrayData data[3];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_rviz_plugin__TaskPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_rviz_plugin__TaskPanel_t qt_meta_stringdata_moveit_rviz_plugin__TaskPanel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "moveit_rviz_plugin::TaskPanel"
QT_MOC_LITERAL(1, 30, 19), // "showStageDockWidget"
QT_MOC_LITERAL(2, 50, 0) // ""

    },
    "moveit_rviz_plugin::TaskPanel\0"
    "showStageDockWidget\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_rviz_plugin__TaskPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void moveit_rviz_plugin::TaskPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TaskPanel *_t = static_cast<TaskPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showStageDockWidget(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject moveit_rviz_plugin::TaskPanel::staticMetaObject = {
    { &rviz::Panel::staticMetaObject, qt_meta_stringdata_moveit_rviz_plugin__TaskPanel.data,
      qt_meta_data_moveit_rviz_plugin__TaskPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *moveit_rviz_plugin::TaskPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_rviz_plugin::TaskPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__TaskPanel.stringdata0))
        return static_cast<void*>(this);
    return rviz::Panel::qt_metacast(_clname);
}

int moveit_rviz_plugin::TaskPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz::Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_moveit_rviz_plugin__TaskView_t {
    QByteArrayData data[13];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_rviz_plugin__TaskView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_rviz_plugin__TaskView_t qt_meta_stringdata_moveit_rviz_plugin__TaskView = {
    {
QT_MOC_LITERAL(0, 0, 28), // "moveit_rviz_plugin::TaskView"
QT_MOC_LITERAL(1, 29, 7), // "addTask"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 20), // "removeSelectedStages"
QT_MOC_LITERAL(4, 59, 21), // "onCurrentStageChanged"
QT_MOC_LITERAL(5, 81, 7), // "current"
QT_MOC_LITERAL(6, 89, 8), // "previous"
QT_MOC_LITERAL(7, 98, 24), // "onCurrentSolutionChanged"
QT_MOC_LITERAL(8, 123, 26), // "onSolutionSelectionChanged"
QT_MOC_LITERAL(9, 150, 14), // "QItemSelection"
QT_MOC_LITERAL(10, 165, 8), // "selected"
QT_MOC_LITERAL(11, 174, 10), // "deselected"
QT_MOC_LITERAL(12, 185, 21) // "onExecCurrentSolution"

    },
    "moveit_rviz_plugin::TaskView\0addTask\0"
    "\0removeSelectedStages\0onCurrentStageChanged\0"
    "current\0previous\0onCurrentSolutionChanged\0"
    "onSolutionSelectionChanged\0QItemSelection\0"
    "selected\0deselected\0onExecCurrentSolution"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_rviz_plugin__TaskView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x09 /* Protected */,
       4,    2,   46,    2, 0x09 /* Protected */,
       7,    2,   51,    2, 0x09 /* Protected */,
       8,    2,   56,    2, 0x09 /* Protected */,
      12,    0,   61,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    5,    6,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    5,    6,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   10,   11,
    QMetaType::Void,

       0        // eod
};

void moveit_rviz_plugin::TaskView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TaskView *_t = static_cast<TaskView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addTask(); break;
        case 1: _t->removeSelectedStages(); break;
        case 2: _t->onCurrentStageChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->onCurrentSolutionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->onSolutionSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 5: _t->onExecCurrentSolution(); break;
        default: ;
        }
    }
}

const QMetaObject moveit_rviz_plugin::TaskView::staticMetaObject = {
    { &SubPanel::staticMetaObject, qt_meta_stringdata_moveit_rviz_plugin__TaskView.data,
      qt_meta_data_moveit_rviz_plugin__TaskView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *moveit_rviz_plugin::TaskView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_rviz_plugin::TaskView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__TaskView.stringdata0))
        return static_cast<void*>(this);
    return SubPanel::qt_metacast(_clname);
}

int moveit_rviz_plugin::TaskView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SubPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_moveit_rviz_plugin__GlobalSettingsWidget_t {
    QByteArrayData data[1];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_rviz_plugin__GlobalSettingsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_rviz_plugin__GlobalSettingsWidget_t qt_meta_stringdata_moveit_rviz_plugin__GlobalSettingsWidget = {
    {
QT_MOC_LITERAL(0, 0, 40) // "moveit_rviz_plugin::GlobalSet..."

    },
    "moveit_rviz_plugin::GlobalSettingsWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_rviz_plugin__GlobalSettingsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void moveit_rviz_plugin::GlobalSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject moveit_rviz_plugin::GlobalSettingsWidget::staticMetaObject = {
    { &SubPanel::staticMetaObject, qt_meta_stringdata_moveit_rviz_plugin__GlobalSettingsWidget.data,
      qt_meta_data_moveit_rviz_plugin__GlobalSettingsWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *moveit_rviz_plugin::GlobalSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_rviz_plugin::GlobalSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__GlobalSettingsWidget.stringdata0))
        return static_cast<void*>(this);
    return SubPanel::qt_metacast(_clname);
}

int moveit_rviz_plugin::GlobalSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SubPanel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
