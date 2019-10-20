// 用电位器调节数码管显示数字
// Adjust the digital display with potentiometer

// 设置控制各段的数字IO脚，具体几号引脚对应哪一段
// Set the digital IO pin of each control section, and specify which section of pin corresponds to
int pin_a = 7;
int pin_b = 6;
int pin_c = 5;
int pin_d = 10;
int pin_e = 11;
int pin_f = 8;
int pin_g = 9;
int pin_p = 4;

// 保存读到的模拟值
// Save read analog values
int readValue = 0; 
// 需要显示的数据
// Data to be displayed
int showValue = 0; 

// 根据共阳极数码管（5611BH）段码表定义0~9显示的各段开关状态
// According to the common anode nixie tube (5611BH) segment code table, define the switch status of each segment displayed from 0 to 9.

int numTable[10][8] = 
{
    // 0为点亮，1为关闭
    // Because 0 is on, 1 is off

    // a  b  c  d  e  f  g  dp
    {0, 0, 0, 0, 0, 0, 1, 1},     //0
    {1, 0, 0, 1, 1, 1, 1, 1},     //1
    {0, 0, 1, 0, 0, 1, 0, 1},     //2
    {0, 0, 0, 0, 1, 1, 0, 1},     //3
    {1, 0, 0, 1, 1, 0, 0, 1},     //4
    {0, 1, 0, 0, 1, 0, 0, 1},     //5
    {0, 1, 0, 0, 0, 0, 0, 1},     //6
    {0, 0, 0, 1, 1, 1, 1, 1},     //7
    {0, 0, 0, 0, 0, 0, 0, 1},     //8
    {0, 0, 0, 0, 1, 0, 0, 1},     //9
};


void setup()
{
    // 设置4～11引脚为输出模式
    // Set pin 4-11 as output mode

    for (int i = 4; i <= 11; i++)
    {
        pinMode(i, OUTPUT); 
    }
}

void loop()
{
    // 读取A0模拟口的数值（0-5V 对应0-1023取值）
    // Read the value of A0 analog port (0-5V corresponds to 0-1023 value)
    readValue = analogRead(A0); 
    //将0-1023之间的数据映射成0到9之间的数据
    // Map data between 0-1023 to data between 0 and 9
    showValue = map(readValue, 0, 1023, 0, 9); 
    int i = showValue;
    // Set the level of the pin
    digitalWrite(pin_a, numTable[i][0]); //设置a 引脚的电平
    digitalWrite(pin_b, numTable[i][1]); //设置b 引脚的电平
    digitalWrite(pin_c, numTable[i][2]); //设置c 引脚的电平
    digitalWrite(pin_d, numTable[i][3]); //设置d 引脚的电平
    digitalWrite(pin_e, numTable[i][4]); //设置e 引脚的电平
    digitalWrite(pin_f, numTable[i][5]); //设置f 引脚的电平
    digitalWrite(pin_g, numTable[i][6]); //设置g 引脚的电平
    digitalWrite(pin_p, numTable[i][7]); //设置dp引脚的电平
}
