#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ѡ�����

//int main()
//{
//	int input = 0;//�����ֵ
//	printf("�������:>\n");
//	printf("����ú�ѧϰ��(1/0)?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//
//	return 0;
//}

//ѭ�����

//���� - 30000���� - �ҵ�һ���ù���

//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("д����:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("good offer\n");
//	}
//
//	return 0;
//
//}

//����
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	//�����ķ�ʽ���
//	int sum = Add(num1,num2);
//	printf("%d\n", sum);
//
//	return 0;
//}

//���� - һ����ͬ���͵�Ԫ�صļ���
//10������1-10������
//���������±������ʵ�
//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;*/
//
//	//...
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��������
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	char ch[5] = { 'a','b','c' };//�ַ�����   ����ȫ��ʼ����ʣ���Ĭ��Ϊ0
//
//
//	return 0;
//
//}

//��������
//������������+ - / * %
//��λ��������>>  <<
//λ��������&��λ�� |��λ�� ^��λ���
//��ֵ��������+= -= *= /= &= = ^= |= >>= <<=

//int main()
//{
	//int a = 9 / 2;//4
	//float a = 9 / 2;//4.000000
	//float a = 9 / 2.0;//4.500000
	//int a = 9 % 2;//% - ȡģ���ࣩ//1
	//printf("%d\n", a);
	//return 0;
//}

//int main()
//{
//	//<<���Ʋ����� - �ƶ����Ƕ�����λ
//	int a = 2;           //a - 2 -  00000000000000000000000000000010   2
//	int b = a << 1;      //a << 1 - 00000000000000000000000000000100   4
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	//0��ʾ�٣���0��ʾ��
//	int a = 10;
//	printf("%d\n", !a);//1   !����ȡ��
//	if (a)
//	{
//		//���aΪ�棬����
//	}
//	if (!a)
//	{
//		//���aΪ�٣�����
//	}
//	return 0;
//}
int main()
{
	//sizeof��һ�����������Ǻ���
	//�������ͻ�����Ĵ�С
	//int a = 10;
	//printf("%d\n", sizeof(int));//4  ���˴�����ʡ�ԣ�ͨ��ʹ�ò���ʡ��
	//printf("%d\n", sizeof a);//4  �˴����ſ���ʡ�ԣ�֤��sizeof���Ǻ���
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//40���ֽ�   �������������ܴ�С����λ���ֽ�
	printf("%d\n", sizeof(arr[0]));//4   һ��Ԫ�ص������С
	int sz = sizeof(arr) / sizeof(arr[0]);//10��Ԫ��   �����м���Ԫ��
	printf("%d\n", sz);
	return 0;
}
