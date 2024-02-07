#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//for循环

//int main()
//{
//	int i = 0;//初始化
//	while (i <= 10)//判断
//	{
//		printf("%d\n", i);
//		i++;//调整
//	}
//	return 0;
//
//}

//for (表达式1; 表达式2; 表达式3)
//循环语句;
//表达式1
//表达式1为初始化部分，用于初始化循环变量的。
//表达式2
//表达式2为条件判断部分，用于判断循环时候终止。
//表达式3
//表达式3为调整部分，用于循环条件的调整。

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//		printf("hehe\n");
//	}
//		
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;跳出循环//1 2 3 4
//			continue;//跳过printf至i++   1 2 3 4 6 7 8 9 10
//		printf("%d\n", i);
//	}
//
//	return 0;
//
//}

//int main()
//{
//	int i = 0;//初始化
//	while (i <= 10)//判断
//	{
//		if (i == 5)
//			continue;//跳过printf和i++至while  死循环 12345555.。。。
//		printf("%d\n", i);
//		i++;//调整
//	}
//	return 0;
//
//}

//for语句的循环控制变量
//建议：
//1. 不可在for 循环体内修改循环变量，防止 for 循环失去控制。
//2. 建议for语句的循环控制变量的取值采用“前闭后开区间”写法。

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);//打印1
//		i = 12;//当运行到此时，i被重新赋值12，后经过i++为13，循环终止
//	}
//
//	return 0;
//
//}

//int i = 0;
////前闭后开的写法
//for (i = 0; i < 10; i++)
//{
//}
////两边都是闭区间
//for (i = 0; i <= 9; i++)
//{
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0-9
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//int main()
//{
    //代码1
    //for (;;)//for循环的判断部分省略意味着判断会恒成立
    //{
    //    printf("hehe\n");
    //}
    //for循环中的初始化部分，判断部分，调整部分是可以省略的，但是不建议初学时省略，容易导致问题。

    //代码2
   /* int i = 0;
    int j = 0;
    这里打印多少个hehe?   3*3=9次
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("hehe\n");
        }
    }*/

    ////代码3
    //int i = 0;
    //int j = 0;
    ////如果省略掉初始化部分，这里打印多少个hehe?  3次
    //for (; i < 3; i++)
    //{
    //    for (; j < 3; j++)
    //    {
    //        printf("hehe\n");
    //    }
    //}

    ////代码4-使用多余一个变量控制循环
//    int x, y;
//    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//    {
//        printf("hehe\n");//打印2次
//    }
//    ++x和x++都是对变量x进行自增操作的语法。它们的区别在于自增操作的执行时机和返回值。
//    ++x是前缀自增操作符，先对x进行自增操作，然后返回自增后的值。
//    也就是说，++x会先将x的值加1，然后将自增后的值作为表达式的值。例如：
//    int x = 1;
//    int y = ++x;  // x先自增为2，然后将自增后的值2赋给y
//     现在x的值为2，y的值也为2
//
//    x++是后缀自增操作符，先返回x的当前值，然后再对x进行自增操作。
//    也就是说，x++会先将x的值作为表达式的值，然后再将x的值加1。例如：
//    int x = 1;
//    int y = x++;  // 先将x的值1赋给y，然后x再自增为2
//     现在x的值为2，y的值为1
//    
//    总结来说，++x是先自增后返回值，x++是先返回值后自增。
//    在大多数情况下，它们的效果是相同的，但在某些特定的应用场景下，它们的差异可能会导致不同的结果。
//
//    return 0;
//}

//一道笔试题：
//请问循环要循环多少次？

//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)  0次
//        根据你提供的代码，循环的条件是`k=0`，这是一个赋值语句而不是判断条件。因此，循环不会无限循环下去，永远不会终止。由于循环体内没有改变`k`的值，所以`k`的值会一直保持为0，导致循环条件始终为假。
//        如果你想让循环执行一定的次数，你可以将循环条件修改为一个判断语句，例如`k < n`，其中`n`是你想要循环的次数。这样循环会在`k`达到`n`时终止。
//        k++;
//    return 0;
//}


//do..while循环
// do
//循环语句;
//while (表达式);
//do语句的特点
//循环至少执行一次，使用的场景有限，所以不是经常使用。

//int main()
//{
//    int i = 1;
//    do
//    {
//        printf("%d\n", i);//123456789
//        i++;
//    } 
//    while (i < 10);
//    
//    return 0;
//}

