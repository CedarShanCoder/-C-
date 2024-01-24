#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//循环语句

//while

//int  main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//
//}

//打印1-10数字

//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		a++;
//		if (a == 5)
//			//break;
//			/*总结：
//			break在while循环中的作用：
//			其实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。
//			所以：while中的break是用于永久终止循环的。*/
//			continue;
//	        /*总结:
//		    continue在while循环中的作用就是：
//			continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，
//			而是直接跳转到while语句的判断部分。进行下一次循环的入口判断。*/
//		printf("%d ", a);
//		
//	}
//
//	return 0;
//
//}

//代码1
//int main()
//{
//    //EOF;//end of file是文件结束标志，值为-1，getchar返回EOF时，返回为-1的整数，所以用int，不用char
//    //int ch = getchar();//getchar是获取字符的ASCII值赋值给ch
//    //printf("%c\n", ch);//以字符的形式打印ch
//    //putchar(ch);//putchar是输出ch值
//
//    //int ch = 0;
//    //while ((ch = getchar()) != EOF)//ch不等于EOF就输出ch，getchar是从缓冲区获取的，所以当你输入a回车时，其实是a\n,打印时先打印a再打印\n才会出现换行
//    //    putchar(ch);
//    //return 0;//让程序结束就让它返回EOF，按ctrl+z回车
//
//    //举个例子
//    //假设密码是一个字符串
//    char password[20] = { 0 };
//    printf("请输入密码:>");
//    scanf("%s", password);//如果输入的是123456\n，那scanf只拿走输入缓冲区的123456，还剩下\n就会被getchar拿走
//                          //如果输入的是123456 789456\n，那getchar就不管用了，由于getcar能力有限，只能读取空格
//                          //若连续加几个getchar，那太麻烦了，因此解决方法如下：
//    //getchar();//读取了\n
//
//    int ch = 0;
//    while ((ch = getchar()) != '\n')//
//        while ((ch = getchar()) != '\n')//getchar从输入缓冲区获取值时，循环获取，遇到\n终止
//    {
//        ;
//    }
//    printf("请确认密码(Y/N):>");
//    int ret = getchar();
//    if ('Y' == ret)
//    {
//        printf("Yes\n");
//    }
//    else
//    {
//        printf("No\n");
//
//    }
//    return 0;
//}
//这里的代码适当的修改是可以用来清理缓冲区的.


//代码2
//int main()
//{
//    char ch = '\0';//就是初始化，\0的ASCII值为0
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch > '9')//输入的值在这个范围内为真，跳过，为假，输出打印
//            //0 - 48  9 - 57
//            continue;
//        putchar(ch);
//    }
//    return 0;
//}
//这个代码的作用是：只打印数字字符，跳过其他字符的、