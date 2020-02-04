
(cl:in-package :asdf)

(defsystem "moveit_task_constructor_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :moveit_task_constructor_msgs-msg
)
  :components ((:file "_package")
    (:file "GetSolution" :depends-on ("_package_GetSolution"))
    (:file "_package_GetSolution" :depends-on ("_package"))
  ))