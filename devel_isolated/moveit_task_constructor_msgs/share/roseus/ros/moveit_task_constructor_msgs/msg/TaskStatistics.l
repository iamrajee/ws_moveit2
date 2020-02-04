;; Auto-generated. Do not edit!


(when (boundp 'moveit_task_constructor_msgs::TaskStatistics)
  (if (not (find-package "MOVEIT_TASK_CONSTRUCTOR_MSGS"))
    (make-package "MOVEIT_TASK_CONSTRUCTOR_MSGS"))
  (shadow 'TaskStatistics (find-package "MOVEIT_TASK_CONSTRUCTOR_MSGS")))
(unless (find-package "MOVEIT_TASK_CONSTRUCTOR_MSGS::TASKSTATISTICS")
  (make-package "MOVEIT_TASK_CONSTRUCTOR_MSGS::TASKSTATISTICS"))

(in-package "ROS")
;;//! \htmlinclude TaskStatistics.msg.html


(defclass moveit_task_constructor_msgs::TaskStatistics
  :super ros::object
  :slots (_process_id _id _stages ))

(defmethod moveit_task_constructor_msgs::TaskStatistics
  (:init
   (&key
    ((:process_id __process_id) "")
    ((:id __id) "")
    ((:stages __stages) (let (r) (dotimes (i 0) (push (instance moveit_task_constructor_msgs::StageStatistics :init) r)) r))
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
    ;; moveit_task_constructor_msgs/StageStatistics[] _stages
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
     ;; moveit_task_constructor_msgs/StageStatistics[] _stages
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
   ;; moveit_task_constructor_msgs/StageStatistics[] _stages
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _stages (let (r) (dotimes (i n) (push (instance moveit_task_constructor_msgs::StageStatistics :init) r)) r))
     (dolist (elem- _stages)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get moveit_task_constructor_msgs::TaskStatistics :md5sum-) "97b790cd1fcfa2d2674c1b83cc7d5e8c")
(setf (get moveit_task_constructor_msgs::TaskStatistics :datatype-) "moveit_task_constructor_msgs/TaskStatistics")
(setf (get moveit_task_constructor_msgs::TaskStatistics :definition-)
      "# id of generating process
string process_id

# unique of this task
string id

# list of all stages, including the task stage itself
StageStatistics[] stages

================================================================================
MSG: moveit_task_constructor_msgs/StageStatistics
# dynamically changing information for a stage

# unique id within task
uint32 id

# successful solution IDs of this stage
uint32[] solved

# (optional) failed solution IDs of this stage
uint32[] failed
# number of failed solutions (if failed is empty)
uint32   num_failed

")



(provide :moveit_task_constructor_msgs/TaskStatistics "97b790cd1fcfa2d2674c1b83cc7d5e8c")


