#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
	//{
	//	int a = 10;
	//	printf("a=%d/n", a);//ok
	//}
	//printf("a = %d\n",a);//error
	//return 0;

//}



//int main()
//{
	//未声明的标识符
	//要声明 extern 声明外部符号的
	//extern int g_val;
	//printf("g_val = %d\n", g_val);
	//return 0;
//	}














//int global = 2020;
//void test()
//{
//	printf("tset()--%d\n",global);
//}


//int main()
//{
//	test();
//	printf("%d\n",global);
//	return 0;
//	}



//int main()
//{
//	局部变量的作用域
//int num = 0;
//	printf("%d\n", num);
//	return 0;
//}






/*int main()
{
	//计算2个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//输入数据-使用输入函数scanf
	scanf("%d%d",&num1, &num2);//&取地址符号
	//C语言语法规定，变量要定义在当前代码块的最前面
	sum = num1 + num2;
	printf("sum= %d\n", sum);

	return 0;
}*/










//int a = 10;
//int main()
//{			
//	printf("%d\n",a );
	
//	return 0;

//}






//int a = 100;
//int main()
//{
	//int a = 10;
	//局部变量和全局变量的名字建议不要相同-容易误会，产生bug
	//当局部变量和全局变量的名字相同时，局部变量优先

	//printf("%d\n", a);
	
	//return 0;

//}




/*int num2 = 20;//全局变量-定义在代码块（{}）之外的变量

int main()
{
	int num1 = 10;//局部变量-定义在代码块（{}）内的变量
	
	return 0;

}*/
