#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


//猜数字游戏实现
//电脑产生一个随机数0-100
//猜数字
//猜大了
//猜小了
//直到猜对了，结束

//void menu()
//{
//	printf("**********************************\n");
//	printf("***********  1.play     **********\n");
//	printf("***********  0.exit     **********\n");
//	printf("**********************************\n");
//}
//
////0-RAND_MAX(32767)
////RAND_MAX--rand函数能返回随机数的最大值。
//void game()
//{
//	int guess = 0;
//	//1.生成随机数字
//	//0-99 --> 1-100
//	int ret = rand()%100+1;//生成随机数字
//	//printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字的整个逻辑
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择！\n");
//			break;
//		}
//	} while (input);
//
//	
//	return 0;
//
//}


//goto语句
//C语言中提供了可以随意滥用的 goto语句和标记跳转的标号。
//从理论上 goto语句是没有必要的，实践中没有goto语句也可以很容易的写出代码。
//但是某些场合下goto语句还是用得着的，最常见的用法就是终止程序在某些深度嵌套的结构的处理过程。
//例如：一次跳出两层或多层循环。
//多层循环这种情况使用break是达不到目的的。它只能从最内层循环退出到上一层的循环。

//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;  //不能跨函数跳转
//	return 0;
//}

//goto语言真正适合的场景如下：
//for (...)
//for (...)
//{
//    for (...)
//    {
//        if (disaster)
//            goto error;
//    }
//}
//…
//error :
//if (disaster)
// 处理错误情况

//下面是使用goto语句的一个例子，然后使用循环的实现方式替换goto语句：
//一个关机程序
 

//关机程序
//1.电脑运行起来后，1分钟内关机
//2.如果输入：我是猪，就取消关机

//int main()
//{
//    char input[10] = { 0 };
//    system("shutdown -s -t 60");
//again:
//    printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//    scanf("%s", input);
//    if (0 == strcmp(input, "我是猪"))
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//}

//int main()
//{
//    char input[10] = { 0 };
//    system("shutdown -s -t 60");
//    while (1)
//    {
//        printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//        scanf("%s", input);
//        if (0 == strcmp(input, "我是猪"))
//        {
//            system("shutdown -a");
//            break;
//        }
//    }
//    return 0;
//}


//strcpy是C语言中的一个字符串操作函数，用于将一个字符串复制到另一个字符串中。
//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1,arr2);
//	printf("%s\n", arr1); //hello bit
//
//	return 0;
//
//}

//memset是C语言中的一个内存操作函数，用于将指定的内存块设置为特定的值。
//memset接受三个参数：ptr，value和num，分别表示要设置的内存块的起始地址、要设置的值以及要设置的字节数。
//int main()
//{
//	char arr[20] = "hello bit";
//	memset(arr,'x',5);
//	printf("%s\n", arr);//xxxxx bit
//	return 0;
//
//}

//int main()
//{
//	char arr[20] = "hello bit";
//	memset(arr+6, 'x', 3);
//	printf("%s\n", arr);//hello xxx
//	return 0;
//
//}


//求较大值
//int get_max(int x, int y)
//{
//	/*if (x < y)
//	{
//		return y;
//	}*/
//
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数值:\n");
//	scanf("%d %d", &a, &b);
//	//求较大值
//	//函数的调用
//	int m=get_max(a, b);
//	printf("%d\n", m);
//
//
//	return 0;
//
//}

//写一个函数可以交换两个整型变量的内容
//形式参数
//void Swap(int x,int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//	
//}

//void Swap(int* px, int* py)
//{
//	int z = *px;//a
//	*px = *py;//a=b
//	*py = z;//b=a
//}
//当实参传递给形参的时候，形参是实参的一份临时拷贝，对形参的修改不会形象实参
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("交换前:a=%d b=%d\n", a, b);
//	//a和b叫实参
//	//Swap(a, b);
//	Swap(&a, &b);
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//
//}

void menu()
{
	printf("*********** 猜数字小游戏 **********\n");
	printf("***********************************\n");
	printf("***********   1.play     **********\n");
	printf("***********   0.exit     **********\n");
	printf("**********************************\n");
}
void game()
{
	int guess = 0;
	int ret = rand()%100+1;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择！\n");
			break;
		}
	} while (input);
    char arr[10] = { 0 };
    system("shutdown -s -t 60");
again:
    printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
    scanf("%s", arr);
    if (0 == strcmp(arr, "我是猪"))
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}