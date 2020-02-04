;; Auto-generated. Do not edit!


(when (boundp 'moveit_task_constructor_msgs::SubSolution)
  (if (not (find-package "MOVEIT_TASK_CONSTRUCTOR_MSGS"))
    (make-package "MOVEIT_TASK_CONSTRUCTOR_MSGS"))
  (shadow 'SubSolution (find-package "MOVEIT_TASK_CONSTRUCTOR_MSGS")))
(unless (find-package "MOVEIT_TASK_CONSTRUCTOR_MSGS::SUBSOLUTION")
  (make-package "MOVEIT_TASK_CONSTRUCTOR_MSGS::SUBSOLUTION"))

(in-package "ROS")
;;//! \htmlinclude SubSolution.msg.html


(defclass moveit_task_constructor_msgs::SubSolution
  :super ros::object
  :slots (_info _sub_solution_id ))

(defmethod moveit_task_constructor_msgs::SubSolution
  (:init
   (&key
    ((:info __info) (instance moveit_task_constructor_msgs::SolutionInfo :init))
    ((:sub_solution_id __sub_solution_id) (make-array 0 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _info __info)
   (setq _sub_solution_id __sub_solution_id)
   self)
  (:info
   (&rest __info)
   (if (keywordp (car __info))
       (send* _info __info)
     (progn
       (if __info (setq _info (car __info)))
       _info)))
  (:sub_solution_id
   (&optional __sub_solution_id)
   (if __sub_solution_id (setq _sub_solution_id __sub_solution_id)) _sub_solution_id)
  (:serialization-length
   ()
   (+
    ;; moveit_task_constructor_msgs/SolutionInfo _info
    (send _info :serialization-length)
    ;; uint32[] _sub_solution_id
    (* 4    (length _sub_solution_id)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; moveit_task_constructor_msgs/SolutionInfo _info
       (send _info :serialize s)
     ;; uint32[] _sub_solution_id
     (write-long (length _sub_solution_id) s)
     (dotimes (i (length _sub_solution_id))
       (write-long (elt _sub_solution_id i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; moveit_task_constructor_msgs/SolutionInfo _info
     (send _info :deserialize buf ptr-) (incf ptr- (send _info :serialization-length))
   ;; uint32[] _sub_solution_id
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _sub_solution_id (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _sub_solution_id i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get moveit_task_constructor_msgs::SubSolution :md5sum-) "cad7989816e3b99e3abb2b6661af1df0")
(setf (get moveit_task_constructor_msgs::SubSolution :datatype-) "moveit_task_constructor_msgs/SubSolution")
(setf (get moveit_task_constructor_msgs::SubSolution :definition-)
      "# generic solution information
SolutionInfo info

# IDs of subsolutions
uint32[] sub_solution_id

================================================================================
MSG: moveit_task_constructor_msgs/SolutionInfo
# unique id within task
uint32 id

# associated cost
float32 cost

# associated comment, usually providing failure hint
string comment

# id of stage that created this trajectory
uint32 stage_id

# markers, e.g. providing additional hints or illustrating failure
visualization_msgs/Marker[] markers

================================================================================
MSG: visualization_msgs/Marker
# See http://www.ros.org/wiki/rviz/DisplayTypes/Marker and http://www.ros.org/wiki/rviz/Tutorials/Markers%3A%20Basic%20Shapes for more information on using this message with rviz

uint8 ARROW=0
uint8 CUBE=1
uint8 SPHERE=2
uint8 CYLINDER=3
uint8 LINE_STRIP=4
uint8 LINE_LIST=5
uint8 CUBE_LIST=6
uint8 SPHERE_LIST=7
uint8 POINTS=8
uint8 TEXT_VIEW_FACING=9
uint8 MESH_RESOURCE=10
uint8 TRIANGLE_LIST=11

uint8 ADD=0
uint8 MODIFY=0
uint8 DELETE=2
uint8 DELETEALL=3

Header header                        # header for time/frame information
string ns                            # Namespace to place this object in... used in conjunction with id to create a unique name for the object
int32 id 		                         # object ID useful in conjunction with the namespace for manipulating and deleting the object later
int32 type 		                       # Type of object
int32 action 	                       # 0 add/modify an object, 1 (deprecated), 2 deletes an object, 3 deletes all objects
geometry_msgs/Pose pose                 # Pose of the object
geometry_msgs/Vector3 scale             # Scale of the object 1,1,1 means default (usually 1 meter square)
std_msgs/ColorRGBA color             # Color [0.0-1.0]
duration lifetime                    # How long the object should last before being automatically deleted.  0 means forever
bool frame_locked                    # If this marker should be frame-locked, i.e. retransformed into its frame every timestep

#Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...)
geometry_msgs/Point[] points
#Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...)
#number of colors must either be 0 or equal to the number of points
#NOTE: alpha is not yet used
std_msgs/ColorRGBA[] colors

# NOTE: only used for text markers
string text

# NOTE: only used for MESH_RESOURCE markers
string mesh_resource
bool mesh_use_embedded_materials

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
================================================================================
MSG: std_msgs/ColorRGBA
float32 r
float32 g
float32 b
float32 a

")



(provide :moveit_task_constructor_msgs/SubSolution "cad7989816e3b99e3abb2b6661af1df0")


