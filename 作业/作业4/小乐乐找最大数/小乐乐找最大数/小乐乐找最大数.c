#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[4] = { 0 };
//	//0 1 2 3
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	//�����ֵ
//	//�����һ��Ԫ�ؾ������ֵ
//	int max = arr[0];
//	i = 1;
//	while (i<4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}


int main()
{
	int i = 1;
	int n = 0;
	int max = 0;
	//�����һ��Ԫ�ؾ������ֵ
	scanf("%d", &max);
	while (i < 4)
	{
		scanf("%d", &n);
		if (n > max)
			max = n;
		i++;
	}
	printf("%d\n", max);
	return 0;
}