;; Auto-generated. Do not edit!


(when (boundp 'moveit_task_constructor_msgs::TaskDescription)
  (if (not (find-package "MOVEIT_TASK_CONSTRUCTOR_MSGS"))
    (make-package "MOVEIT_TASK_CONSTRUCTOR_MSGS"))
  (shadow 'TaskDescription (find-package "MOVEIT_TASK_CONSTRUCTOR_MSGS")))
(unless (find-package "MOVEIT_TASK_CONSTRUCTOR_MSGS::TASKDESCRIPTION")
  (make-package "MOVEIT_TASK_CONSTRUCTOR_MSGS::TASKDESCRIPTION"))

(in-package "ROS")
;;//! \htmlinclude TaskDescription.msg.html


(defclass moveit_task_constructor_msgs::TaskDescription
  :super ros::object
  :slots (_process_id _id _stages ))

(defmethod moveit_task_constructor_msgs::TaskDescription
  (:init
   (&key
    ((:process_id __process_id) "")
    ((:id __id) "")
    ((:stages __stages) (let (r) (dotimes (i 0) (push (instance moveit_task_constructor_msgs::StageDescription :init) r)) r))
    )
   (send-super :init)
   (setq _process_id (string __process_id))
   (setq _id (string __id))
   (setq _stages __stages)
   self)
  (:process_id
   (&optional __process_id)
   (if __process_id (setq _process_id __process_id)) _process_id)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:stages
   (&rest __stages)
   (if (keywordp (car __stages))
       (send* _stages __stages)
     (progn
       (if __stages (setq _stages (car __stages)))
       _stages)))
  (:serialization-length
   ()
   (+
    ;; string _process_id
    4 (length _process_id)
    ;; string _id
    4 (length _id)
    ;; moveit_task_constructor_msgs/StageDescription[] _stages
    (apply #'+ (send-all _stages :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _process_id
       (write-long (length _process_id) s) (princ _process_id s)
     ;; string _id
       (write-long (length _id) s) (princ _id s)
     ;; moveit_task_constructor_msgs/StageDescription[] _stages
     (write-long (length _stages) s)
     (dolist (elem _stages)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _process_id
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _process_id (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _id
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _id (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; moveit_task_constructor_msgs/StageDescription[] _stages
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _stages (let (r) (dotimes (i n) (push (instance moveit_task_constructor_msgs::StageDescription :init) r)) r))
     (dolist (elem- _stages)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get moveit_task_constructor_msgs::TaskDescription :md5sum-) "9afd83396a3e2a67fc8fa2217e8c70c4")
(setf (get moveit_task_constructor_msgs::TaskDescription :datatype-) "moveit_task_constructor_msgs/TaskDescription")
(setf (get moveit_task_constructor_msgs::TaskDescription :definition-)
      "# id of generating process
string process_id

# unique ID of this task
string id

# list of all stages, including the task stage itself
StageDescription[] stages

================================================================================
MSG: moveit_task_constructor_msgs/StageDescription
# static description of a stage

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



(provide :moveit_task_constructor_msgs/TaskDescription "9afd83396a3e2a67fc8fa2217e8c70c4")


