#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//作用域和生命周期
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程

//int g_val = 2021;//全局变量
//
//int main()
//{
//	printf("hehe\n");
//	//int a = 10;
//	printf("1:%d\n", g_val);
//	//printf("a = %d\n", a);    //这里就是a的作用域
//	{
//		//int a = 10;           //大括号里就是a的作用域
//		printf("2:%d\n", g_val);
//	}
//	printf("3:%d\n", g_val);
//
//
//
//return 0;
//}


//声明一个变量
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//生命周期
//变量的生命周期：变量的创建和销毁之间的时间段
//
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期

//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//
//	}
//	//printf("%d\n", a);   //变量销毁
//	return 0;
//}
//#define MAX 10000
//int main()
//{
//	1.字面常量
//	3.14;
//	10;
//	'a';
//	'asdf';
//
//	//2.const修饰的常变量
//	//const int num = 10;//num就是一个常变量 - 具有长属性（不能被改变的属性）
//	//num = 20;
//	//printf("num = %d\n", num);  //20
//    //证明常变量仍然是变量
//	int arr[10] = { 0 };//10个元素
//
//	cost int n = 10;
//	int arr2[n] = { 0 };//n是变量的，这里是不行的
//
//    3.#define定义的标识符常量
//	MAX = 20000;//err
//	/*int n = MAX;
//	printf("n = %d\n", n);*/
//
//	
//	return 0;
//}

//性别
enum Sex
{
    //这种枚举常量的变量的未来可能取值
    //枚举常量
    MALE  = 3,//赋初值
    FEMALE,
    SECRET
};
int main()
{
    //4.枚举常量
    //可以一一列举的常量

    enum Sex s = MALE;
    printf("%d\n", MALE);//0
    printf("%d\n", FEMALE);//1
    printf("%d\n", SECRET);//2
    return 0;
}
    