;; Auto-generated. Do not edit!


(when (boundp 'moveit_msgs::MoveItErrorCodes)
  (if (not (find-package "MOVEIT_MSGS"))
    (make-package "MOVEIT_MSGS"))
  (shadow 'MoveItErrorCodes (find-package "MOVEIT_MSGS")))
(unless (find-package "MOVEIT_MSGS::MOVEITERRORCODES")
  (make-package "MOVEIT_MSGS::MOVEITERRORCODES"))

(in-package "ROS")
;;//! \htmlinclude MoveItErrorCodes.msg.html


(intern "*SUCCESS*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*SUCCESS* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*SUCCESS* 1)
(intern "*FAILURE*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*FAILURE* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*FAILURE* 99999)
(intern "*PLANNING_FAILED*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*PLANNING_FAILED* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*PLANNING_FAILED* -1)
(intern "*INVALID_MOTION_PLAN*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*INVALID_MOTION_PLAN* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*INVALID_MOTION_PLAN* -2)
(intern "*MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE* -3)
(intern "*CONTROL_FAILED*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*CONTROL_FAILED* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*CONTROL_FAILED* -4)
(intern "*UNABLE_TO_AQUIRE_SENSOR_DATA*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*UNABLE_TO_AQUIRE_SENSOR_DATA* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*UNABLE_TO_AQUIRE_SENSOR_DATA* -5)
(intern "*TIMED_OUT*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*TIMED_OUT* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*TIMED_OUT* -6)
(intern "*PREEMPTED*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*PREEMPTED* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*PREEMPTED* -7)
(intern "*START_STATE_IN_COLLISION*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*START_STATE_IN_COLLISION* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*START_STATE_IN_COLLISION* -10)
(intern "*START_STATE_VIOLATES_PATH_CONSTRAINTS*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*START_STATE_VIOLATES_PATH_CONSTRAINTS* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*START_STATE_VIOLATES_PATH_CONSTRAINTS* -11)
(intern "*GOAL_IN_COLLISION*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*GOAL_IN_COLLISION* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*GOAL_IN_COLLISION* -12)
(intern "*GOAL_VIOLATES_PATH_CONSTRAINTS*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*GOAL_VIOLATES_PATH_CONSTRAINTS* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*GOAL_VIOLATES_PATH_CONSTRAINTS* -13)
(intern "*GOAL_CONSTRAINTS_VIOLATED*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*GOAL_CONSTRAINTS_VIOLATED* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*GOAL_CONSTRAINTS_VIOLATED* -14)
(intern "*INVALID_GROUP_NAME*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*INVALID_GROUP_NAME* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*INVALID_GROUP_NAME* -15)
(intern "*INVALID_GOAL_CONSTRAINTS*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*INVALID_GOAL_CONSTRAINTS* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*INVALID_GOAL_CONSTRAINTS* -16)
(intern "*INVALID_ROBOT_STATE*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*INVALID_ROBOT_STATE* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*INVALID_ROBOT_STATE* -17)
(intern "*INVALID_LINK_NAME*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*INVALID_LINK_NAME* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*INVALID_LINK_NAME* -18)
(intern "*INVALID_OBJECT_NAME*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*INVALID_OBJECT_NAME* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*INVALID_OBJECT_NAME* -19)
(intern "*FRAME_TRANSFORM_FAILURE*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*FRAME_TRANSFORM_FAILURE* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*FRAME_TRANSFORM_FAILURE* -21)
(intern "*COLLISION_CHECKING_UNAVAILABLE*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*COLLISION_CHECKING_UNAVAILABLE* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*COLLISION_CHECKING_UNAVAILABLE* -22)
(intern "*ROBOT_STATE_STALE*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*ROBOT_STATE_STALE* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*ROBOT_STATE_STALE* -23)
(intern "*SENSOR_INFO_STALE*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*SENSOR_INFO_STALE* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*SENSOR_INFO_STALE* -24)
(intern "*NO_IK_SOLUTION*" (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(shadow '*NO_IK_SOLUTION* (find-package "MOVEIT_MSGS::MOVEITERRORCODES"))
(defconstant moveit_msgs::MoveItErrorCodes::*NO_IK_SOLUTION* -31)
(defclass moveit_msgs::MoveItErrorCodes
  :super ros::object
  :slots (_val ))

(defmethod moveit_msgs::MoveItErrorCodes
  (:init
   (&key
    ((:val __val) 0)
    )
   (send-super :init)
   (setq _val (round __val))
   self)
  (:val
   (&optional __val)
   (if __val (setq _val __val)) _val)
  (:serialization-length
   ()
   (+
    ;; int32 _val
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _val
       (write-long _val s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _val
     (setq _val (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get moveit_msgs::MoveItErrorCodes :md5sum-) "aa336b18d80531f66439810112c0a43e")
(setf (get moveit_msgs::MoveItErrorCodes :datatype-) "moveit_msgs/MoveItErrorCodes")
(setf (get moveit_msgs::MoveItErrorCodes :definition-)
      "int32 val

# overall behavior
int32 SUCCESS=1
int32 FAILURE=99999

int32 PLANNING_FAILED=-1
int32 INVALID_MOTION_PLAN=-2
int32 MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE=-3
int32 CONTROL_FAILED=-4
int32 UNABLE_TO_AQUIRE_SENSOR_DATA=-5
int32 TIMED_OUT=-6
int32 PREEMPTED=-7

# planning & kinematics request errors
int32 START_STATE_IN_COLLISION=-10
int32 START_STATE_VIOLATES_PATH_CONSTRAINTS=-11

int32 GOAL_IN_COLLISION=-12
int32 GOAL_VIOLATES_PATH_CONSTRAINTS=-13
int32 GOAL_CONSTRAINTS_VIOLATED=-14

int32 INVALID_GROUP_NAME=-15
int32 INVALID_GOAL_CONSTRAINTS=-16
int32 INVALID_ROBOT_STATE=-17
int32 INVALID_LINK_NAME=-18
int32 INVALID_OBJECT_NAME=-19

# system errors
int32 FRAME_TRANSFORM_FAILURE=-21
int32 COLLISION_CHECKING_UNAVAILABLE=-22
int32 ROBOT_STATE_STALE=-23
int32 SENSOR_INFO_STALE=-24

# kinematics errors
int32 NO_IK_SOLUTION=-31

")



(provide :moveit_msgs/MoveItErrorCodes "aa336b18d80531f66439810112c0a43e")


