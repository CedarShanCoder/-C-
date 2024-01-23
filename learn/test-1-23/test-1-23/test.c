#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//分支语序

// if语句

//int main()
//{
//	/*int a = 10;
//	if (a == 10)
//		printf("hehe\n");*/
//
//	/*int age = 20;
//	if (age > 18)
//		printf("成年\n");*/
//
//	//int age = 17;
//	//if (age < 18)      //if else语句控制多条语句时要加括号
//	//{
//	//	printf("未成年\n");
//	//	printf("不能饮酒\n");
//	//}
//	//	
//	//else
//	//{
//	//	printf("成年\n");
//	//}
//
//	/*int age = 50;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("青成年\n");
//	else if (age >= 18 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else
//		printf("老寿星\n");*/
//
//	int age = 17;
//	if (age > 18)      
//		printf("成年\n");
//	else
//	{
//		printf("未成年\n");
//		printf("不能饮酒\n");
//	}
//
//
//
//	return 0;
//}

//悬空else
//else的匹配：else是和它离的最近的if匹配的。

//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("hehe\n");
//    }
//    else
//            printf("haha\n");
//    return 0;
//}
//1.变量的命名（有意义，规范）
//2.空格，空行，换行

//int main()
//{
//	/*char firstname[20] = { 0 };
//	char first_name[20] = { 0 };
//	char FirstName[20] = { 0 };*/
//
//	int a = 10;
//	int a=10;//不规范
//
//	return 0;
//}

//int test()
//{
//	int a = 4;
//	if (a == 3)
//		return 1;
//	else
//	    return 0;
//}
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//
//	return 0;
//
//}

//int main()
//{
//	int num = 3;
//	if (5 == num)//(num == 5)
//		printf("hehe\n");
//	return 0;
//
//}

//练习
//1. 判断一个数是否为奇数

//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("No\n");
//
//	return 0;
//
//}

//2. 输出1-100之间的奇数

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	   
//	return 0;
//
//}

//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d ", a);
//		a += 2;
//	}
//
//
//	return 0;
//}

//switch语句
//switch语句也是一种分支语句。
//常常用于多分支的情况。

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	/*if (1 == day)
//		printf("星期一\n");
//	else if (2 == day)
//		printf("星期二\n");
//	else if (3 == day)
//		printf("星期三\n");
//	else....*/
//	//在switch语句中的 break
//		//在switch语句中，我们没办法直接实现分支，搭配break使用才能实现真正的分支。
//	/*switch(整型表达式)
//	{
//		语句项；
//	}
//	是一些case语句：
//    如下：
//    case 整形常量表达式:
//	语句;*///
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//
//
//	return 0;
//
//}

//有时候我们的需求变了：
//1. 输入1 - 5，输出的是“weekday”;
//2. 输入6 - 7，输出“weekend”
//所以我们的代码就应该这样实现了：

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("weekday\n");
//			break;
//		case 6:
//		case 7:
//			printf("weekend\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
    int n = 1;
    int m = 2;
    switch (n)
    {
    case 1:
        m++;
    case 2:
        n++;
    case 3:
        switch (n)
        {//switch允许嵌套使用
        case 1:
            n++;
        case 2:
            m++;
            n++;
            break;//一个break只会跳出它所在的switch语句
        }
    case 4:
        m++;
        break;
    default:
        break;
    }
    printf("m = %d, n = %d\n", m, n);
    return 0;
}