//int main()
//{
//    int i = 1;
//    do
//    {
//        if (i == 5)
//            break;
//        printf("%d\n", i);//1234
//        i++;
//    } 
//    while (i < 10);
//
//    return 0;
//}

//int main()
//{
//    int i = 1;
//    do
//    {
//        i++;
//        if (i == 5)
//            break;
//        printf("%d\n", i);//246810
//        i++;//删去此行打印234
//    } 
//    while (i < 10);
//
//    return 0;
//}

//int main()
//{
//    int i = 1;
//    do
//    {
//        i++;
//        if (i == 5)
//            continue;
//        printf("%d\n", i);//2-10没有5
//    }
//    while (i < 10);
//
//    return 0;
//}

//int main()
//{
//    int i = 1;
//    do
//    {
//        if (i == 5)
//            continue;
//        printf("%d\n", i);//1234死循环
//        i++;
//    } while (i < 10);
//
//    return 0;
//}

//计算n的阶乘
//1*2*3*4*5*6*.....*n

//int main()
//{
//    int i = 1;
//    int n = 0;
//    int ret = 1;//若赋值0，则0*任何数都为0
//
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        ret = ret * i;
//    }
//    printf("%d\n", ret);
//
//    return 0;
//
//}

//计算 1!+ 2!+ 3!+ …… + 10!

//int main()
//{
//    int i = 0;
//    int j = 0;
//    int ret = 1;
//    int sum = 0;
//
//    for (i = 1; i <= 3; i++)
//    {
//        ret = 1;
//        for (j = 1; j <= i; j++)
//        {
//            ret = ret * j;
//        }
//        sum = sum + ret;
//    }
//    printf("%d\n", sum);
//
//    return 0;
//
//}

//简化
//int main()
//{
//    int ret = 1;
//    int sum = 0;
//    int n = 0;
//    for (n = 1; n <= 3; n++)
//    {
//        ret = ret * n;
//        sum = sum + ret;
//    }
//    printf("%d\n", sum);
//
//    return 0;
//
//}

//在一个有序数组中查找具体的某个数字n。（讲解二分查找）

//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 7;
//    //在一个有序数组中查找具体的某个数字n
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++)
//    {
//        if (arr[i] == k)
//        {
//            printf("找到了，下标是：%d\n", i);
//            break;
//        }
//    }
//            
//    if (i == sz)
//    {
//        printf("找不到");
//
//    }
//    return 0;
//}

//二分查找
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 7;
//    //在一个有序数组中查找具体的某个数字n
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int left = 0;
//    int right = sz - 1;
//    
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;//此处可能会存在溢出问题，超出整形范围
//        //解决方法如下：
//        //int mid = left + (right - lft) / 2;
//        if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            printf("找到了，下标是：%d\n", mid);
//            break;
//        }
//    }
//    if (left > right)
//    {
//        printf("找不到\n");
//    }
//    return 0;
//}

//编写代码，演示多个字符从两端移动，向中间汇聚。

//int main()
//{
//    char arr1[] = "welcome to bit!!!!";
//    char arr2[] = "##################";
//    int left = 0;
//    int right = strlen(arr2) - 1;
//    //int right = sizeof(arr1) / sizeof(arr1[0])-2;
//
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        left++;
//        right--;
//    }
//
//    return 0;
//
//}
#include <windows.h>//Sleep头文件
#include <stdlib.h>//system头文件
//int main()
//{
//    char arr1[] = "welcome to bit!!!!";
//    char arr2[] = "##################";
//    int left = 0;
//    int right = strlen(arr2) - 1;
//    //int right = sizeof(arr1) / sizeof(arr1[0])-2;
//
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(1000);//1000ms=1s
//        //清空屏幕
//        system("cls");//system是一个库函数，可以执行系统命令
//        left++;
//        right--;
//    }
//    printf("%s\n", arr2);
//
//    return 0;
//
//}

//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。

//比较2个字符串是否相等，不能使用==，而应该使用一个库函数：strcmp
//如果返回值是0，表示2个字符串相等

#include <string.h>//strcmp头文件
int main()
{
    int i = 0;
    char password[20] = { 0 };
    //假设密码是字符串：asdfgh
    for (i = 0; i < 3; i++)
    {
        printf("请输入输入密码:>");
        scanf("%s", password);//数组名本来就是地址，所以不需要取地址
        if (strcmp(password, "asdfgh") == 0)
        {
            printf("登录成功\n");
            break;
        }
        else
        {
            printf("密码错误\n");
        }
    }
    if (i == 3)
    {
        printf("三次密码均输入错误，退出程序\n");
    }

    return 0;
}