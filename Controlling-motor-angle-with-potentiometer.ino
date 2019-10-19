// 用电位器控制电机角度
// Controlling motor angle with potentiometer

// 导入伺服电机函数库
// Import servo motor function library
#include <Servo.h> 
// 定义电机名字
// Define motor name
Servo myservo; 
// 电位器输入的信号值
// Signal value of potentiometer input
int sensor=0; 
int angle=0;
void setup() {
  myservo.attach(9);
}

void loop() {
  sensor=analogRead(A0);
  // 将sensor读到的信号值（0-1023）转化为角度值（0-180）
  // Convert the signal value (0-1023) read by the sensor to the angle value (0-180)
  angle=map(sensor,0,1023,0,180);
  myservo.write(angle);
  delay(15);
}
