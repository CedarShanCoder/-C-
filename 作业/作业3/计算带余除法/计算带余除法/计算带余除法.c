#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	//����
	scanf("%d %d", &a, &b);
	//����
	int m = a / b;
	int n = a % b;
	printf("%d %d\n", m, n);
	printf("%d %d\n", a / b, a % b);

	return 0;

}