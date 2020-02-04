;; Auto-generated. Do not edit!


(when (boundp 'moveit_task_constructor_msgs::Property)
  (if (not (find-package "MOVEIT_TASK_CONSTRUCTOR_MSGS"))
    (make-package "MOVEIT_TASK_CONSTRUCTOR_MSGS"))
  (shadow 'Property (find-package "MOVEIT_TASK_CONSTRUCTOR_MSGS")))
(unless (find-package "MOVEIT_TASK_CONSTRUCTOR_MSGS::PROPERTY")
  (make-package "MOVEIT_TASK_CONSTRUCTOR_MSGS::PROPERTY"))

(in-package "ROS")
;;//! \htmlinclude Property.msg.html


(defclass moveit_task_constructor_msgs::Property
  :super ros::object
  :slots (_name _description _type _value ))

(defmethod moveit_task_constructor_msgs::Property
  (:init
   (&key
    ((:name __name) "")
    ((:description __description) "")
    ((:type __type) "")
    ((:value __value) "")
    )
   (send-super :init)
   (setq _name (string __name))
   (setq _description (string __description))
   (setq _type (string __type))
   (setq _value (string __value))
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:description
   (&optional __description)
   (if __description (setq _description __description)) _description)
  (:type
   (&optional __type)
   (if __type (setq _type __type)) _type)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; string _name
    4 (length _name)
    ;; string _description
    4 (length _description)
    ;; string _type
    4 (length _type)
    ;; string _value
    4 (length _value)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; string _description
       (write-long (length _description) s) (princ _description s)
     ;; string _type
       (write-long (length _type) s) (princ _type s)
     ;; string _value
       (write-long (length _value) s) (princ _value s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _description
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _description (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _type
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _type (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _value
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _value (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get moveit_task_constructor_msgs::Property :md5sum-) "b19ef77008ca0ef1b0885becc80f0f7b")
(setf (get moveit_task_constructor_msgs::Property :datatype-) "moveit_task_constructor_msgs/Property")
(setf (get moveit_task_constructor_msgs::Property :definition-)
      "string name
string description
string type
string value

")



(provide :moveit_task_constructor_msgs/Property "b19ef77008ca0ef1b0885becc80f0f7b")


