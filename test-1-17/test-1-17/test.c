#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//4. 字符串+转义字符+注释
//int main()
//{
//	//#$%%ffsty
//	//char 字符类型
//	//'a'字符常量
//	//char ch = 'w';
//	//字符串     这种由双引号（Double Quote）引起来的一串字符称为字符串字面值（String Literal），或者简称字符串。
//	//C语言中有没有字符串类型呢？  --没有
//	/*"asddff"*/
//	char arr1[] = "asdfgh";//\0   有7个
//	//字符串的结束标志是一个 \0 的转义字符。在计算字符串长度的时候 \0 是结束标志，不算作字符串内容。
//	char arr2[] = { 'a','s','d','f','g','h','\0'};//有6个
//
//	int len = strlen(arr1);//求字符串长度的一个函数，string length
//	printf("%d\n", len);
//
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//
//	return 0;
//}

//转义字符
// 三字母词
//??) --> ]
//??( --> [

//%d - 打印整型
//%c - 打印字符
//%s - 打印字符串
//%f - 打印float类型的数据
//%lf - 打印double类型的数据
//%zu - 打印sizeof的返回值
//
//int main()
//{
//	//printf("asdfghn");
//	//printf("asdfgh\n");//\n是换行符
//	//printf("asd\0fghn");//\0是字符结束标志
//	//printf("%s\n", "(are you ok??)");
//	//(are you ok]//现在的软件很少出现这种情况，若出现，可以用\?
//	//printf("%c\n", 'w');
//	//printf("%c\n", '\'');//\'是就单纯打印单引号
//	//printf("asdfgh\n");
//	//printf("a");
//	//printf("\"");//\"是就单纯打印双引号
//	//printf("%s\n", "asdfgh");
//	//printf("asd\\0fgh");//\\0是消除\0的意思
//	//printf("c:\\test\\test.c");//\t是水平制表符，就是出现空格
//	//printf("\a");//\a是警告字符，蜂鸣
//	//printf("%c\n",'\130');//X    \ddd   ddd表示1~3个八进制的数字。 如： \130  将八进制数130转换成十进制数，再对应ASCII码的符号
//	//printf("%c\n", '\x63');//C   \xdd   dd表示2个十六进制数字。 如： \x63     将十六进制数63转换成十进制数，再对应ASCII码的符号
//
//
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("asd fg"));//6  空格也算一个字符
//	printf("%d\n", strlen("c:\test\628\test.c"));//14  \t算一个字符，虽然效果是水平制表符退了4个空格
//	//\62算一个字符  
//	return 0;
//}

//选择语句
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好学习吗(1/0)?");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//
//	return 0;
//
//}

//循环选择语句
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while(line<2000)
//	{
//		printf("写代码：%d\n", line);
//		line++;
//	}
//	if(line >= 2000)
//	{
//		printf("好offer\n");
//	}
//	else 
//	{
//		printf("继续加油\n");
//	}
//	return 0;
//
//}
//函数
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//int Add(int x, int y)    //这一整个小程序就是定义add，相当于封装，把函数封装好后，以后再用直接调取
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);            //add先定义它
//	printf("sum = %d\n", sum);
//	return 0;
//}

//数组
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//下标0-9
	/*printf("%d", arr[7]);*/
	int i = 0;
	while(i < 10)
	{
		printf("%d", arr[i]);
		i = i + 1;
	}
	return 0;

}