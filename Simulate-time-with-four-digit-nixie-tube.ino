// 用四位数码管模拟时间
// Simulate time with four digit nixie tube

#include "SevSeg.h"
SevSeg sevseg;
// 数码管位数
// Number of digital tubes
byte numDigits = 4; 
// 数码管公共极连接Arduino的引脚
// Digital tube common pole connection Arduino pin
byte digitPins[] = {2, 3, 12, 13}; 
// 数码管a,b,c,d,e,f,g,dp对应引脚
// Digital tube A, B, C, D, E, F, G, DP corresponding pins
byte segmentPins[] = {7, 6, 5, 10, 11, 8, 9, 4}; 
// 共阴极数码管
// Common cathode nixie tube
byte hardwareConfig = COMMON_CATHODE ; 

int numToShow = 100;
int delaycount = 0;

void setup() {
  // 初始化数码管
  // Initialize nixie tube
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins); 
}

void loop() 
{
  delaycount++;
  // 通过变量自加来达到延时效果，如果使用delay函数则会打断数码管显示
  // The delay effect is achieved through variable self adding. If the delay function is used, the nixie tube display will be interrupted.
  if (delaycount  == 10000) { 
    delaycount = 0;
    numToShow++;
  }
  if(numToShow%100 > 59){
    numToShow=(numToShow/100+1)*100;
  }

  if (numToShow > 2500)
  {
    numToShow = 0;
  }

  // 设置要显示的数据，显示2位处小数点
  // Set the data to be displayed, display 2 decimal places
  sevseg.setNumber(numToShow, 2); 
  // 必须重复运行刷新数码管显示
  // Must run repeatedly to refresh the nixie tube display
  sevseg.refreshDisplay(); 
}