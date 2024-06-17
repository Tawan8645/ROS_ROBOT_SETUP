# ROS_ROBOT_SETUP

# UBUNTU INSTALLATION
 UBUNTU 20.04.6 LTS
 
 https://drive.google.com/drive/folders/1x9s8SUgf7DIj0JMVBGTX56LaDOjb5rz_?usp=sharing

# ROS ( Robot Operating System )
 Noetic Installing

 https://wiki.ros.org/noetic/Installation

# Command Create Workspace ( ROS )
 Create Workspace
 ```bash
  1 . mkdir name_ws
 ```
 ```bash
  2 . cd name_ws/
 ```
 ```bash
  3 . mkdir src
 ```
 ```bash
  4 . cd src/
 ```
 ```bash
  5 . catkin_create_pkg name_pkg rospy roscpp std_msgs geometry_msgs
 ```
 ```bash
  6 . cd name_pkg/
 ```
 ```bash
  7 . ls
 ```
 ```bash
  8 . cd src/
 ```
 ```bash
  9 . touch name_project_cpp
 ```
 ```bash
  10 . touch name_project_py
 ```
 ```bash
  11 . cd
 ```
 ```bash
  12 . cd name_ws/
 ```
 ```bash
  13 . catkin_make
 ```
  เข้า
 ```bash
  roscd name_pkg 
 ```
  พิมพ์ 
 ```bash
  nano CMakelists.txt 
 ```
  สามารถแก้ไฟล์ package ได้
 ```bash
  cd 
 ```
  กลับหน้าหลัก พิมพ์ 
 ```bash
  nano .bashrc 
 ```
  ใส่ 
 ```bash
  source /home/name pc/name_ws/devel/setup.bash 
 ```
  บันทึกด้วยการ ctrl o ตามด้วย enter 
  เพื่อเป็นการเปิดให้ ROS เห็น package ที่สร้าง
