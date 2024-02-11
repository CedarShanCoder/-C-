#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//3. 函数的参数
//3.1 实际参数（实参）：
//真实传给函数的参数，叫实参。
//实参可以是：常量、变量、表达式、函数等。
//无论实参是何种类型的量，在进行函数调用时，它们都必须有确定的值，以便把这些值传送给形
//参。
//3.2 形式参数（形参）：
//形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化（分配内
//存单
//元），所以叫形式参数。形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有
//效。
//下面 Swap1 和 Swap2 函数中的参数 x，y，px，py 都是形式参数。在main函数中传给 Swap1 的 num1 ，
//num2 和传
//给 Swap2 函数的& num1 ，& num2 是实际参数。
//这里可以看到 Swap1 函数在调用的时候， x ， y 拥有自己的空间，同时拥有了和实参一模一样的内容。
//所以我们可以简单的认为：形参实例化之后其实相当于实参的一份临时拷贝。


//写一个函数可以交换两个整形变量的内容。
//实现成函数，但是不能完成任务
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//正确的版本
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}

//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	scanf("%d%d", &a, &b);
//	Swap1(a, b);
//	//传值调用-----函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参。
//	Swap2(&a, &b);
//	//传址调用---传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
//    //这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量。
//	printf("交换前:a = %d b = %d\n", a, b);
//	
//	printf("交换后a = %d b = %d\n", a, b);
//	return 0;
//}


//1. 写一个函数可以判断一个数是不是素数。
//打印100-200之间的素数
//素数是只能被1和它本身整除的数组
//7
//1和7

//sqrt是数学库函数
//开平方
//math.h

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否是素数
//		//是素数就打印
//		//拿2到i-1之间的数字去试除i
//		int flag = 1;//flag是1表示是素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
	   if (n % j == 0)
	   {
		   return 0;
	   }
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}