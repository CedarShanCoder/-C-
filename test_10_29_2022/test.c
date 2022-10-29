#define _CRT_SECURE_NO_WARNINGS 1
//处理scanf的报错   放在代码的第一行

//数据类型
//char     字符数据类型
//short    短整型
//int      整型 
//long     长整型
//long long长整型
//float    单精度浮点数
//double   双精度浮点数

//a
//'a' - 字符a

//int main()
//{
//    char ch = 'a';
//    int age = 20;
//    short num = 10;
//    float weight = 55.5;
//    double d = 0.0;
//
//    return 0;
//}



//每一种类型大小是多少

#include <stdio.h>
//int main()
//{
//	printf("%d\n", 100);  //打印一个整数 - %d
//	printf("%d\n", sizeof(char));      //1       //sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小 - 单位是字节
//	printf("%d\n", sizeof(short));     //2
//	printf("%d\n", sizeof(int));       //4
//	printf("%d\n", sizeof(long));      //4或8   sizeof(long) >= sizeof(int)
//	printf("%d\n", sizeof(long long)); //8
//	printf("%d\n", sizeof(float));     //4
//	printf("%d\n", sizeof(double));    //8
//
//	return 0;
//}

//int main()
//{
//	int age = 20;  //创建一个变量   类型+变量名字=0
//	double weight = 75.3;
//
//
//	age = age + 1;
//	weight = weight - 20;
//	printf("%d\n", age);
//	printf("%lf\n", weight);   //d是整型  f是float  lf是double
//	return 0;
//}

//int a = 100;      //全局变量    {}外部定义的
//int main()
//{
//	int a = 10;  //局部变量    {}内部定义的
//	printf("%d\n", a);         //当全局变量和局部变量名字冲突的情况下，局部优先     不建议：把全局变量和局部变量的名字写成一样的
//	return 0;
//}


//写一个代码求两个整数的和
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
		printf("sum = %d\n", sum);


	return 0;
}