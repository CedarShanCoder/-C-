#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//��������
	int year = 0;
	int month = 0;
	int date = 0;
	scanf("%4d%2d%2d", &year, &month, &date);
	//4d2d2d�Ǵ�ӡ����4λ������2λ��

	//���
	printf("year=%4d\n", year);
	printf("month=%02d\n", month);//2����λ����0��δ�ﵽ��λ����0
	printf("date=%02d\n", date);

	return 0;

}