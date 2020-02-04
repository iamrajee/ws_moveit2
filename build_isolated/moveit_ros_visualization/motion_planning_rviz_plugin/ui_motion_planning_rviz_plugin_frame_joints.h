/********************************************************************************
** Form generated from reading UI file 'motion_planning_rviz_plugin_frame_joints.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTION_PLANNING_RVIZ_PLUGIN_FRAME_JOINTS_H
#define UI_MOTION_PLANNING_RVIZ_PLUGIN_FRAME_JOINTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MotionPlanningFrameJointsUI
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *joints_layout_;
    QLabel *joints_view_label_;
    QTreeView *joints_view_;
    QLabel *label;
    QVBoxLayout *nullspace_layout_;

    void setupUi(QWidget *MotionPlanningFrameJointsUI)
    {
        if (MotionPlanningFrameJointsUI->objectName().isEmpty())
            MotionPlanningFrameJointsUI->setObjectName(QStringLiteral("MotionPlanningFrameJointsUI"));
        MotionPlanningFrameJointsUI->resize(400, 300);
        horizontalLayout = new QHBoxLayout(MotionPlanningFrameJointsUI);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        joints_layout_ = new QVBoxLayout();
        joints_layout_->setObjectName(QStringLiteral("joints_layout_"));
        joints_view_label_ = new QLabel(MotionPlanningFrameJointsUI);
        joints_view_label_->setObjectName(QStringLiteral("joints_view_label_"));

        joints_layout_->addWidget(joints_view_label_);

        joints_view_ = new QTreeView(MotionPlanningFrameJointsUI);
        joints_view_->setObjectName(QStringLiteral("joints_view_"));
        joints_view_->setEditTriggers(QAbstractItemView::EditKeyPressed);
        joints_view_->setSelectionMode(QAbstractItemView::NoSelection);
        joints_view_->setRootIsDecorated(false);
        joints_view_->setItemsExpandable(false);
        joints_view_->setExpandsOnDoubleClick(false);

        joints_layout_->addWidget(joints_view_);

        label = new QLabel(MotionPlanningFrameJointsUI);
        label->setObjectName(QStringLiteral("label"));

        joints_layout_->addWidget(label);

        nullspace_layout_ = new QVBoxLayout();
        nullspace_layout_->setObjectName(QStringLiteral("nullspace_layout_"));

        joints_layout_->addLayout(nullspace_layout_);


        horizontalLayout->addLayout(joints_layout_);


        retranslateUi(MotionPlanningFrameJointsUI);

        QMetaObject::connectSlotsByName(MotionPlanningFrameJointsUI);
    } // setupUi

    void retranslateUi(QWidget *MotionPlanningFrameJointsUI)
    {
        MotionPlanningFrameJointsUI->setWindowTitle(QApplication::translate("MotionPlanningFrameJointsUI", "Form", Q_NULLPTR));
        joints_view_label_->setText(QApplication::translate("MotionPlanningFrameJointsUI", "Group joints:", Q_NULLPTR));
        label->setText(QApplication::translate("MotionPlanningFrameJointsUI", "Nullspace exploration:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MotionPlanningFrameJointsUI: public Ui_MotionPlanningFrameJointsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTION_PLANNING_RVIZ_PLUGIN_FRAME_JOINTS_H
