#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
	int i = 0;
	//sizeof(arr) - 计算的是数组的总大小，单位是字节
	//sizeof(0) - 计算的是数组元素的大小
	//sizeof(arr) / sizeof(arr[0]) - 计算的是数组内元素的个数
	int sz = sizeof(arr) / sizeof(arr[0]);
	while (i < sz)
	{
		printf("%c", arr[i]);
		i++;

	}


	int i = 0;
	while (i < 12)//这里没有计算数组内元素的个数，只是数个数
	{
		printf("%c", arr[i]);
		i++;

	}

	return 0;
}