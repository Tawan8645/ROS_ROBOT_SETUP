# ROS_ROBOT_SETUP

# UBUNTU INSTALLATION
 UBUNTU 20.04.6 LTS
 
 https://drive.google.com/drive/folders/1x9s8SUgf7DIj0JMVBGTX56LaDOjb5rz_?usp=sharing

# ROS ( Robot Operating System )
 Noetic Installing

 https://wiki.ros.org/noetic/Installation

# Command Create Workspace ( ROS )
 Create Workspace
 
  1 . mkdir name_ws

  2 . cd name_ws/
  
  3 . mkdir src
  
  4 . cd src/
  
  5 . catkin_create_pkg name_pkg rospy roscpp std_msgs geometry_msgs
  
  6 . cd name_pkg/
  
  7 . ls
  
  8 . cd src/
  
  9 . touch name_project_cpp
  
  10 . touch name_project_py
  
  11 . cd
  
  12 . cd name_ws/
  
  13 . catkin_make
  
  เข้า roscd name_pkg พิมพ์ nano CMakelists.txt สามารถแก้ไฟล์ package ได้
  cd กลับหน้าหลักพิมพ์ nano .bashrc ใส่ source /home/name pc/name_ws/devel/setup.bash บันทึกด้วยการ ctrl o ตามด้วย enter 
  เพื่อเป็นการเปิดให้ ROS เห็น package ที่สร้าง 
