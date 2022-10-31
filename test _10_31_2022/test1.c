#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//选择语句

//int main()
//{
//	int input = 0;//输入的值
//	printf("加入比特:>\n");
//	printf("那你好好学习吗(1/0)?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//
//	return 0;
//}

//循环语句

//比特 - 30000代码 - 找到一个好工作

//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("good offer\n");
//	}
//
//	return 0;
//
//}

//函数
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	//函数的方式解决
//	int sum = Add(num1,num2);
//	printf("%d\n", sum);
//
//	return 0;
//}

//数组 - 一组相同类型的元素的集合
//10个整形1-10存起来
//数组是用下标来访问的
//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;*/
//
//	//...
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//整型数组
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	char ch[5] = { 'a','b','c' };//字符数组   不完全初始化，剩余的默认为0
//
//
//	return 0;
//
//}

//操作符：
//算数操作符：+ - / * %
//移位操作符：>>  <<
//位操作符：&按位与 |按位或 ^按位异或
//赋值操作符：+= -= *= /= &= = ^= |= >>= <<=

//int main()
//{
	//int a = 9 / 2;//4
	//float a = 9 / 2;//4.000000
	//float a = 9 / 2.0;//4.500000
	//int a = 9 % 2;//% - 取模（余）//1
	//printf("%d\n", a);
	//return 0;
//}

//int main()
//{
//	//<<左移操作符 - 移动的是二进制位
//	int a = 2;           //a - 2 -  00000000000000000000000000000010   2
//	int b = a << 1;      //a << 1 - 00000000000000000000000000000100   4
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	//0表示假，非0表示真
//	int a = 10;
//	printf("%d\n", !a);//1   !就是取反
//	if (a)
//	{
//		//如果a为真，做事
//	}
//	if (!a)
//	{
//		//如果a为假，做事
//	}
//	return 0;
//}
int main()
{
	//sizeof是一个操作符不是函数
	//计算类型或变量的大小
	//int a = 10;
	//printf("%d\n", sizeof(int));//4  但此处不能省略，通常使用不会省略
	//printf("%d\n", sizeof a);//4  此处括号可以省略，证明sizeof不是函数
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//40个字节   计算的是数组的总大小，单位是字节
	printf("%d\n", sizeof(arr[0]));//4   一个元素的数组大小
	int sz = sizeof(arr) / sizeof(arr[0]);//10个元素   数组中几个元素
	printf("%d\n", sz);
	return 0;
}
