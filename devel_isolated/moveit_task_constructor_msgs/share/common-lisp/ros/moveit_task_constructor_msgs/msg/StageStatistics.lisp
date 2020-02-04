; Auto-generated. Do not edit!


(cl:in-package moveit_task_constructor_msgs-msg)


;//! \htmlinclude StageStatistics.msg.html

(cl:defclass <StageStatistics> (roslisp-msg-protocol:ros-message)
  ((id
    :reader id
    :initarg :id
    :type cl:integer
    :initform 0)
   (solved
    :reader solved
    :initarg :solved
    :type (cl:vector cl:integer)
   :initform (cl:make-array 0 :element-type 'cl:integer :initial-element 0))
   (failed
    :reader failed
    :initarg :failed
    :type (cl:vector cl:integer)
   :initform (cl:make-array 0 :element-type 'cl:integer :initial-element 0))
   (num_failed
    :reader num_failed
    :initarg :num_failed
    :type cl:integer
    :initform 0))
)

(cl:defclass StageStatistics (<StageStatistics>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <StageStatistics>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'StageStatistics)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name moveit_task_constructor_msgs-msg:<StageStatistics> is deprecated: use moveit_task_constructor_msgs-msg:StageStatistics instead.")))

(cl:ensure-generic-function 'id-val :lambda-list '(m))
(cl:defmethod id-val ((m <StageStatistics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader moveit_task_constructor_msgs-msg:id-val is deprecated.  Use moveit_task_constructor_msgs-msg:id instead.")
  (id m))

(cl:ensure-generic-function 'solved-val :lambda-list '(m))
(cl:defmethod solved-val ((m <StageStatistics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader moveit_task_constructor_msgs-msg:solved-val is deprecated.  Use moveit_task_constructor_msgs-msg:solved instead.")
  (solved m))

(cl:ensure-generic-function 'failed-val :lambda-list '(m))
(cl:defmethod failed-val ((m <StageStatistics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader moveit_task_constructor_msgs-msg:failed-val is deprecated.  Use moveit_task_constructor_msgs-msg:failed instead.")
  (failed m))

(cl:ensure-generic-function 'num_failed-val :lambda-list '(m))
(cl:defmethod num_failed-val ((m <StageStatistics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader moveit_task_constructor_msgs-msg:num_failed-val is deprecated.  Use moveit_task_constructor_msgs-msg:num_failed instead.")
  (num_failed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <StageStatistics>) ostream)
  "Serializes a message object of type '<StageStatistics>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'id)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'solved))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) ele) ostream))
   (cl:slot-value msg 'solved))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'failed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) ele) ostream))
   (cl:slot-value msg 'failed))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'num_failed)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'num_failed)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'num_failed)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'num_failed)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <StageStatistics>) istream)
  "Deserializes a message object of type '<StageStatistics>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'id)) (cl:read-byte istream))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'solved) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'solved)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:aref vals i)) (cl:read-byte istream)))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'failed) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'failed)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:aref vals i)) (cl:read-byte istream)))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'num_failed)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'num_failed)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'num_failed)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'num_failed)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<StageStatistics>)))
  "Returns string type for a message object of type '<StageStatistics>"
  "moveit_task_constructor_msgs/StageStatistics")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StageStatistics)))
  "Returns string type for a message object of type 'StageStatistics"
  "moveit_task_constructor_msgs/StageStatistics")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<StageStatistics>)))
  "Returns md5sum for a message object of type '<StageStatistics>"
  "ce0a061efd72c8d723e25e561f7c2179")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'StageStatistics)))
  "Returns md5sum for a message object of type 'StageStatistics"
  "ce0a061efd72c8d723e25e561f7c2179")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<StageStatistics>)))
  "Returns full string definition for message of type '<StageStatistics>"
  (cl:format cl:nil "# dynamically changing information for a stage~%~%# unique id within task~%uint32 id~%~%# successful solution IDs of this stage~%uint32[] solved~%~%# (optional) failed solution IDs of this stage~%uint32[] failed~%# number of failed solutions (if failed is empty)~%uint32   num_failed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'StageStatistics)))
  "Returns full string definition for message of type 'StageStatistics"
  (cl:format cl:nil "# dynamically changing information for a stage~%~%# unique id within task~%uint32 id~%~%# successful solution IDs of this stage~%uint32[] solved~%~%# (optional) failed solution IDs of this stage~%uint32[] failed~%# number of failed solutions (if failed is empty)~%uint32   num_failed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <StageStatistics>))
  (cl:+ 0
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'solved) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'failed) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <StageStatistics>))
  "Converts a ROS message object to a list"
  (cl:list 'StageStatistics
    (cl:cons ':id (id msg))
    (cl:cons ':solved (solved msg))
    (cl:cons ':failed (failed msg))
    (cl:cons ':num_failed (num_failed msg))
))
