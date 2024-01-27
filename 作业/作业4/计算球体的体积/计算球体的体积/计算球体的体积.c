#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double r = 0.0f;
	double v = 0.0f;
	scanf("%lf", &r);
	v = 4 / 3.0 * 3.1415926 * r * r * r;
	printf("%.3lf",v);

	return 0;
}