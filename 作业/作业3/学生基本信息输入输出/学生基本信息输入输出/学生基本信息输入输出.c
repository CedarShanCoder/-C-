#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//���Ȳ��ߵ���float�����ȸߵ���double
	int id = 0;
	float c = 0.0f;//����f��������Ϊ��double���ͣ���f��������Ϊ��float����
	float math = 0.0f;
	float eng = 0.0f;

	//����
	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
	//���
	printf("The each subject score of No. %d is %.2f,%.2f,%.2f.\n", id, c, math, eng);
	//.2�Ǳ���С�������λ
	return 0;
}