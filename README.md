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
  พิมพ์ สามารถแก้ไฟล์ package ได้
 ```bash
  nano CMakeLists.txt 
 ```
  กลับหน้าหลัก พิมพ์ 
 ```bash
  cd
  nano .bashrc 
 ```
  ใส่ 
 ```bash
  source /home/name pc/name_ws/devel/setup.bash
  source .bashrc
 ```
  บันทึกด้วยการ ctrl o ตามด้วย enter 
  เพื่อเป็นการเปิดให้ ROS เห็น package ที่สร้าง
  
  เช็ค package
 ```bash
  rospack list 
 ```

source /opt/ros/noetic/setup.bash
source /home/tawan/z_control_bot_ws/devel/setup.bash
source /home/tawan/z_motorrun_ws/devel/setup.bash


export ROS_MASTER_URI=http://192.168.118.183:11311
export ROS_IP=192.168.118.183


ทำให้ NODE ที่สร้างใช้งานได้้
cd เข้าไปในแพคแกจ
chmod u+x talker.py




