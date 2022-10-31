#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//
////字符串就是一串字符 - 就是用双引号括起来的一串字符
//
////int main()
////{
////	"asdfg";
////	"hello bit";
////	return 0;
////}
////#include <string.h>
////int main()
////{
////	//字符数组 - 数组是一组相同类型的元素
////	//字符串在结尾的位置隐藏了一个\0的字符
////	//\0是字符串的结束标志***，计算字符串长度时候\0不算字符串内容
////
////	//char arr[] = "hello";
////
////	char arr1[] = "abc";
////	char arr2[] = { 'a','b','c'};
////	//调试时arr1,arr2是4,3
////    //打印时arr1 - abc\0   arr2 - abc乱码
////	//若在arr2后面添加'\0',则打印都是abc
////
////	//求字符串的长度
////	printf("%d\n", strlen(arr1));//3
////	printf("%d\0", strlen(arr2));//15随机值  若放入终止符\0则是3
////	//int len = strlen("abc");//string length
////	//printf("%d\n", len);//长度是3，'\0'不包含在内
////
////	//打印字符串
////	/*printf("%s\n", arr1);
////	printf("%s\n", arr2);*/
////
////
////	return 0;
////}
//
////转义字符 - 转变他原来的意思!
////int main()
////{
////	/*printf("c:\\test\\test.c");*/   \t水平制表符 相当于tab键，如果不希望他转义在前面加\
////	printf("ab\ncd");
////	return 0;
////}
//
////int main()
////{
////	//printf("(are you ok\?\?)");//??) - ]  三字母词
////	//(are you ok]
////	//printf("%c\n", '\'');
////	//printf("%s\n", "abc");
////	//printf("%s\n", "a");
////	//printf("%s\n", "\"");
////	////printf在打印数据的时候，可以指定打印的格式
////	//printf("%d", 100);
////	//printf("%c", 'a');
////	//printf("%s", "abc");
////	//printf("c:\\test\\test.c");//\\防止转义字符
////	//printf("\a\a\a");//警告字符
////	//printf("%c\n", '\130');//8进制的130是十进制的88，X所对应的ASCII码值是88
////	//printf("%c\n", '\101');//A - 65 - 8进制是：101
////	//printf("%c\n", '\x30');//16进制的30 - 十进制的48 - ASCII的0
////	printf("%d\n", strlen("abc"));//3	
////	printf("%d\n", strlen("c:\test\328\test.c"));//14     c : \t e s t \32 8 \t e s t . c
////
////	return 0;
////}
//
////注释是用来解释复杂代码的
//
/////*
////int main()
////{
////	//int a = 10;//C++注释风格
////	/*
////	int b = 10;//C语言的注释风格  不支持嵌套注释
////	*/
////	return 0;
////}
////*/
//
////选择语句
//
//
int mian()
{
	int input = 0;//输入的值
	printf("加入比特:>");
	printf("那要好好学习吗(1/0)?>:");
	scanf("%d", &input);

	if (input == 1)
		printf("好offer\n");
	else
		printf("卖红薯\n");

	return 0;
 }