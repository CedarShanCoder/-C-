#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//输入数据
	int year = 0;
	int month = 0;
	int date = 0;
	scanf("%4d%2d%2d", &year, &month, &date);
	//4d2d2d是打印整数4位数或者2位数

	//输出
	printf("year=%4d\n", year);
	printf("month=%02d\n", month);//2是两位数，0是未达到两位数补0
	printf("date=%02d\n", date);

	return 0;

}