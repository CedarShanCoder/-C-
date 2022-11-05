#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
	/*int a = 0;
	printf("%d\n", ~a);*///00000000000000000000000000000000 - 11111111111111111111111111111111
//按位取反（二进制位） -1 - 原码10000001 - 反码11111110 - 补码11111111
	
	//int a = 10;
	//int b = ++a;//前置++   先++，后使用
	//int b = a++;//后置++     先使用，后++
	//printf("%d\n", b);//10
	//printf("%d\n", a);//11
	//printf("%d\n", b);//11
	//printf("%d\n", a);//11
	
	//int a = (int)3.14;//(*)强制类型转换
	//printf("%d\n", a);

	//int a = 3;
	//int b = 5;
	//int c = a && b;//逻辑与  全真则真
	//int c = a || b;//逻辑或  有一个真则真
	//printf("%d\n", c);//1

	/*if (a && b)
	{

	}*/

	
//条件操作符（三目操作符)
//exp1?exp2:exp3
//exp1成立，exp2计算，整个表达式的结构是：exp2的结果
//exp1不成立，exp3计算，整个表达式的结构是：exp3的结果
	/*int a = 0;
	int b = 3;
	int max = 0;*/
	//方法一
	/*if (a > b)
		max = a;
	else
		max = b;*/
	//方法二
	//max = a > b ? a : b;
	//printf("%d\n", max);//3

	//逗号表达式：逗号隔开的一串表达式
	//(2, 4 + 5, 6);
	//int a = 0;
	//int b = 3;
	//int c = 5;
	//int d = (a = b + 2, c = a - 4, b = c + 2);
	////逗号表达式：从左向右依次计算
	////整个表达式的结果是最后一个表达式的结果
	//printf("%d\n", d);//3

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n", arr[5]);//打印6    []下标引用操作符  ()函数调用操作符


	//c语言提供关键字
	//1.c语言提供的，不能自己创建关键字
	//2.关键字不能做变量名
    //include,define 不是关键字，是预处理指令

	//{
	//	int a = 10;//自动创建，自动销毁 - 自动变量
	//	//auto 省略掉了 新的c语言语法中也有其他用法 - 暂时不考虑
	//}

	//register int num = 100;//建议num的值存放在寄存器中      register 寄存器关键字   
	//signed/unsigned 有无符号的   union 联合体  void 无—空  

//	return 0;
//}
//typedef 类型重定义 / 命名
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//	return 0;
//}
//static 静态的
//1.static修饰局部变量,改变了局部变量的生命周期（本质上改变了变量的存储类型）
//2.static修饰全局变量,使得这个全局变量只能在自己所在的源文件（.c）内部可以使用，其他源文件不能使用！
//  全局变量，在其他源文件内不可以被使用，是因为全局变量具有外部链接属性，但是被static修饰之后，
//  就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了！
//3.static修饰函数，使得函数只能在自己所在的源文件（.c）内部可以使用，其他源文件不能使用！
//  本质上static是将函数的外部链接属性变成了内部链接属性！（和static修饰全局变量一样！）
// 
//栈区   局部变量，存放函数的参数
//堆区   动态内存分配的
//静态区 全局变量，static修饰的静态变量
//void test()
//{
//	//int a = 1;
//	static int a = 1;
//
//	a++;
//	printf("%d\n", a); //10个2   2-11，static取代了auto
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}
//extern是用来申明外部符号的
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//声明函数
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//define是一个预处理指令
//1.define定义字符
//#define max 1000
//int main()
//{
//	printf("%d\n", max);
//	return 0;
//}
//2.define定义宏
#define add(x,y) ((x)+(y))
int main()
{
	printf("%d\n", 4*add(2, 3));//4*2+3
	return 0;
}