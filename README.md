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
  mkdir name_ws
 ```
 ```bash
  cd name_ws/
 ```
 ```bash
  mkdir src
 ```
 ```bash
  cd src/
 ```
 ```bash
  catkin_create_pkg name_pkg rospy roscpp std_msgs geometry_msgs
 ```
 ```bash
  cd name_pkg/
 ```
 ```bash
  ls
  cd src/
 ```
 ```bash
  touch name_project_cpp
 ```
 ```bash
  touch name_project_py
 ```
 ```bash
  cd
  cd name_ws/
 ```
 ```bash
  catkin_make
 ```
  เข้า
 ```bash
  roscd name_pkg 
 ```
  พิมพ์ 
 ```bash
  nano CMakeLists.txt 
 ```
  สามารถแก้ไฟล์ package ได้
  กลับหน้าหลัก พิมพ์ 
 ```bash
  cd
  nano .bashrc 
 ```
  ใส่ 
 ```bash
  source /home/name pc/name_ws/devel/setup.bash 
 ```
  เช็ค package
 ```bash
  rospack list 
 ```
  บันทึกด้วยการ ctrl o ตามด้วย enter 
  เพื่อเป็นการเปิดให้ ROS เห็น package ที่สร้าง
