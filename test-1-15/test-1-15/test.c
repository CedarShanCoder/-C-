#define _CRT_SECURE_NO_WARNINGS

//C���Դ�����һ��Ҫ��main����
//������

//printf��һ���⺯��
//ר��������ӡ���ݵ�

//vs2019����������д��룺
//ctrl + f5 
//fn + ctrl + f5
//std - ��׼
//i - input
//o - output
#include <stdio.h>
//��׼��������д��
//c���Թ涨
//main�����ǳ�������
//main�������ҽ���һ��
//int main()
//{
//	printf("hehe\n");
//	printf("hello\n");
//	printf("hehe\n");
//	printf("hello\n"); 
//	printf("hehe\n");
//	printf("hello\n"); 
//	printf("hehe\n");
//	printf("hello\n");
//	return 0;
//}
//����д��-���Ƽ�
//void main()
//{
//
//}
//ע��ѡ����Ctrl+k+c
//ȡ��ע��ctrl+k+u


//int main()
//{
//	printf("%d\n", 100);//%d�Ƕ�Ӧ�Ĵ�ӡ��ʽ����������ʽ���д�ӡ��\n�ǻ��з�
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short)); //sizeof()���ǻ�ȡ�����ڲ����ڴ��С
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	double price = 66.6;
//	return 0;
//}
//�����ͳ����ĸ���
//������Ϊ��
//�ֲ�����-{}�ڲ�����ı���
//ȫ�ֱ���-{}�ⲿ����ı���


//int b = 20;//ȫ�ֱ���
//
//int main()
//{
//	short age = 20;//����
//	int high = 180;//���
//	float weight = 88.5;//����
//	int a = 10;//�ֲ�����
//
//	return 0;
//}
//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);//��ȫ�ֱ����;ֲ�����������ͬ������£��ֲ�����
//	return 0;
//
//}

//���ǽ��鲻Ҫ��ȫ�ֱ����;ֲ�����������дһ����

//д�������룬����2�������ĺ�
//scanf��һ�����뺯��
//printf��һ���������
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//��ʼ��
//
//	//����2������
//	scanf("%d %d", &num1, &num2);
//	//���
//	int sum =num1 + num2;
//	//���
//	printf("%d\n", sum);
//	return 0;
//}

//������������
//1.�ֲ�����
// �ֲ��������������Ǳ������ڵľֲ���Χ��
//2.ȫ�ֱ���
//ȫ�ֱ��������������������̡�

//������������
// �ֲ�����
// �ֲ����������������ǣ������������������ڿ�ʼ�����������������ڽ�����
// ȫ�ֱ���
// ȫ�ֱ��������������ǣ�����������������ڡ�

//int main()
//{
//	{
//	     int a = 100;
//	     printf("%d\n", a);
//	}
//	printf("%d\n", a);
//	return 0;
//}
//���������ⲿ�ķ���
//extern int a;
//void test()
//{
//	printf("test-->%d\n", a);
//}
//int main()
//{
//	test();
//	{
//		
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//
//	return 0;
//}


//1.���泣��
//2.const���εĳ�����
//3.define����ı�ʶ������
//4.ö�ٳ���
//int main()
//{
//	//30;
//	//3.14;
//	//'w';//�ַ�
//	//"adc";
//	//const int a = 10;//��C�����У�const���ε�a���������Ǳ��������ǲ���ֱ���޸ģ��г��������ԡ�
//	//a = 20;
//	//printf("%d\n", a);//20
//
//	const int n = 10;//��ʹ�����const,nʵ���ϻ��Ǳ��������Խг�����
//	int arr[10] = { 0 };//arr[]�����飬[]���ǳ���
//
//
//
//	return 0;
//}
//#define MAX 100
//#define STR "asfdf"//define����ı�־��������һ����������Ҳ�������ַ���
//int main()
//{
//	//printf("%d\n", MAX);
//	//int a = MAX;
//	//printf("%d\n", a);
//	//printf("%s\n", STR);
//	//MAX =200��//err
//	return 0;
//}

//ö�ٳ���
//enum Color
//{
//	//ö�ٳ���
//	RED,
//	GREEN,
//	BLUE
//};
//
////�Ա�
//enum Sex
//{
//	//ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//��ԭɫ
//	//Red Green Blue
//	int num = 10;
//	enum Color c = RED;
//	//RED = 10;//err
//	//MALE = 20;//err
//
//
//	return 0;
//}