/********************************************************************************
** Form generated from reading UI file 'motion_planning_rviz_plugin_frame.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTION_PLANNING_RVIZ_PLUGIN_FRAME_H
#define UI_MOTION_PLANNING_RVIZ_PLUGIN_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <moveit/motion_planning_rviz_plugin/motion_planning_param_widget.h>

QT_BEGIN_NAMESPACE

class Ui_MotionPlanningUI
{
public:
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *context;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox1;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_13;
    QLabel *library_label;
    QComboBox *planning_algorithm_combo_box;
    QSpacerItem *verticalSpacer_10;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_15;
    moveit_rviz_plugin::MotionPlanningParamWidget *planner_param_treeview;
    QGroupBox *groupBox2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *database_host;
    QLabel *label_3;
    QSpinBox *database_port;
    QPushButton *reset_db_button;
    QPushButton *database_connect_button;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_18;
    QLabel *label_21;
    QDoubleSpinBox *wcenter_x;
    QDoubleSpinBox *wcenter_y;
    QDoubleSpinBox *wcenter_z;
    QLabel *label_22;
    QDoubleSpinBox *wsize_x;
    QDoubleSpinBox *wsize_y;
    QDoubleSpinBox *wsize_z;
    QSpacerItem *verticalSpacer_5;
    QWidget *planning;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_9;
    QPushButton *plan_button;
    QPushButton *execute_button;
    QPushButton *plan_and_execute_button;
    QPushButton *stop_button;
    QLabel *result_label;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_planning_group;
    QLabel *label_planning_group;
    QComboBox *planning_group_combo_box;
    QVBoxLayout *verticalLayout_start_state;
    QLabel *label_start_state;
    QComboBox *start_state_combo_box;
    QVBoxLayout *verticalLayout_goal_state;
    QLabel *label_goal_state;
    QComboBox *goal_state_combo_box;
    QPushButton *clear_octomap_button;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_15;
    QComboBox *path_constraints_combo_box;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QDoubleSpinBox *goal_tolerance;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QDoubleSpinBox *planning_time;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_10;
    QDoubleSpinBox *planning_attempts;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QDoubleSpinBox *velocity_scaling_factor;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_20;
    QDoubleSpinBox *acceleration_scaling_factor;
    QCheckBox *allow_replanning;
    QCheckBox *allow_looking;
    QCheckBox *allow_external_program;
    QCheckBox *use_cartesian_path;
    QCheckBox *collision_aware_ik;
    QCheckBox *approximate_ik;
    QSpacerItem *verticalSpacer_2;
    QWidget *manipulation;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout_8;
    QListWidget *detected_objects_list;
    QPushButton *detect_objects_button;
    QGroupBox *groupBox_14;
    QGridLayout *gridLayout_12;
    QPushButton *place_button;
    QSpacerItem *verticalSpacer_9;
    QPushButton *pick_button;
    QListWidget *support_surfaces_list;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_14;
    QDoubleSpinBox *roi_size_y;
    QLabel *label_14;
    QDoubleSpinBox *roi_center_y;
    QDoubleSpinBox *roi_size_z;
    QLabel *label_12;
    QDoubleSpinBox *roi_size_x;
    QDoubleSpinBox *roi_center_z;
    QDoubleSpinBox *roi_center_x;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QWidget *scene_collision_objects;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_12;
    QLabel *object_status;
    QGroupBox *pose_scale_group_box;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QDoubleSpinBox *object_x;
    QDoubleSpinBox *object_y;
    QDoubleSpinBox *object_z;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_13;
    QDoubleSpinBox *object_rx;
    QDoubleSpinBox *object_ry;
    QDoubleSpinBox *object_rz;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLabel *label_17;
    QSlider *scene_scale;
    QLabel *label_18;
    QGroupBox *groupBox3;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *publish_current_scene_button;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *export_scene_text_button;
    QPushButton *import_scene_text_button;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_8;
    QPushButton *import_url_button;
    QPushButton *clear_scene_button;
    QPushButton *remove_object_button;
    QPushButton *import_file_button;
    QListWidget *collision_objects_list;
    QSpacerItem *verticalSpacer_4;
    QWidget *stored_plans;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QTreeWidget *planning_scene_tree;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QPushButton *load_scene_button;
    QPushButton *load_query_button;
    QPushButton *delete_scene_button;
    QPushButton *delete_query_button;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *save_scene_button;
    QPushButton *save_query_button;
    QSpacerItem *verticalSpacer_7;
    QWidget *stored_states;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *list_states;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_15;
    QGridLayout *gridLayout_17;
    QPushButton *load_state_button;
    QPushButton *clear_states_button;
    QGroupBox *groupBox_16;
    QGridLayout *gridLayout_15;
    QPushButton *set_as_start_state_button;
    QPushButton *set_as_goal_state_button;
    QPushButton *remove_state_button;
    QGroupBox *groupBox_17;
    QGridLayout *gridLayout_16;
    QPushButton *save_start_state_button;
    QPushButton *save_goal_state_button;
    QSpacerItem *verticalSpacer_8;
    QWidget *tab;
    QGridLayout *gridLayout_11;
    QTextEdit *status_text;
    QProgressBar *background_job_progress;

    void setupUi(QWidget *MotionPlanningUI)
    {
        if (MotionPlanningUI->objectName().isEmpty())
            MotionPlanningUI->setObjectName(QStringLiteral("MotionPlanningUI"));
        MotionPlanningUI->resize(692, 414);
        verticalLayout_5 = new QVBoxLayout(MotionPlanningUI);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tabWidget = new QTabWidget(MotionPlanningUI);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setAutoFillBackground(false);
        context = new QWidget();
        context->setObjectName(QStringLiteral("context"));
        verticalLayout_3 = new QVBoxLayout(context);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox1 = new QGroupBox(context);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        horizontalLayout_8 = new QHBoxLayout(groupBox1);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, -1, -1, 1);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        library_label = new QLabel(groupBox1);
        library_label->setObjectName(QStringLiteral("library_label"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(library_label->sizePolicy().hasHeightForWidth());
        library_label->setSizePolicy(sizePolicy1);

        verticalLayout_13->addWidget(library_label);

        planning_algorithm_combo_box = new QComboBox(groupBox1);
        planning_algorithm_combo_box->setObjectName(QStringLiteral("planning_algorithm_combo_box"));
        sizePolicy1.setHeightForWidth(planning_algorithm_combo_box->sizePolicy().hasHeightForWidth());
        planning_algorithm_combo_box->setSizePolicy(sizePolicy1);

        verticalLayout_13->addWidget(planning_algorithm_combo_box);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_10);


        horizontalLayout_8->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        label_15 = new QLabel(groupBox1);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_14->addWidget(label_15);

        planner_param_treeview = new moveit_rviz_plugin::MotionPlanningParamWidget(groupBox1);
        planner_param_treeview->setObjectName(QStringLiteral("planner_param_treeview"));
        planner_param_treeview->setIndentation(0);
        planner_param_treeview->setRootIsDecorated(false);
        planner_param_treeview->header()->setMinimumSectionSize(20);

        verticalLayout_14->addWidget(planner_param_treeview);


        horizontalLayout_8->addLayout(verticalLayout_14);

        horizontalLayout_8->setStretch(0, 2);
        horizontalLayout_8->setStretch(1, 3);

        verticalLayout_3->addWidget(groupBox1);

        groupBox2 = new QGroupBox(context);
        groupBox2->setObjectName(QStringLiteral("groupBox2"));
        horizontalLayout = new QHBoxLayout(groupBox2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 4, -1, 1);
        label_2 = new QLabel(groupBox2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        database_host = new QLineEdit(groupBox2);
        database_host->setObjectName(QStringLiteral("database_host"));

        horizontalLayout->addWidget(database_host);

        label_3 = new QLabel(groupBox2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        database_port = new QSpinBox(groupBox2);
        database_port->setObjectName(QStringLiteral("database_port"));
        database_port->setMaximum(65535);
        database_port->setValue(33829);

        horizontalLayout->addWidget(database_port);

        reset_db_button = new QPushButton(groupBox2);
        reset_db_button->setObjectName(QStringLiteral("reset_db_button"));
        reset_db_button->setStyleSheet(QStringLiteral("color:red"));
        reset_db_button->setFlat(false);

        horizontalLayout->addWidget(reset_db_button);

        database_connect_button = new QPushButton(groupBox2);
        database_connect_button->setObjectName(QStringLiteral("database_connect_button"));
        database_connect_button->setStyleSheet(QStringLiteral("color:green"));
        database_connect_button->setCheckable(false);
        database_connect_button->setChecked(false);
        database_connect_button->setFlat(false);

        horizontalLayout->addWidget(database_connect_button);


        verticalLayout_3->addWidget(groupBox2);

        groupBox_6 = new QGroupBox(context);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_18 = new QGridLayout(groupBox_6);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setContentsMargins(-1, 4, -1, 1);
        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_18->addWidget(label_21, 0, 0, 1, 1);

        wcenter_x = new QDoubleSpinBox(groupBox_6);
        wcenter_x->setObjectName(QStringLiteral("wcenter_x"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(wcenter_x->sizePolicy().hasHeightForWidth());
        wcenter_x->setSizePolicy(sizePolicy2);
        wcenter_x->setMinimum(-10000);
        wcenter_x->setMaximum(10000);

        gridLayout_18->addWidget(wcenter_x, 0, 1, 1, 1);

        wcenter_y = new QDoubleSpinBox(groupBox_6);
        wcenter_y->setObjectName(QStringLiteral("wcenter_y"));
        sizePolicy2.setHeightForWidth(wcenter_y->sizePolicy().hasHeightForWidth());
        wcenter_y->setSizePolicy(sizePolicy2);
        wcenter_y->setMinimum(-10000);
        wcenter_y->setMaximum(10000);

        gridLayout_18->addWidget(wcenter_y, 0, 2, 1, 1);

        wcenter_z = new QDoubleSpinBox(groupBox_6);
        wcenter_z->setObjectName(QStringLiteral("wcenter_z"));
        sizePolicy2.setHeightForWidth(wcenter_z->sizePolicy().hasHeightForWidth());
        wcenter_z->setSizePolicy(sizePolicy2);
        wcenter_z->setMinimum(-10000);
        wcenter_z->setMaximum(10000);

        gridLayout_18->addWidget(wcenter_z, 0, 3, 1, 1);

        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_18->addWidget(label_22, 1, 0, 1, 1);

        wsize_x = new QDoubleSpinBox(groupBox_6);
        wsize_x->setObjectName(QStringLiteral("wsize_x"));
        sizePolicy2.setHeightForWidth(wsize_x->sizePolicy().hasHeightForWidth());
        wsize_x->setSizePolicy(sizePolicy2);
        wsize_x->setWrapping(false);
        wsize_x->setMinimum(-10000);
        wsize_x->setMaximum(10000);
        wsize_x->setValue(2);

        gridLayout_18->addWidget(wsize_x, 1, 1, 1, 1);

        wsize_y = new QDoubleSpinBox(groupBox_6);
        wsize_y->setObjectName(QStringLiteral("wsize_y"));
        sizePolicy2.setHeightForWidth(wsize_y->sizePolicy().hasHeightForWidth());
        wsize_y->setSizePolicy(sizePolicy2);
        wsize_y->setMinimum(-10000);
        wsize_y->setMaximum(10000);
        wsize_y->setValue(2);

        gridLayout_18->addWidget(wsize_y, 1, 2, 1, 1);

        wsize_z = new QDoubleSpinBox(groupBox_6);
        wsize_z->setObjectName(QStringLiteral("wsize_z"));
        sizePolicy2.setHeightForWidth(wsize_z->sizePolicy().hasHeightForWidth());
        wsize_z->setSizePolicy(sizePolicy2);
        wsize_z->setMinimum(-10000);
        wsize_z->setMaximum(10000);
        wsize_z->setValue(2);

        gridLayout_18->addWidget(wsize_z, 1, 3, 1, 1);


        verticalLayout_3->addWidget(groupBox_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        tabWidget->addTab(context, QString());
        planning = new QWidget();
        planning->setObjectName(QStringLiteral("planning"));
        horizontalLayout_9 = new QHBoxLayout(planning);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        groupBox_9 = new QGroupBox(planning);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        verticalLayout_9 = new QVBoxLayout(groupBox_9);
        verticalLayout_9->setSpacing(4);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        plan_button = new QPushButton(groupBox_9);
        plan_button->setObjectName(QStringLiteral("plan_button"));

        verticalLayout_9->addWidget(plan_button);

        execute_button = new QPushButton(groupBox_9);
        execute_button->setObjectName(QStringLiteral("execute_button"));
        execute_button->setEnabled(false);

        verticalLayout_9->addWidget(execute_button);

        plan_and_execute_button = new QPushButton(groupBox_9);
        plan_and_execute_button->setObjectName(QStringLiteral("plan_and_execute_button"));

        verticalLayout_9->addWidget(plan_and_execute_button);

        stop_button = new QPushButton(groupBox_9);
        stop_button->setObjectName(QStringLiteral("stop_button"));
        stop_button->setEnabled(false);

        verticalLayout_9->addWidget(stop_button);

        result_label = new QLabel(groupBox_9);
        result_label->setObjectName(QStringLiteral("result_label"));
        result_label->setLayoutDirection(Qt::LeftToRight);
        result_label->setAlignment(Qt::AlignCenter);
        result_label->setWordWrap(false);

        verticalLayout_9->addWidget(result_label);


        horizontalLayout_7->addWidget(groupBox_9);

        groupBox_11 = new QGroupBox(planning);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        gridLayout_6 = new QGridLayout(groupBox_11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(4, -1, 4, 4);
        verticalLayout_planning_group = new QVBoxLayout();
        verticalLayout_planning_group->setObjectName(QStringLiteral("verticalLayout_planning_group"));
        label_planning_group = new QLabel(groupBox_11);
        label_planning_group->setObjectName(QStringLiteral("label_planning_group"));

        verticalLayout_planning_group->addWidget(label_planning_group);

        planning_group_combo_box = new QComboBox(groupBox_11);
        planning_group_combo_box->setObjectName(QStringLiteral("planning_group_combo_box"));

        verticalLayout_planning_group->addWidget(planning_group_combo_box);


        gridLayout_6->addLayout(verticalLayout_planning_group, 1, 0, 1, 1);

        verticalLayout_start_state = new QVBoxLayout();
        verticalLayout_start_state->setObjectName(QStringLiteral("verticalLayout_start_state"));
        label_start_state = new QLabel(groupBox_11);
        label_start_state->setObjectName(QStringLiteral("label_start_state"));

        verticalLayout_start_state->addWidget(label_start_state);

        start_state_combo_box = new QComboBox(groupBox_11);
        start_state_combo_box->setObjectName(QStringLiteral("start_state_combo_box"));

        verticalLayout_start_state->addWidget(start_state_combo_box);


        gridLayout_6->addLayout(verticalLayout_start_state, 2, 0, 1, 1);

        verticalLayout_goal_state = new QVBoxLayout();
        verticalLayout_goal_state->setObjectName(QStringLiteral("verticalLayout_goal_state"));
        label_goal_state = new QLabel(groupBox_11);
        label_goal_state->setObjectName(QStringLiteral("label_goal_state"));

        verticalLayout_goal_state->addWidget(label_goal_state);

        goal_state_combo_box = new QComboBox(groupBox_11);
        goal_state_combo_box->setObjectName(QStringLiteral("goal_state_combo_box"));

        verticalLayout_goal_state->addWidget(goal_state_combo_box);


        gridLayout_6->addLayout(verticalLayout_goal_state, 3, 0, 1, 1);

        clear_octomap_button = new QPushButton(groupBox_11);
        clear_octomap_button->setObjectName(QStringLiteral("clear_octomap_button"));

        gridLayout_6->addWidget(clear_octomap_button, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 5, 0, 1, 1);


        horizontalLayout_7->addWidget(groupBox_11);


        verticalLayout_11->addLayout(horizontalLayout_7);

        groupBox_12 = new QGroupBox(planning);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        verticalLayout_15 = new QVBoxLayout(groupBox_12);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(-1, 4, -1, 1);
        path_constraints_combo_box = new QComboBox(groupBox_12);
        path_constraints_combo_box->setObjectName(QStringLiteral("path_constraints_combo_box"));

        verticalLayout_15->addWidget(path_constraints_combo_box);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_6 = new QLabel(groupBox_12);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_11->addWidget(label_6);

        goal_tolerance = new QDoubleSpinBox(groupBox_12);
        goal_tolerance->setObjectName(QStringLiteral("goal_tolerance"));

        horizontalLayout_11->addWidget(goal_tolerance);


        verticalLayout_15->addLayout(horizontalLayout_11);


        verticalLayout_11->addWidget(groupBox_12);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_3);


        horizontalLayout_9->addLayout(verticalLayout_11);

        groupBox_10 = new QGroupBox(planning);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        verticalLayout_10 = new QVBoxLayout(groupBox_10);
        verticalLayout_10->setSpacing(2);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_9 = new QLabel(groupBox_10);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_3->addWidget(label_9);

        planning_time = new QDoubleSpinBox(groupBox_10);
        planning_time->setObjectName(QStringLiteral("planning_time"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(planning_time->sizePolicy().hasHeightForWidth());
        planning_time->setSizePolicy(sizePolicy3);
        planning_time->setMaximum(300);
        planning_time->setValue(5);

        horizontalLayout_3->addWidget(planning_time);


        verticalLayout_10->addLayout(horizontalLayout_3);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(1);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_10 = new QLabel(groupBox_10);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_15->addWidget(label_10);

        planning_attempts = new QDoubleSpinBox(groupBox_10);
        planning_attempts->setObjectName(QStringLiteral("planning_attempts"));
        sizePolicy3.setHeightForWidth(planning_attempts->sizePolicy().hasHeightForWidth());
        planning_attempts->setSizePolicy(sizePolicy3);
        planning_attempts->setMaximum(1000);
        planning_attempts->setValue(10);

        horizontalLayout_15->addWidget(planning_attempts);


        verticalLayout_10->addLayout(horizontalLayout_15);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(1);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_11 = new QLabel(groupBox_10);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_10->addWidget(label_11);

        velocity_scaling_factor = new QDoubleSpinBox(groupBox_10);
        velocity_scaling_factor->setObjectName(QStringLiteral("velocity_scaling_factor"));
        velocity_scaling_factor->setMaximum(1);
        velocity_scaling_factor->setSingleStep(0.01);
        velocity_scaling_factor->setValue(1);

        horizontalLayout_10->addWidget(velocity_scaling_factor);


        verticalLayout_10->addLayout(horizontalLayout_10);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(1);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_20 = new QLabel(groupBox_10);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_20->addWidget(label_20);

        acceleration_scaling_factor = new QDoubleSpinBox(groupBox_10);
        acceleration_scaling_factor->setObjectName(QStringLiteral("acceleration_scaling_factor"));
        acceleration_scaling_factor->setMaximum(1);
        acceleration_scaling_factor->setSingleStep(0.01);
        acceleration_scaling_factor->setValue(1);

        horizontalLayout_20->addWidget(acceleration_scaling_factor);


        verticalLayout_10->addLayout(horizontalLayout_20);

        allow_replanning = new QCheckBox(groupBox_10);
        allow_replanning->setObjectName(QStringLiteral("allow_replanning"));
        allow_replanning->setChecked(false);

        verticalLayout_10->addWidget(allow_replanning);

        allow_looking = new QCheckBox(groupBox_10);
        allow_looking->setObjectName(QStringLiteral("allow_looking"));
        allow_looking->setChecked(false);

        verticalLayout_10->addWidget(allow_looking);

        allow_external_program = new QCheckBox(groupBox_10);
        allow_external_program->setObjectName(QStringLiteral("allow_external_program"));
        allow_external_program->setChecked(false);

        verticalLayout_10->addWidget(allow_external_program);

        use_cartesian_path = new QCheckBox(groupBox_10);
        use_cartesian_path->setObjectName(QStringLiteral("use_cartesian_path"));
        use_cartesian_path->setChecked(false);

        verticalLayout_10->addWidget(use_cartesian_path);

        collision_aware_ik = new QCheckBox(groupBox_10);
        collision_aware_ik->setObjectName(QStringLiteral("collision_aware_ik"));
        collision_aware_ik->setChecked(true);

        verticalLayout_10->addWidget(collision_aware_ik);

        approximate_ik = new QCheckBox(groupBox_10);
        approximate_ik->setObjectName(QStringLiteral("approximate_ik"));

        verticalLayout_10->addWidget(approximate_ik);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);


        horizontalLayout_9->addWidget(groupBox_10);

        tabWidget->addTab(planning, QString());
        manipulation = new QWidget();
        manipulation->setObjectName(QStringLiteral("manipulation"));
        gridLayout_13 = new QGridLayout(manipulation);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        groupBox_13 = new QGroupBox(manipulation);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        verticalLayout_8 = new QVBoxLayout(groupBox_13);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        detected_objects_list = new QListWidget(groupBox_13);
        detected_objects_list->setObjectName(QStringLiteral("detected_objects_list"));

        verticalLayout_8->addWidget(detected_objects_list);

        detect_objects_button = new QPushButton(groupBox_13);
        detect_objects_button->setObjectName(QStringLiteral("detect_objects_button"));

        verticalLayout_8->addWidget(detect_objects_button);


        gridLayout_13->addWidget(groupBox_13, 0, 0, 2, 1);

        groupBox_14 = new QGroupBox(manipulation);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        gridLayout_12 = new QGridLayout(groupBox_14);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        place_button = new QPushButton(groupBox_14);
        place_button->setObjectName(QStringLiteral("place_button"));
        place_button->setEnabled(false);

        gridLayout_12->addWidget(place_button, 1, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_9, 2, 1, 1, 1);

        pick_button = new QPushButton(groupBox_14);
        pick_button->setObjectName(QStringLiteral("pick_button"));
        pick_button->setEnabled(false);

        gridLayout_12->addWidget(pick_button, 0, 1, 1, 1);

        support_surfaces_list = new QListWidget(groupBox_14);
        support_surfaces_list->setObjectName(QStringLiteral("support_surfaces_list"));

        gridLayout_12->addWidget(support_surfaces_list, 0, 0, 3, 1);


        gridLayout_13->addWidget(groupBox_14, 0, 1, 1, 1);

        groupBox_7 = new QGroupBox(manipulation);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_14 = new QGridLayout(groupBox_7);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        roi_size_y = new QDoubleSpinBox(groupBox_7);
        roi_size_y->setObjectName(QStringLiteral("roi_size_y"));
        roi_size_y->setSingleStep(0.01);
        roi_size_y->setValue(1.5);

        gridLayout_14->addWidget(roi_size_y, 1, 2, 1, 1);

        label_14 = new QLabel(groupBox_7);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_14->addWidget(label_14, 1, 0, 1, 1);

        roi_center_y = new QDoubleSpinBox(groupBox_7);
        roi_center_y->setObjectName(QStringLiteral("roi_center_y"));
        roi_center_y->setMinimum(-99);
        roi_center_y->setSingleStep(0.01);

        gridLayout_14->addWidget(roi_center_y, 0, 2, 1, 1);

        roi_size_z = new QDoubleSpinBox(groupBox_7);
        roi_size_z->setObjectName(QStringLiteral("roi_size_z"));
        roi_size_z->setSingleStep(0.01);
        roi_size_z->setValue(1.2);

        gridLayout_14->addWidget(roi_size_z, 1, 3, 1, 1);

        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_14->addWidget(label_12, 0, 0, 1, 1);

        roi_size_x = new QDoubleSpinBox(groupBox_7);
        roi_size_x->setObjectName(QStringLiteral("roi_size_x"));
        roi_size_x->setSingleStep(0.01);
        roi_size_x->setValue(4);

        gridLayout_14->addWidget(roi_size_x, 1, 1, 1, 1);

        roi_center_z = new QDoubleSpinBox(groupBox_7);
        roi_center_z->setObjectName(QStringLiteral("roi_center_z"));
        roi_center_z->setMinimum(-99);
        roi_center_z->setSingleStep(0.01);
        roi_center_z->setValue(0.6);

        gridLayout_14->addWidget(roi_center_z, 0, 3, 1, 1);

        roi_center_x = new QDoubleSpinBox(groupBox_7);
        roi_center_x->setObjectName(QStringLiteral("roi_center_x"));
        roi_center_x->setMinimum(-99);
        roi_center_x->setSingleStep(0.01);

        gridLayout_14->addWidget(roi_center_x, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_6, 1, 4, 1, 1);


        gridLayout_13->addWidget(groupBox_7, 1, 1, 1, 1);

        tabWidget->addTab(manipulation, QString());
        scene_collision_objects = new QWidget();
        scene_collision_objects->setObjectName(QStringLiteral("scene_collision_objects"));
        gridLayout_4 = new QGridLayout(scene_collision_objects);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox_5 = new QGroupBox(scene_collision_objects);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_12 = new QVBoxLayout(groupBox_5);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        object_status = new QLabel(groupBox_5);
        object_status->setObjectName(QStringLiteral("object_status"));
        object_status->setEnabled(false);
        object_status->setFrameShape(QFrame::StyledPanel);
        object_status->setFrameShadow(QFrame::Raised);
        object_status->setTextFormat(Qt::AutoText);

        verticalLayout_12->addWidget(object_status);


        gridLayout_4->addWidget(groupBox_5, 0, 1, 1, 1);

        pose_scale_group_box = new QGroupBox(scene_collision_objects);
        pose_scale_group_box->setObjectName(QStringLiteral("pose_scale_group_box"));
        verticalLayout_6 = new QVBoxLayout(pose_scale_group_box);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(pose_scale_group_box);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        object_x = new QDoubleSpinBox(pose_scale_group_box);
        object_x->setObjectName(QStringLiteral("object_x"));
        object_x->setMinimum(-1000);
        object_x->setMaximum(1000);
        object_x->setSingleStep(0.1);

        horizontalLayout_6->addWidget(object_x);

        object_y = new QDoubleSpinBox(pose_scale_group_box);
        object_y->setObjectName(QStringLiteral("object_y"));
        object_y->setMinimum(-1000);
        object_y->setMaximum(1000);
        object_y->setSingleStep(0.1);

        horizontalLayout_6->addWidget(object_y);

        object_z = new QDoubleSpinBox(pose_scale_group_box);
        object_z->setObjectName(QStringLiteral("object_z"));
        object_z->setMinimum(-1000);
        object_z->setMaximum(1000);
        object_z->setSingleStep(0.1);

        horizontalLayout_6->addWidget(object_z);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_13 = new QLabel(pose_scale_group_box);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_4->addWidget(label_13);

        object_rx = new QDoubleSpinBox(pose_scale_group_box);
        object_rx->setObjectName(QStringLiteral("object_rx"));
        object_rx->setMinimum(-3.14);
        object_rx->setMaximum(3.14);
        object_rx->setSingleStep(0.1);

        horizontalLayout_4->addWidget(object_rx);

        object_ry = new QDoubleSpinBox(pose_scale_group_box);
        object_ry->setObjectName(QStringLiteral("object_ry"));
        object_ry->setMinimum(-3.14);
        object_ry->setMaximum(3.14);
        object_ry->setSingleStep(0.1);

        horizontalLayout_4->addWidget(object_ry);

        object_rz = new QDoubleSpinBox(pose_scale_group_box);
        object_rz->setObjectName(QStringLiteral("object_rz"));
        object_rz->setMinimum(-3.14);
        object_rz->setMaximum(3.14);
        object_rz->setSingleStep(0.1);

        horizontalLayout_4->addWidget(object_rz);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(pose_scale_group_box);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        label_17 = new QLabel(pose_scale_group_box);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_5->addWidget(label_17);

        scene_scale = new QSlider(pose_scale_group_box);
        scene_scale->setObjectName(QStringLiteral("scene_scale"));
        scene_scale->setMinimumSize(QSize(160, 0));
        scene_scale->setMaximum(200);
        scene_scale->setValue(100);
        scene_scale->setSliderPosition(100);
        scene_scale->setOrientation(Qt::Horizontal);
        scene_scale->setInvertedAppearance(false);
        scene_scale->setTickPosition(QSlider::NoTicks);
        scene_scale->setTickInterval(0);

        horizontalLayout_5->addWidget(scene_scale);

        label_18 = new QLabel(pose_scale_group_box);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_5->addWidget(label_18);


        verticalLayout_6->addLayout(horizontalLayout_5);


        gridLayout_4->addWidget(pose_scale_group_box, 1, 1, 1, 1);

        groupBox3 = new QGroupBox(scene_collision_objects);
        groupBox3->setObjectName(QStringLiteral("groupBox3"));
        horizontalLayout_14 = new QHBoxLayout(groupBox3);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        publish_current_scene_button = new QPushButton(groupBox3);
        publish_current_scene_button->setObjectName(QStringLiteral("publish_current_scene_button"));
        sizePolicy1.setHeightForWidth(publish_current_scene_button->sizePolicy().hasHeightForWidth());
        publish_current_scene_button->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(publish_current_scene_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_2);

        export_scene_text_button = new QPushButton(groupBox3);
        export_scene_text_button->setObjectName(QStringLiteral("export_scene_text_button"));

        horizontalLayout_14->addWidget(export_scene_text_button);

        import_scene_text_button = new QPushButton(groupBox3);
        import_scene_text_button->setObjectName(QStringLiteral("import_scene_text_button"));

        horizontalLayout_14->addWidget(import_scene_text_button);


        gridLayout_4->addWidget(groupBox3, 2, 1, 1, 1);

        groupBox_8 = new QGroupBox(scene_collision_objects);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        gridLayout_8 = new QGridLayout(groupBox_8);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        import_url_button = new QPushButton(groupBox_8);
        import_url_button->setObjectName(QStringLiteral("import_url_button"));

        gridLayout_8->addWidget(import_url_button, 1, 1, 1, 1);

        clear_scene_button = new QPushButton(groupBox_8);
        clear_scene_button->setObjectName(QStringLiteral("clear_scene_button"));

        gridLayout_8->addWidget(clear_scene_button, 3, 1, 1, 1);

        remove_object_button = new QPushButton(groupBox_8);
        remove_object_button->setObjectName(QStringLiteral("remove_object_button"));

        gridLayout_8->addWidget(remove_object_button, 3, 0, 1, 1);

        import_file_button = new QPushButton(groupBox_8);
        import_file_button->setObjectName(QStringLiteral("import_file_button"));

        gridLayout_8->addWidget(import_file_button, 1, 0, 1, 1);

        collision_objects_list = new QListWidget(groupBox_8);
        collision_objects_list->setObjectName(QStringLiteral("collision_objects_list"));
        collision_objects_list->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);

        gridLayout_8->addWidget(collision_objects_list, 0, 0, 1, 2);


        gridLayout_4->addWidget(groupBox_8, 0, 0, 4, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 3, 1, 1, 1);

        tabWidget->addTab(scene_collision_objects, QString());
        stored_plans = new QWidget();
        stored_plans->setObjectName(QStringLiteral("stored_plans"));
        gridLayout_3 = new QGridLayout(stored_plans);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_3 = new QGroupBox(stored_plans);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        planning_scene_tree = new QTreeWidget(groupBox_3);
        planning_scene_tree->setObjectName(QStringLiteral("planning_scene_tree"));
        planning_scene_tree->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        planning_scene_tree->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        planning_scene_tree->setSelectionMode(QAbstractItemView::SingleSelection);
        planning_scene_tree->setHeaderHidden(true);
        planning_scene_tree->setExpandsOnDoubleClick(true);
        planning_scene_tree->setColumnCount(1);

        verticalLayout_7->addWidget(planning_scene_tree);


        verticalLayout->addWidget(groupBox_3);


        gridLayout_3->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(stored_plans);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        load_scene_button = new QPushButton(groupBox);
        load_scene_button->setObjectName(QStringLiteral("load_scene_button"));
        load_scene_button->setEnabled(false);

        gridLayout_5->addWidget(load_scene_button, 0, 0, 1, 1);

        load_query_button = new QPushButton(groupBox);
        load_query_button->setObjectName(QStringLiteral("load_query_button"));
        load_query_button->setEnabled(false);

        gridLayout_5->addWidget(load_query_button, 0, 1, 1, 1);

        delete_scene_button = new QPushButton(groupBox);
        delete_scene_button->setObjectName(QStringLiteral("delete_scene_button"));
        delete_scene_button->setEnabled(false);

        gridLayout_5->addWidget(delete_scene_button, 1, 0, 1, 1);

        delete_query_button = new QPushButton(groupBox);
        delete_query_button->setObjectName(QStringLiteral("delete_query_button"));
        delete_query_button->setEnabled(false);

        gridLayout_5->addWidget(delete_query_button, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(stored_plans);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        save_scene_button = new QPushButton(groupBox_2);
        save_scene_button->setObjectName(QStringLiteral("save_scene_button"));
        save_scene_button->setEnabled(false);

        gridLayout_2->addWidget(save_scene_button, 0, 1, 1, 1);

        save_query_button = new QPushButton(groupBox_2);
        save_query_button->setObjectName(QStringLiteral("save_query_button"));
        save_query_button->setEnabled(false);

        gridLayout_2->addWidget(save_query_button, 0, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_7, 1, 0, 1, 2);


        verticalLayout_2->addWidget(groupBox_2);


        gridLayout_3->addLayout(verticalLayout_2, 1, 1, 1, 1);

        tabWidget->addTab(stored_plans, QString());
        stored_states = new QWidget();
        stored_states->setObjectName(QStringLiteral("stored_states"));
        horizontalLayout_2 = new QHBoxLayout(stored_states);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        list_states = new QListWidget(stored_states);
        list_states->setObjectName(QStringLiteral("list_states"));

        horizontalLayout_2->addWidget(list_states);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_15 = new QGroupBox(stored_states);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        gridLayout_17 = new QGridLayout(groupBox_15);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        load_state_button = new QPushButton(groupBox_15);
        load_state_button->setObjectName(QStringLiteral("load_state_button"));

        gridLayout_17->addWidget(load_state_button, 0, 0, 1, 1);

        clear_states_button = new QPushButton(groupBox_15);
        clear_states_button->setObjectName(QStringLiteral("clear_states_button"));

        gridLayout_17->addWidget(clear_states_button, 0, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_15);

        groupBox_16 = new QGroupBox(stored_states);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        gridLayout_15 = new QGridLayout(groupBox_16);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        set_as_start_state_button = new QPushButton(groupBox_16);
        set_as_start_state_button->setObjectName(QStringLiteral("set_as_start_state_button"));

        gridLayout_15->addWidget(set_as_start_state_button, 0, 0, 1, 1);

        set_as_goal_state_button = new QPushButton(groupBox_16);
        set_as_goal_state_button->setObjectName(QStringLiteral("set_as_goal_state_button"));

        gridLayout_15->addWidget(set_as_goal_state_button, 0, 1, 1, 1);

        remove_state_button = new QPushButton(groupBox_16);
        remove_state_button->setObjectName(QStringLiteral("remove_state_button"));

        gridLayout_15->addWidget(remove_state_button, 1, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_16);

        groupBox_17 = new QGroupBox(stored_states);
        groupBox_17->setObjectName(QStringLiteral("groupBox_17"));
        gridLayout_16 = new QGridLayout(groupBox_17);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        save_start_state_button = new QPushButton(groupBox_17);
        save_start_state_button->setObjectName(QStringLiteral("save_start_state_button"));

        gridLayout_16->addWidget(save_start_state_button, 0, 0, 1, 1);

        save_goal_state_button = new QPushButton(groupBox_17);
        save_goal_state_button->setObjectName(QStringLiteral("save_goal_state_button"));

        gridLayout_16->addWidget(save_goal_state_button, 0, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_17);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);


        horizontalLayout_2->addLayout(verticalLayout_4);

        tabWidget->addTab(stored_states, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_11 = new QGridLayout(tab);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        status_text = new QTextEdit(tab);
        status_text->setObjectName(QStringLiteral("status_text"));
        status_text->setReadOnly(true);

        gridLayout_11->addWidget(status_text, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        verticalLayout_5->addWidget(tabWidget);

        background_job_progress = new QProgressBar(MotionPlanningUI);
        background_job_progress->setObjectName(QStringLiteral("background_job_progress"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(background_job_progress->sizePolicy().hasHeightForWidth());
        background_job_progress->setSizePolicy(sizePolicy4);
        background_job_progress->setMinimumSize(QSize(0, 5));
        background_job_progress->setMaximumSize(QSize(16777215, 5));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush1);
        QBrush brush2(QColor(240, 240, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush1);
        background_job_progress->setPalette(palette);
        background_job_progress->setLayoutDirection(Qt::LeftToRight);
        background_job_progress->setAutoFillBackground(false);
        background_job_progress->setStyleSheet(QStringLiteral(""));
        background_job_progress->setMinimum(0);
        background_job_progress->setMaximum(1);
        background_job_progress->setValue(0);

        verticalLayout_5->addWidget(background_job_progress);

        QWidget::setTabOrder(planning_algorithm_combo_box, planner_param_treeview);
        QWidget::setTabOrder(planner_param_treeview, database_host);
        QWidget::setTabOrder(database_host, database_port);
        QWidget::setTabOrder(database_port, reset_db_button);
        QWidget::setTabOrder(reset_db_button, database_connect_button);
        QWidget::setTabOrder(database_connect_button, plan_button);
        QWidget::setTabOrder(plan_button, execute_button);
        QWidget::setTabOrder(execute_button, plan_and_execute_button);
        QWidget::setTabOrder(plan_and_execute_button, stop_button);
        QWidget::setTabOrder(stop_button, planning_group_combo_box);
        QWidget::setTabOrder(planning_group_combo_box, start_state_combo_box);
        QWidget::setTabOrder(start_state_combo_box, goal_state_combo_box);
        QWidget::setTabOrder(goal_state_combo_box, clear_octomap_button);
        QWidget::setTabOrder(clear_octomap_button, planning_time);
        QWidget::setTabOrder(planning_time, planning_attempts);
        QWidget::setTabOrder(planning_attempts, velocity_scaling_factor);
        QWidget::setTabOrder(velocity_scaling_factor, acceleration_scaling_factor);
        QWidget::setTabOrder(acceleration_scaling_factor, allow_replanning);
        QWidget::setTabOrder(allow_replanning, allow_looking);
        QWidget::setTabOrder(allow_looking, allow_external_program);
        QWidget::setTabOrder(allow_external_program, collision_aware_ik);
        QWidget::setTabOrder(collision_aware_ik, approximate_ik);
        QWidget::setTabOrder(approximate_ik, path_constraints_combo_box);
        QWidget::setTabOrder(path_constraints_combo_box, goal_tolerance);
        QWidget::setTabOrder(goal_tolerance, place_button);
        QWidget::setTabOrder(place_button, roi_center_x);
        QWidget::setTabOrder(roi_center_x, roi_center_y);
        QWidget::setTabOrder(roi_center_y, roi_center_z);
        QWidget::setTabOrder(roi_center_z, roi_size_x);
        QWidget::setTabOrder(roi_size_x, roi_size_y);
        QWidget::setTabOrder(roi_size_y, roi_size_z);
        QWidget::setTabOrder(roi_size_z, collision_objects_list);
        QWidget::setTabOrder(collision_objects_list, import_file_button);
        QWidget::setTabOrder(import_file_button, import_url_button);
        QWidget::setTabOrder(import_url_button, remove_object_button);
        QWidget::setTabOrder(remove_object_button, clear_scene_button);
        QWidget::setTabOrder(clear_scene_button, object_x);
        QWidget::setTabOrder(object_x, object_y);
        QWidget::setTabOrder(object_y, object_z);
        QWidget::setTabOrder(object_z, object_rx);
        QWidget::setTabOrder(object_rx, object_ry);
        QWidget::setTabOrder(object_ry, object_rz);
        QWidget::setTabOrder(object_rz, scene_scale);
        QWidget::setTabOrder(scene_scale, publish_current_scene_button);
        QWidget::setTabOrder(publish_current_scene_button, export_scene_text_button);
        QWidget::setTabOrder(export_scene_text_button, import_scene_text_button);
        QWidget::setTabOrder(import_scene_text_button, planning_scene_tree);
        QWidget::setTabOrder(planning_scene_tree, load_scene_button);
        QWidget::setTabOrder(load_scene_button, load_query_button);
        QWidget::setTabOrder(load_query_button, delete_scene_button);
        QWidget::setTabOrder(delete_scene_button, delete_query_button);
        QWidget::setTabOrder(delete_query_button, save_query_button);
        QWidget::setTabOrder(save_query_button, save_scene_button);
        QWidget::setTabOrder(save_scene_button, list_states);
        QWidget::setTabOrder(list_states, load_state_button);
        QWidget::setTabOrder(load_state_button, clear_states_button);
        QWidget::setTabOrder(clear_states_button, set_as_start_state_button);
        QWidget::setTabOrder(set_as_start_state_button, set_as_goal_state_button);
        QWidget::setTabOrder(set_as_goal_state_button, remove_state_button);
        QWidget::setTabOrder(remove_state_button, save_start_state_button);
        QWidget::setTabOrder(save_start_state_button, save_goal_state_button);
        QWidget::setTabOrder(save_goal_state_button, status_text);
        QWidget::setTabOrder(status_text, tabWidget);
        QWidget::setTabOrder(tabWidget, wcenter_x);
        QWidget::setTabOrder(wcenter_x, wcenter_y);
        QWidget::setTabOrder(wcenter_y, wcenter_z);
        QWidget::setTabOrder(wcenter_z, wsize_x);
        QWidget::setTabOrder(wsize_x, wsize_y);
        QWidget::setTabOrder(wsize_y, wsize_z);
        QWidget::setTabOrder(wsize_z, pick_button);
        QWidget::setTabOrder(pick_button, support_surfaces_list);
        QWidget::setTabOrder(support_surfaces_list, detected_objects_list);
        QWidget::setTabOrder(detected_objects_list, detect_objects_button);

        retranslateUi(MotionPlanningUI);

        tabWidget->setCurrentIndex(0);
        reset_db_button->setDefault(false);
        database_connect_button->setDefault(false);


        QMetaObject::connectSlotsByName(MotionPlanningUI);
    } // setupUi

    void retranslateUi(QWidget *MotionPlanningUI)
    {
        MotionPlanningUI->setWindowTitle(QApplication::translate("MotionPlanningUI", "MoveIt Planning Frame", Q_NULLPTR));
        groupBox1->setTitle(QApplication::translate("MotionPlanningUI", "Planning Library", Q_NULLPTR));
        library_label->setText(QApplication::translate("MotionPlanningUI", "Planning Library Name", Q_NULLPTR));
        label_15->setText(QApplication::translate("MotionPlanningUI", "Planner Parameters", Q_NULLPTR));
        groupBox2->setTitle(QApplication::translate("MotionPlanningUI", "Warehouse", Q_NULLPTR));
        label_2->setText(QApplication::translate("MotionPlanningUI", "Host:", Q_NULLPTR));
        database_host->setText(QApplication::translate("MotionPlanningUI", "127.0.0.1", Q_NULLPTR));
        label_3->setText(QApplication::translate("MotionPlanningUI", "Port:", Q_NULLPTR));
        reset_db_button->setText(QApplication::translate("MotionPlanningUI", "Reset database ...", Q_NULLPTR));
        database_connect_button->setText(QApplication::translate("MotionPlanningUI", "Connect", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MotionPlanningUI", "Workspace", Q_NULLPTR));
        label_21->setText(QApplication::translate("MotionPlanningUI", "Center (XYZ):", Q_NULLPTR));
        label_22->setText(QApplication::translate("MotionPlanningUI", "Size (XYZ):", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(context), QApplication::translate("MotionPlanningUI", "Context", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MotionPlanningUI", "Commands", Q_NULLPTR));
        plan_button->setText(QApplication::translate("MotionPlanningUI", "&Plan", Q_NULLPTR));
        execute_button->setText(QApplication::translate("MotionPlanningUI", "&Execute", Q_NULLPTR));
        plan_and_execute_button->setText(QApplication::translate("MotionPlanningUI", "Plan and E&xecute", Q_NULLPTR));
        stop_button->setText(QApplication::translate("MotionPlanningUI", "&Stop", Q_NULLPTR));
        result_label->setText(QString());
        groupBox_11->setTitle(QApplication::translate("MotionPlanningUI", "Query", Q_NULLPTR));
        label_planning_group->setText(QApplication::translate("MotionPlanningUI", "Planning Group:", Q_NULLPTR));
        label_start_state->setText(QApplication::translate("MotionPlanningUI", "Start State:", Q_NULLPTR));
        label_goal_state->setText(QApplication::translate("MotionPlanningUI", "Goal State:", Q_NULLPTR));
        clear_octomap_button->setText(QApplication::translate("MotionPlanningUI", "Clear octomap", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("MotionPlanningUI", "Path Constraints", Q_NULLPTR));
        label_6->setText(QApplication::translate("MotionPlanningUI", "Goal Tolerance:", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("MotionPlanningUI", "Options", Q_NULLPTR));
        label_9->setText(QApplication::translate("MotionPlanningUI", "Planning Time (s):", Q_NULLPTR));
        label_10->setText(QApplication::translate("MotionPlanningUI", "Planning Attempts:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MotionPlanningUI", "Velocity Scaling:", Q_NULLPTR));
        label_20->setText(QApplication::translate("MotionPlanningUI", "Acceleration Scaling:", Q_NULLPTR));
        allow_replanning->setText(QApplication::translate("MotionPlanningUI", "Allow Replanning", Q_NULLPTR));
        allow_looking->setText(QApplication::translate("MotionPlanningUI", "Allow Sensor Positioning", Q_NULLPTR));
        allow_external_program->setText(QApplication::translate("MotionPlanningUI", "Allow External Comm.", Q_NULLPTR));
        use_cartesian_path->setText(QApplication::translate("MotionPlanningUI", "Use Cartesian Path", Q_NULLPTR));
        collision_aware_ik->setText(QApplication::translate("MotionPlanningUI", "Use Collision-Aware IK", Q_NULLPTR));
        approximate_ik->setText(QApplication::translate("MotionPlanningUI", "Allow Approx IK Solutions", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(planning), QApplication::translate("MotionPlanningUI", "Planning", Q_NULLPTR));
        groupBox_13->setTitle(QApplication::translate("MotionPlanningUI", "Detected Objects", Q_NULLPTR));
        detect_objects_button->setText(QApplication::translate("MotionPlanningUI", "&Detect", Q_NULLPTR));
        groupBox_14->setTitle(QApplication::translate("MotionPlanningUI", "Support Surfaces", Q_NULLPTR));
        place_button->setText(QApplication::translate("MotionPlanningUI", "P&lace", Q_NULLPTR));
        pick_button->setText(QApplication::translate("MotionPlanningUI", "&Pick", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MotionPlanningUI", "ROI", Q_NULLPTR));
        label_14->setText(QApplication::translate("MotionPlanningUI", "Size (m): ", Q_NULLPTR));
        label_12->setText(QApplication::translate("MotionPlanningUI", "Center (m): ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(manipulation), QApplication::translate("MotionPlanningUI", "Manipulation", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MotionPlanningUI", "Object Status", Q_NULLPTR));
        object_status->setText(QApplication::translate("MotionPlanningUI", "Status", Q_NULLPTR));
        pose_scale_group_box->setTitle(QApplication::translate("MotionPlanningUI", "Manage Pose and Scale", Q_NULLPTR));
        label_4->setText(QApplication::translate("MotionPlanningUI", "Position (XYZ): ", Q_NULLPTR));
        label_13->setText(QApplication::translate("MotionPlanningUI", "Rotation (RPY):", Q_NULLPTR));
        label->setText(QApplication::translate("MotionPlanningUI", "Scale:", Q_NULLPTR));
        label_17->setText(QApplication::translate("MotionPlanningUI", "0%", Q_NULLPTR));
        label_18->setText(QApplication::translate("MotionPlanningUI", "200%", Q_NULLPTR));
        groupBox3->setTitle(QApplication::translate("MotionPlanningUI", "Scene Geometry", Q_NULLPTR));
        publish_current_scene_button->setText(QApplication::translate("MotionPlanningUI", "&Publish Scene", Q_NULLPTR));
        export_scene_text_button->setText(QApplication::translate("MotionPlanningUI", "&Export As Text", Q_NULLPTR));
        import_scene_text_button->setText(QApplication::translate("MotionPlanningUI", "&Import From Text", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        groupBox_8->setToolTip(QApplication::translate("MotionPlanningUI", "Press Ctrl+C to duplicate an object", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox_8->setTitle(QApplication::translate("MotionPlanningUI", "Current Scene Objects", Q_NULLPTR));
        import_url_button->setText(QApplication::translate("MotionPlanningUI", "Import &URL", Q_NULLPTR));
        clear_scene_button->setText(QApplication::translate("MotionPlanningUI", "Clear", Q_NULLPTR));
        remove_object_button->setText(QApplication::translate("MotionPlanningUI", "Remove", Q_NULLPTR));
        import_file_button->setText(QApplication::translate("MotionPlanningUI", "Import &File", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(scene_collision_objects), QApplication::translate("MotionPlanningUI", "Scene Objects", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MotionPlanningUI", "Planning Scenes and Queries", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = planning_scene_tree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MotionPlanningUI", "1", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MotionPlanningUI", "Saved Scenes", Q_NULLPTR));
        load_scene_button->setText(QApplication::translate("MotionPlanningUI", "Load &Scene", Q_NULLPTR));
        load_query_button->setText(QApplication::translate("MotionPlanningUI", "Load &Query", Q_NULLPTR));
        delete_scene_button->setText(QApplication::translate("MotionPlanningUI", "Delete Scene", Q_NULLPTR));
        delete_query_button->setText(QApplication::translate("MotionPlanningUI", "Delete Query", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MotionPlanningUI", "Current Scene", Q_NULLPTR));
        save_scene_button->setText(QApplication::translate("MotionPlanningUI", "Save Scene", Q_NULLPTR));
        save_query_button->setText(QApplication::translate("MotionPlanningUI", "Save Query", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(stored_plans), QApplication::translate("MotionPlanningUI", "Stored Scenes", Q_NULLPTR));
        groupBox_15->setTitle(QApplication::translate("MotionPlanningUI", "Stored States", Q_NULLPTR));
        load_state_button->setText(QApplication::translate("MotionPlanningUI", "Filter", Q_NULLPTR));
        clear_states_button->setText(QApplication::translate("MotionPlanningUI", "Clear", Q_NULLPTR));
        groupBox_16->setTitle(QApplication::translate("MotionPlanningUI", "Selected State", Q_NULLPTR));
        set_as_start_state_button->setText(QApplication::translate("MotionPlanningUI", "Set as Start", Q_NULLPTR));
        set_as_goal_state_button->setText(QApplication::translate("MotionPlanningUI", "Set as Goal", Q_NULLPTR));
        remove_state_button->setText(QApplication::translate("MotionPlanningUI", "Remove", Q_NULLPTR));
        groupBox_17->setTitle(QApplication::translate("MotionPlanningUI", "Current State", Q_NULLPTR));
        save_start_state_button->setText(QApplication::translate("MotionPlanningUI", "Save Start", Q_NULLPTR));
        save_goal_state_button->setText(QApplication::translate("MotionPlanningUI", "Save Goal", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(stored_states), QApplication::translate("MotionPlanningUI", "Stored States", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MotionPlanningUI", "Status", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        background_job_progress->setWhatsThis(QApplication::translate("MotionPlanningUI", "<html><head/><body><p>Progress of background jobs</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        background_job_progress->setFormat(QString());
    } // retranslateUi

};

namespace Ui {
    class MotionPlanningUI: public Ui_MotionPlanningUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTION_PLANNING_RVIZ_PLUGIN_FRAME_H
