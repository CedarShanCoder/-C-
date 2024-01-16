#define _CRT_SECURE_NO_WARNINGS

//C语言代码中一定要有main函数
//主函数

//printf是一个库函数
//专门用来打印数据的

//vs2019环境如何运行代码：
//ctrl + f5 
//fn + ctrl + f5
//std - 标准
//i - input
//o - output
#include <stdio.h>
//标准的主函数写法
//c语言规定
//main函数是程序的入口
//main函数有且仅有一个
//int main()
//{
//	printf("hehe\n");
//	printf("hello\n");
//	printf("hehe\n");
//	printf("hello\n"); 
//	printf("hehe\n");
//	printf("hello\n"); 
//	printf("hehe\n");
//	printf("hello\n");
//	return 0;
//}
//古老写法-不推荐
//void main()
//{
//
//}
//注释选中行Ctrl+k+c
//取消注释ctrl+k+u


//int main()
//{
//	printf("%d\n", 100);//%d是对应的打印格式，按整型形式进行打印。\n是换行符
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short)); //sizeof()就是获取（）内参数内存大小
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	double price = 66.6;
//	return 0;
//}
//变量和常量的概念
//变量分为：
//局部变量-{}内部定义的变量
//全局变量-{}外部定义的变量


//int b = 20;//全局变量
//
//int main()
//{
//	short age = 20;//年龄
//	int high = 180;//身高
//	float weight = 88.5;//体重
//	int a = 10;//局部变量
//
//	return 0;
//}
//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);//当全局变量和局部变量名字相同的情况下，局部优先
//	return 0;
//
//}

//但是建议不要将全局变量和局部变量的名字写一样的

//写两个代码，计算2个整数的和
//scanf是一个输入函数
//printf是一个输出函数
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//初始化
//
//	//输入2个整数
//	scanf("%d %d", &num1, &num2);
//	//求和
//	int sum =num1 + num2;
//	//输出
//	printf("%d\n", sum);
//	return 0;
//}

//变量的作用域
//1.局部变量
// 局部变量的作用域是变量所在的局部范围。
//2.全局变量
//全局变量的作用域是整个工程。

//变量生命周期
// 局部变量
// 局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
// 全局变量
// 全局变量的生命周期是：整个程序的生命周期。

//int main()
//{
//	{
//	     int a = 100;
//	     printf("%d\n", a);
//	}
//	printf("%d\n", a);
//	return 0;
//}
//声明来自外部的符号
//extern int a;
//void test()
//{
//	printf("test-->%d\n", a);
//}
//int main()
//{
//	test();
//	{
//		
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//
//	return 0;
//}


//1.字面常量
//2.const修饰的常变量
//3.define定义的标识符常量
//4.枚举常量
//int main()
//{
//	//30;
//	//3.14;
//	//'w';//字符
//	//"adc";
//	//const int a = 10;//在C语言中，const修饰的a，本质上是变量，但是不能直接修改，有常量的属性。
//	//a = 20;
//	//printf("%d\n", a);//20
//
//	const int n = 10;//即使你加了const,n实际上还是变量，所以叫常变量
//	int arr[10] = { 0 };//arr[]是数组，[]里是常量
//
//
//
//	return 0;
//}
//#define MAX 100
//#define STR "asfdf"//define定义的标志符变量不一定是整数，也可能是字符串
//int main()
//{
//	//printf("%d\n", MAX);
//	//int a = MAX;
//	//printf("%d\n", a);
//	//printf("%s\n", STR);
//	//MAX =200；//err
//	return 0;
//}

//枚举常量
//enum Color
//{
//	//枚举常量
//	RED,
//	GREEN,
//	BLUE
//};
//
////性别
//enum Sex
//{
//	//枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//三原色
//	//Red Green Blue
//	int num = 10;
//	enum Color c = RED;
//	//RED = 10;//err
//	//MALE = 20;//err
//
//
//	return 0;
//}