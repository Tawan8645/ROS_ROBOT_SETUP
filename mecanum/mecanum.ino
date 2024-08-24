#include <ros.h>
#include <geometry_msgs/Twist.h>

// #### Motor Driver 1 ####
int INA1 = 2;
int INB1 = 3;
int PWM1 = 4;
// #### Motor Driver 2 ####
int INA2 = 5;
int INB2 = 6;
int PWM2 = 7;
// #### Motor Driver 3 ####
int INA3 = 8;
int INB3 = 9;
int PWM3 = 10;
// #### Motor Driver 4 ####
int INA4 = 11;
int INB4 = 12;
int PWM4 = 13;

// #### Speed Board ####
int speed1 = 80;
int speed2 = 80;
int speed3 = 80;
int speed4 = 80;

ros::NodeHandle nh;

// Forward declaration of the callback function
void onTwist(const geometry_msgs::Twist& msg);

// Subscriber for the 'cmd_vel' topic
ros::Subscriber<geometry_msgs::Twist> sub("cmd_vel", &onTwist);

void setup() {
  // Motor Driver Initialization
  pinMode(INA1, OUTPUT);
  pinMode(INB1, OUTPUT);
  pinMode(PWM1, OUTPUT);

  pinMode(INA2, OUTPUT);
  pinMode(INB2, OUTPUT);
  pinMode(PWM2, OUTPUT);

  pinMode(INA3, OUTPUT);
  pinMode(INB3, OUTPUT);
  pinMode(PWM3, OUTPUT);

  pinMode(INA4, OUTPUT);
  pinMode(INB4, OUTPUT);
  pinMode(PWM4, OUTPUT);

  // Initialize ROS
  nh.initNode();
  nh.subscribe(sub);
}

void loop() {
  nh.spinOnce();
  delay(10);  // To ensure smooth operation
}

void onTwist(const geometry_msgs::Twist& msg) {
  float linear_x = msg.linear.x;
  float angular_z = msg.angular.z;

  if (linear_x > 0) {
    forword();
  } else if (linear_x < 0) {
    backword();
  } else if (angular_z > 0) {
    slideRight();
  } else if (angular_z < 0) {
    slideLeft();
  } else {
    stopbot();
  }
}

// Function implementations
void forword() {
  digitalWrite(INA1, LOW);
  digitalWrite(INB1, HIGH);
  analogWrite(PWM1, speed1);

  digitalWrite(INA2, HIGH);
  digitalWrite(INB2, LOW);
  analogWrite(PWM2, speed2);

  digitalWrite(INA3, LOW);
  digitalWrite(INB3, HIGH);
  analogWrite(PWM3, speed3);

  digitalWrite(INA4, HIGH);
  digitalWrite(INB4, LOW);
  analogWrite(PWM4, speed4);
}

void backword() {
  digitalWrite(INA1, HIGH);
  digitalWrite(INB1, LOW);
  analogWrite(PWM1, speed1);

  digitalWrite(INA2, LOW);
  digitalWrite(INB2, HIGH);
  analogWrite(PWM2, speed2);

  digitalWrite(INA3, HIGH);
  digitalWrite(INB3, LOW);
  analogWrite(PWM3, speed3);

  digitalWrite(INA4, LOW);
  digitalWrite(INB4, HIGH);
  analogWrite(PWM4, speed4);
}

void slideRight() {
  digitalWrite(INA1, HIGH);
  digitalWrite(INB1, LOW);
  analogWrite(PWM1, speed1);

  digitalWrite(INA2, HIGH);
  digitalWrite(INB2, LOW);
  analogWrite(PWM2, speed2);

  digitalWrite(INA3, LOW);
  digitalWrite(INB3, HIGH);
  analogWrite(PWM3, speed3);

  digitalWrite(INA4, LOW);
  digitalWrite(INB4, HIGH);
  analogWrite(PWM4, speed4);
}

void slideLeft() {
  digitalWrite(INA1, LOW);
  digitalWrite(INB1, HIGH);
  analogWrite(PWM1, speed1);

  digitalWrite(INA2, LOW);
  digitalWrite(INB2, HIGH);
  analogWrite(PWM2, speed2);

  digitalWrite(INA3, HIGH);
  digitalWrite(INB3, LOW);
  analogWrite(PWM3, speed3);

  digitalWrite(INA4, HIGH);
  digitalWrite(INB4, LOW);
  analogWrite(PWM4, speed4);
}

void stopbot() {
  digitalWrite(INA1, LOW);
  digitalWrite(INB1, LOW);
  analogWrite(PWM1, 0);

  digitalWrite(INA2, LOW);
  digitalWrite(INB2, LOW);
  analogWrite(PWM2, 0);

  digitalWrite(INA3, LOW);
  digitalWrite(INB3, LOW);
  analogWrite(PWM3, 0);

  digitalWrite(INA4, LOW);
  digitalWrite(INB4, LOW);
  analogWrite(PWM4, 0);
}
