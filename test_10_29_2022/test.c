#define _CRT_SECURE_NO_WARNINGS 1
//����scanf�ı���   ���ڴ���ĵ�һ��

//��������
//char     �ַ���������
//short    ������
//int      ���� 
//long     ������
//long long������
//float    �����ȸ�����
//double   ˫���ȸ�����

//a
//'a' - �ַ�a

//int main()
//{
//    char ch = 'a';
//    int age = 20;
//    short num = 10;
//    float weight = 55.5;
//    double d = 0.0;
//
//    return 0;
//}



//ÿһ�����ʹ�С�Ƕ���

#include <stdio.h>
//int main()
//{
//	printf("%d\n", 100);  //��ӡһ������ - %d
//	printf("%d\n", sizeof(char));      //1       //sizeof - �ؼ��� - ������ - �������ͻ��߱�����ռ�ռ�Ĵ�С - ��λ���ֽ�
//	printf("%d\n", sizeof(short));     //2
//	printf("%d\n", sizeof(int));       //4
//	printf("%d\n", sizeof(long));      //4��8   sizeof(long) >= sizeof(int)
//	printf("%d\n", sizeof(long long)); //8
//	printf("%d\n", sizeof(float));     //4
//	printf("%d\n", sizeof(double));    //8
//
//	return 0;
//}

//int main()
//{
//	int age = 20;  //����һ������   ����+��������=0
//	double weight = 75.3;
//
//
//	age = age + 1;
//	weight = weight - 20;
//	printf("%d\n", age);
//	printf("%lf\n", weight);   //d������  f��float  lf��double
//	return 0;
//}

//int a = 100;      //ȫ�ֱ���    {}�ⲿ�����
//int main()
//{
//	int a = 10;  //�ֲ�����    {}�ڲ������
//	printf("%d\n", a);         //��ȫ�ֱ����;ֲ��������ֳ�ͻ������£��ֲ�����     �����飺��ȫ�ֱ����;ֲ�����������д��һ����
//	return 0;
//}


//дһ�����������������ĺ�
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
		printf("sum = %d\n", sum);


	return 0;
}