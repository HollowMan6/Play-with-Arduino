# 利用Arduino做一些有趣的事情

[![last-commit](https://img.shields.io/github/last-commit/HollowMan6/Play-with-Arduino)](../../graphs/commit-activity)

[![Followers](https://img.shields.io/github/followers/HollowMan6?style=social)](https://github.com/HollowMan6?tab=followers)
[![watchers](https://img.shields.io/github/watchers/HollowMan6/Play-with-Arduino?style=social)](../../watchers)
[![stars](https://img.shields.io/github/stars/HollowMan6/Play-with-Arduino?style=social)](../../stargazers)
[![forks](https://img.shields.io/github/forks/HollowMan6/Play-with-Arduino?style=social)](../../network/members)

[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?v=103)](https://hollowman6.github.io/fund.html)
[![GPL Licence](https://badges.frapsoft.com/os/gpl/gpl.svg?v=103)](https://opensource.org/licenses/GPL-3.0/)
[![Repo-Size](https://img.shields.io/github/repo-size/HollowMan6/Play-with-Arduino.svg)](../../archive/master.zip)

## 材料(Material)

Arduino UNO:

![](pics/Arduino-UNO.jpg)

公对公杜邦线(Public to public DuPont lines):

![](pics/Public-to-public-DuPont-lines.jpg)

电位器(Potentiometer)

![](pics/potentiometer.jpg)

面包板(Breadboard)

![](pics/Breadboard.jpg)

数码管(Nixie tube) 5611BH

![](pics/5611BH.jpg)

四位数码管(Four digit nixie tube) 3461AS-1

![](pics/3461AS-1.jpg)

以及伺服电机,电阻和LED。

and servo motor, resistance, LED.

(English Version is down below)

## 制作呼吸灯

参考[这里](https://www.arduino.cn/thread-75674-1-1.html)的教程，我另外将LED灯数目增加，以营造出不一样的效果。

[这是我的源代码](LED-breathing-lamp.ino)

其中，绿色灯为LED1，接9号口；红色为LED2，接10号口；黄色为LED3，接11号口；红外线灯为LED4，接6号口；

请注意，一定要使用带波浪线的输出接口，否则无法营造出呼吸灯的效果。

[这是效果视频](pics/LED-breathing-lamp.mp4)

<video src="pics/LED-breathing-lamp.mp4" controls="controls">当前不支持播放视频，请点击上面链接后查看</video>

---

这个视频中你可以看出，虽然我们人肉眼看不见红外线，但是相机却能拍出红外线，是不是很神奇呢！😀

## 用电位器控制电机角度

准备一个伺服电机和一个电位器，按如图所示接法连入电路：

![](pics/Controlling-motor-angle-with-potentiometer.JPG)

[这是我的源代码](Controlling-motor-angle-with-potentiometer.ino)

[这是效果视频](pics/Controlling-motor-angle-with-potentiometer.mp4)

<video src="pics/Controlling-motor-angle-with-potentiometer.mp4" controls="controls">当前不支持播放视频，请点击上面链接后查看</video>

## 用电位器调节数码管显示数字

准备一个数码管和一个电位器，按如图所示接法连入电路：

***注意: 因为我这里的数码管是共阳极的，与传统共阴极数码管有区别***

![](pics/Adjust-the-digital-display-with-potentiometer.jpg)

[这是我的源代码](Adjust-the-digital-display-with-potentiometer.ino)

[这是效果视频](pics/Adjust-the-digital-display-with-potentiometer.mp4)

<video src="pics/Adjust-the-digital-display-with-potentiometer.mp4" controls="controls">当前不支持播放视频，请点击上面链接后查看</video>

## 用四位数码管模拟时间

参考[这里](pics/https://www.jianshu.com/p/98f6445d3351)的教程，我完成了电路的组装。

[这是我的源代码](Simulate-time-with-four-digit-nixie-tube.ino)

这是效果图:

![](pics/Simulate-time-with-four-digit-nixie-tube.jpg)

# My experience of using Arduino to do some interesting things

## Make breathing LED

Refer to the tutorial [here](https://www.arduino.cn/thread-75674-1-1.html), I increased the number of LED lights to create different effects.

[Here is my Source Code](LED-breathing-lamp.ino)

Among them, green light is LED1, connected to port 9; red light is LED2, connected to port 10; yellow light is LED3, connected to port 11; infrared light is LED4, connected to port 6;

Please note that you must only use port with wavy line, otherwise the effect of breathing LED cannot be created.

[Here is my showing video](pics/LED-breathing-lamp.mp4)

<video src="pics/LED-breathing-lamp.mp4" controls="controls">Can't play video at this time, please click the link above  to watch it.</video>

---

In this video, you can see that although we can't see infrared radiation, but the camera can shoot infrared radiation, isn't it amazing? 😀

## Controlling motor angle with potentiometer

Prepare a servo motor and a potentiometer, and connect the circuit as shown in the figure:

![](pics/Controlling-motor-angle-with-potentiometer.JPG)

[Here is my Source Code](Controlling-motor-angle-with-potentiometer.ino)

[Here is my showing video](pics/Controlling-motor-angle-with-potentiometer.mp4)

<video src="pics/Controlling-motor-angle-with-potentiometer.mp4" controls="controls">Can't play video at this time, please click the link above  to watch it.</video>

## Adjust the digital display with potentiometer

Prepare a nixie tube and a potentiometer, and connect the circuit as shown in the figure:

***Note: the nixie tube here is common anode, which is different from the traditional common cathode nixie tube.***

![](pics/Adjust-the-digital-display-with-potentiometer.jpg)

[Here is my Source Code](Adjust-the-digital-display-with-potentiometer.ino)

[Here is my showing video](pics/Adjust-the-digital-display-with-potentiometer.mp4)

<video src="pics/Adjust-the-digital-display-with-potentiometer.mp4" controls="controls">Can't play video at this time, please click the link above  to watch it.</video>

## Simulate time with four digit nixie tube

Refer to the tutorial [here](https://www.jianshu.com/p/98f6445d3351), I complete the connection of the circuit.

[Here is my Source Code](Simulate-time-with-four-digit-nixie-tube.ino)

Here is my showing picture:

![](pics/Simulate-time-with-four-digit-nixie-tube.jpg)
