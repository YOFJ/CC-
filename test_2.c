#include  <stdio.h>
//char-字符类型
//%d--打印整型
//%c--打印字符
//%f--打印浮点型-打小数
//%p--以地址形式打印
//%x--打印16进制
int main()
{
	//char ch = 'A';//内存
	//printf ("%c\n", ch); //%c--打印字符格式的数据
	
	//int age = 20 ;
	//printf("%d\n", age);//%d--打印整型十进制数据
	//short int--短整型
	//int-整型
	//long --长整型
	//long num = 100;//-长整型赋值100
	//printf("%d\n",num);
	//float f = 5.0;//-浮点型赋值5.0
	//printf("%f\n", f);
	//double d = 3.14;//-双精度浮点型赋值3.14
	//printf("%lf\n", d);//%lf-输出双精度浮点型赋值
	//printf("%d\n", sizeof(char));// 1个字节=8bit位
	//printf("%d\n", sizeof(short));//2个字节=16bit位
	//printf("%d\n", sizeof(int));//4个字节=32bit位
	//printf("%d\n", sizeof(long));//4个字节=32bit位
	//printf("%d\n", sizeof(long long)); //8个字节=64bit位
	//printf("%d\n", sizeof(float));//4个字节=32bit位
	//printf("%d\n", sizeof(double));//8个字节=64bit位
	  //size of 是用来计算括号内的大小
	//字节
	//计算机中的单位
	//bit 比特位
	//byte 字节
	//kb  
	//short int age = 20; //2字节=16个比特位 2^16-1=65535
	short age = 20;//向内存申请2个字节=16bit位，用来存放20
	float weight = 95.6f;//向内存申请4个字节=32bit位，存放小数

	return 0;
}