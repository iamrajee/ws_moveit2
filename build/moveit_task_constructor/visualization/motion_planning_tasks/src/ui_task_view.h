/********************************************************************************
** Form generated from reading UI file 'task_view.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_VIEW_H
#define UI_TASK_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <rviz/properties/property_tree_widget.h>
#include "task_list_model.h"

namespace moveit_rviz_plugin {

class Ui_TaskView
{
public:
    QAction *actionRemoveTaskTreeRows;
    QAction *actionAddLocalTask;
    QVBoxLayout *verticalLayout;
    QSplitter *tasks_property_splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout1;
    QLabel *tasks_view_label;
    QSplitter *tasks_solutions_splitter;
    moveit_rviz_plugin::TaskListView *tasks_view;
    moveit_rviz_plugin::AutoAdjustingTreeView *solutions_view;
    QWidget *widget1;
    QVBoxLayout *verticalLayout2;
    QLabel *property_view_label;
    rviz::PropertyTreeWidget *property_view;

    void setupUi(QWidget *moveit_rviz_plugin__TaskView)
    {
        if (moveit_rviz_plugin__TaskView->objectName().isEmpty())
            moveit_rviz_plugin__TaskView->setObjectName(QStringLiteral("moveit_rviz_plugin__TaskView"));
        moveit_rviz_plugin__TaskView->resize(400, 300);
        actionRemoveTaskTreeRows = new QAction(moveit_rviz_plugin__TaskView);
        actionRemoveTaskTreeRows->setObjectName(QStringLiteral("actionRemoveTaskTreeRows"));
        actionRemoveTaskTreeRows->setShortcutContext(Qt::WidgetShortcut);
        actionAddLocalTask = new QAction(moveit_rviz_plugin__TaskView);
        actionAddLocalTask->setObjectName(QStringLiteral("actionAddLocalTask"));
        verticalLayout = new QVBoxLayout(moveit_rviz_plugin__TaskView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tasks_property_splitter = new QSplitter(moveit_rviz_plugin__TaskView);
        tasks_property_splitter->setObjectName(QStringLiteral("tasks_property_splitter"));
        tasks_property_splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(tasks_property_splitter);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout1 = new QVBoxLayout(widget);
        verticalLayout1->setSpacing(0);
        verticalLayout1->setObjectName(QStringLiteral("verticalLayout1"));
        verticalLayout1->setContentsMargins(0, 0, 0, 0);
        tasks_view_label = new QLabel(widget);
        tasks_view_label->setObjectName(QStringLiteral("tasks_view_label"));

        verticalLayout1->addWidget(tasks_view_label);

        tasks_solutions_splitter = new QSplitter(widget);
        tasks_solutions_splitter->setObjectName(QStringLiteral("tasks_solutions_splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tasks_solutions_splitter->sizePolicy().hasHeightForWidth());
        tasks_solutions_splitter->setSizePolicy(sizePolicy);
        tasks_solutions_splitter->setOrientation(Qt::Horizontal);
        tasks_view = new moveit_rviz_plugin::TaskListView(tasks_solutions_splitter);
        tasks_view->setObjectName(QStringLiteral("tasks_view"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tasks_view->sizePolicy().hasHeightForWidth());
        tasks_view->setSizePolicy(sizePolicy1);
        tasks_view->setContextMenuPolicy(Qt::ActionsContextMenu);
        tasks_solutions_splitter->addWidget(tasks_view);
        tasks_view->header()->setStretchLastSection(false);
        solutions_view = new moveit_rviz_plugin::AutoAdjustingTreeView(tasks_solutions_splitter);
        solutions_view->setObjectName(QStringLiteral("solutions_view"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(solutions_view->sizePolicy().hasHeightForWidth());
        solutions_view->setSizePolicy(sizePolicy2);
        solutions_view->setSelectionMode(QAbstractItemView::ExtendedSelection);
        solutions_view->setRootIsDecorated(false);
        solutions_view->setUniformRowHeights(true);
        solutions_view->setSortingEnabled(true);
        tasks_solutions_splitter->addWidget(solutions_view);
        solutions_view->header()->setStretchLastSection(false);

        verticalLayout1->addWidget(tasks_solutions_splitter);

        tasks_property_splitter->addWidget(widget);
        widget1 = new QWidget(tasks_property_splitter);
        widget1->setObjectName(QStringLiteral("widget1"));
        verticalLayout2 = new QVBoxLayout(widget1);
        verticalLayout2->setSpacing(0);
        verticalLayout2->setObjectName(QStringLiteral("verticalLayout2"));
        verticalLayout2->setContentsMargins(0, 0, 0, 0);
        property_view_label = new QLabel(widget1);
        property_view_label->setObjectName(QStringLiteral("property_view_label"));

        verticalLayout2->addWidget(property_view_label);

        property_view = new rviz::PropertyTreeWidget(widget1);
        property_view->setObjectName(QStringLiteral("property_view"));

        verticalLayout2->addWidget(property_view);

        tasks_property_splitter->addWidget(widget1);

        verticalLayout->addWidget(tasks_property_splitter);


        retranslateUi(moveit_rviz_plugin__TaskView);

        QMetaObject::connectSlotsByName(moveit_rviz_plugin__TaskView);
    } // setupUi

    void retranslateUi(QWidget *moveit_rviz_plugin__TaskView)
    {
        moveit_rviz_plugin__TaskView->setWindowTitle(QApplication::translate("moveit_rviz_plugin::TaskView", "Tasks Panel", Q_NULLPTR));
        actionRemoveTaskTreeRows->setText(QApplication::translate("moveit_rviz_plugin::TaskView", "Remove", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRemoveTaskTreeRows->setToolTip(QApplication::translate("moveit_rviz_plugin::TaskView", "Remove selected rows", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionRemoveTaskTreeRows->setShortcut(QApplication::translate("moveit_rviz_plugin::TaskView", "Del", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAddLocalTask->setText(QApplication::translate("moveit_rviz_plugin::TaskView", "Add task", Q_NULLPTR));
        tasks_view_label->setText(QApplication::translate("moveit_rviz_plugin::TaskView", "Task Tree", Q_NULLPTR));
        property_view_label->setText(QApplication::translate("moveit_rviz_plugin::TaskView", "Properties", Q_NULLPTR));
    } // retranslateUi

};

} // namespace moveit_rviz_plugin

namespace moveit_rviz_plugin {
namespace Ui {
    class TaskView: public Ui_TaskView {};
} // namespace Ui
} // namespace moveit_rviz_plugin

#endif // UI_TASK_VIEW_H
