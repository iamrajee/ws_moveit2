;; Auto-generated. Do not edit!


(when (boundp 'moveit_task_constructor_msgs::StageDescription)
  (if (not (find-package "MOVEIT_TASK_CONSTRUCTOR_MSGS"))
    (make-package "MOVEIT_TASK_CONSTRUCTOR_MSGS"))
  (shadow 'StageDescription (find-package "MOVEIT_TASK_CONSTRUCTOR_MSGS")))
(unless (find-package "MOVEIT_TASK_CONSTRUCTOR_MSGS::STAGEDESCRIPTION")
  (make-package "MOVEIT_TASK_CONSTRUCTOR_MSGS::STAGEDESCRIPTION"))

(in-package "ROS")
;;//! \htmlinclude StageDescription.msg.html


(defclass moveit_task_constructor_msgs::StageDescription
  :super ros::object
  :slots (_id _parent_id _name _flags _properties ))

(defmethod moveit_task_constructor_msgs::StageDescription
  (:init
   (&key
    ((:id __id) 0)
    ((:parent_id __parent_id) 0)
    ((:name __name) "")
    ((:flags __flags) 0)
    ((:properties __properties) (let (r) (dotimes (i 0) (push (instance moveit_task_constructor_msgs::Property :init) r)) r))
    )
   (send-super :init)
   (setq _id (round __id))
   (setq _parent_id (round __parent_id))
   (setq _name (string __name))
   (setq _flags (round __flags))
   (setq _properties __properties)
   self)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:parent_id
   (&optional __parent_id)
   (if __parent_id (setq _parent_id __parent_id)) _parent_id)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:flags
   (&optional __flags)
   (if __flags (setq _flags __flags)) _flags)
  (:properties
   (&rest __properties)
   (if (keywordp (car __properties))
       (send* _properties __properties)
     (progn
       (if __properties (setq _properties (car __properties)))
       _properties)))
  (:serialization-length
   ()
   (+
    ;; uint32 _id
    4
    ;; uint32 _parent_id
    4
    ;; string _name
    4 (length _name)
    ;; uint32 _flags
    4
    ;; moveit_task_constructor_msgs/Property[] _properties
    (apply #'+ (send-all _properties :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32 _id
       (write-long _id s)
     ;; uint32 _parent_id
       (write-long _parent_id s)
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; uint32 _flags
       (write-long _flags s)
     ;; moveit_task_constructor_msgs/Property[] _properties
     (write-long (length _properties) s)
     (dolist (elem _properties)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32 _id
     (setq _id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint32 _parent_id
     (setq _parent_id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint32 _flags
     (setq _flags (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; moveit_task_constructor_msgs/Property[] _properties
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _properties (let (r) (dotimes (i n) (push (instance moveit_task_constructor_msgs::Property :init) r)) r))
     (dolist (elem- _properties)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get moveit_task_constructor_msgs::StageDescription :md5sum-) "eae8b915a082df4d70b7bbf2530bd3fd")
(setf (get moveit_task_constructor_msgs::StageDescription :datatype-) "moveit_task_constructor_msgs/StageDescription")
(setf (get moveit_task_constructor_msgs::StageDescription :definition-)
      "# static description of a stage

# unique id within task
uint32 id

# parent id, parent_id == id means root
uint32 parent_id

# name of this stage
string name

# flags: interface, ...
uint32 flags

# properties
Property[] properties

================================================================================
MSG: moveit_task_constructor_msgs/Property
string name
string description
string type
string value

")



(provide :moveit_task_constructor_msgs/StageDescription "eae8b915a082df4d70b7bbf2530bd3fd")


