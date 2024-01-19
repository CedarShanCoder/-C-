#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MAX(int x, int y)
{
	if (x < y)
		return y;
	else
		return x;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	//求两个整数的较大值
	int r = MAX(a, b);
	printf("%d\n", r);
	return 0;
}