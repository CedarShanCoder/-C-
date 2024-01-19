#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// ‰»Î
	int x = 0;
	int y = 0;
	//º∆À„
	scanf("%d", &x);
	if (x < 0)
		y = 1;
	else if (x == 0)
		y = 0;
	else
		y = -1;
	// ‰≥ˆ
	printf("%d\n", y);

	return 0;
}