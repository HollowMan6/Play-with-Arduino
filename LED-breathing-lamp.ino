// LED呼吸灯
// LED breathing lamp

int led1 = 9; //LED1对应针脚
int led2 = 10; //LED2对应针脚
int led3 = 11; //LED3对应针脚
int led4 = 6; //LED4对应针脚

// 让灯有此起彼伏的亮度
// Let the light have one after another brightness
int brightness1 = 0;     // LED1灯亮度
int brightness2 = 63;     // LED2灯亮度
int brightness3 = 127;     // LED3灯亮度
int brightness4 = 191;     // LED4灯亮度
int fadeAmount1 = 1;   // LED1亮度渐变值
int fadeAmount2 = 1;   // LED2亮度渐变值
int fadeAmount3 = 1;   // LED3亮度渐变值
int fadeAmount4 = 1;   // LED4亮度渐变值

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}
 
void loop() {
  // 使用脉冲宽度调制 Using PWM
  analogWrite(led1, brightness1);
  analogWrite(led2, brightness2);
  analogWrite(led3, brightness3);
  analogWrite(led4, brightness4);
  // 在亮度递增和递减之间切换 Switch between increasing and decreasing brightness
  brightness1 = brightness1 + fadeAmount1;
  if (brightness1 == 0 || brightness1 == 255) {
    fadeAmount1 = -fadeAmount1 ;
  }
  brightness2 = brightness2 + fadeAmount2;
  if (brightness2 == 0 || brightness2 == 255) {
    fadeAmount2 = -fadeAmount2 ;
  }
  brightness3 = brightness3 + fadeAmount3;
  if (brightness3 == 0 || brightness3 == 255) {
    fadeAmount3 = -fadeAmount3 ;
  }
   brightness4 = brightness4 + fadeAmount4;
  if (brightness4 == 0 || brightness4 == 255) {
    fadeAmount4 = -fadeAmount4 ;
  }
  delay(2);
}
