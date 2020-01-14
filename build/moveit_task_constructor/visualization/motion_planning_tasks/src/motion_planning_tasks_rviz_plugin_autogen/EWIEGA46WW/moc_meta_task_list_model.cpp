/****************************************************************************
** Meta object code from reading C++ file 'meta_task_list_model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/moveit_task_constructor/visualization/motion_planning_tasks/src/meta_task_list_model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'meta_task_list_model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_rviz_plugin__MetaTaskListModel_t {
    QByteArrayData data[8];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_rviz_plugin__MetaTaskListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_rviz_plugin__MetaTaskListModel_t qt_meta_stringdata_moveit_rviz_plugin__MetaTaskListModel = {
    {
QT_MOC_LITERAL(0, 0, 37), // "moveit_rviz_plugin::MetaTaskL..."
QT_MOC_LITERAL(1, 38, 13), // "onRowsRemoved"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 6), // "parent"
QT_MOC_LITERAL(4, 60, 5), // "first"
QT_MOC_LITERAL(5, 66, 4), // "last"
QT_MOC_LITERAL(6, 71, 20), // "onDisplayNameChanged"
QT_MOC_LITERAL(7, 92, 4) // "name"

    },
    "moveit_rviz_plugin::MetaTaskListModel\0"
    "onRowsRemoved\0\0parent\0first\0last\0"
    "onDisplayNameChanged\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_rviz_plugin__MetaTaskListModel[] = {

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
       1,    3,   24,    2, 0x08 /* Private */,
       6,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void moveit_rviz_plugin::MetaTaskListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MetaTaskListModel *_t = static_cast<MetaTaskListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onRowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->onDisplayNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject moveit_rviz_plugin::MetaTaskListModel::staticMetaObject = {
    { &utils::TreeMergeProxyModel::staticMetaObject, qt_meta_stringdata_moveit_rviz_plugin__MetaTaskListModel.data,
      qt_meta_data_moveit_rviz_plugin__MetaTaskListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *moveit_rviz_plugin::MetaTaskListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_rviz_plugin::MetaTaskListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__MetaTaskListModel.stringdata0))
        return static_cast<void*>(this);
    return utils::TreeMergeProxyModel::qt_metacast(_clname);
}

int moveit_rviz_plugin::MetaTaskListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = utils::TreeMergeProxyModel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
