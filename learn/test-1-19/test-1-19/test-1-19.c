#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//操作符


//int main()
//{
//	//int a = 7 / 2;
//	//int b = 7 % 2;//取模
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	//除号两端都是整数的时候，执行整数除法，如果两端只要有一个浮点数就执行浮点数的除法
//	float a = 7 / 2.0;
//	int b = 7 % 2;//取模
//	//取模操作符的两个操作符只能是整数
//	printf("%.1f\n", a);//.1f是说明保留小数点后一位，.2f是后两位
//	printf("%d\n", b);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//
//	a = a + 3;//a=23
//	a += 3;
//
//	a = a - 3;
//	a -= 3;
//	return 0;
//
//}

//c语言中
//0表示假
//非0表示真

//int main()
//{
//	/*int flag = 2;
//	if (!flag)//!是逻辑反操作
//	{
//		printf("hehe\n");
//	}*/
//		
//	//int a = -10;//-+是负正值
//	//int b = +a;
//	//printf("%d\n", b);
//
//	//sizeof是单目操作符
//
//		//int a = 10;
//		//printf("%d\n", sizeof(a));//4
//		//printf("%d\n", sizeof(int));//4
//		//printf("%d\n", sizeof a);//4
//		
//		//int arr[10] = { 0 };
//		//printf("%d\n", sizeof(arr));//40 计算的是整个数组的大小，单位是字节
//		//printf("%d\n", sizeof(arr[0]));//4
//		//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10  数组的元素个数
//
//	//int a = 10;
//	//int b = a++;//后置++，先使用，后++
//	//int b = a; a = a + 1;
//
//	//int b = ++a;//前置++，前++，后使用
//	//a=a+1;b=a;
//
//	//int b = a--;
//	//b=a;a=a-1;
//
//	//int b = --a;
//	//a=a-1;b=a;
//	/*printf("%d\n", b);
//	printf("%d\n", a);*/
//
//
//
//	//int a = (int)3.14;//(类型)是强制类型转换
//	//printf("%d\n", a);
//	//3.14 字面浮点型，编译器默认理解为double类型
//
//
//
//	
//
//
//
//	return 0;
//
//}

//int main()
//{
//	int a = 10;
//	if (a == 3)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	//&&逻辑与 - 并且
//	//||逻辑或 - 或者
//
//	//int a = 20;
//	//int b = 10;
//	//if (a && b)//全真为真，一假全假
//	//{
//	//	printf("hehe\n");
//	//}
//
//	//int a = 0;
//	//int b = 0;
//	//if (a || b)//全假为假，一真全真
//	//{
//	//	printf("hehe\n");
//	//}
//
//	int a = 10;
//	int b = 20;
//	int r = (a > b ? a : b);//exp1 ? exp2 : exp3   exp是表达式  条件操作符
//	                      // 真    结果    X
//                          // 假     X    结果
//	printf("%d\n", r);
//
//	return 0;
//}

//逗号表达式就是逗号隔开的一串表达式
//逗号表达式的特点：从左向右依次计算，整个表达式的结果是最后一个表达式的结果

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);
//	//        c=8         a=28       5
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 3;
//	arr[n] = 20;//[]就是下标引用操作符，arr和3就是[]的操作数
//	return 0;
//}

//函数调用操作符（）
//int ADD(int x, int y)
//{
//	int z= 0;
//	z = x + y;
//	return z;
//
//}
//
//int main()
//{
//	int sum = ADD(2, 3);//()就是函数调用操作符，且不能省略，sizeof能省略是因为他不是函数     
//	//add，2，3都是（）的操作数
//	printf("%d\n", sum);
//	return 0;
//
//}

//关键字 - C语言本身内置的，关键字不是自己创建出来的，也不是自己创建的
//auto - 自动,可省略
//break - 跳出循环  与for，while，do while，continue一起连用
// case 与Switch,default,if else， goto连用
// enum - 枚举  struct - 结构体  union - 联合体（共用体）
// const - 常属性
// extern - 声明外部符号的
// register - 寄存器
// return - 函数返回值
// signed - 有符号的  unsigned - 无符号的
// sizeof - 计算大小的
// static - 静态的
// typeof - 类型重命名
// void - 无（函数的返回类型，函数的参数）
//



int main()
{
	int a = 10;//自动变量
	return 0;

}

//变量的命名：
//1.有意义
//int age
// int salary
// 
// 2.名字必须是字母，数字，下划线组成
// 不能有特殊字符，同时不能以数字开头。
// int 2b;//err
// int _2b;//ok
// 
// 3.变量名不能是关键字
// 
//