#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���������������
//�ֲ������������򣺾��Ǳ������ڵľֲ���Χ
//ȫ�ֱ�������������������

//int g_val = 2021;//ȫ�ֱ���
//
//int main()
//{
//	printf("hehe\n");
//	//int a = 10;
//	printf("1:%d\n", g_val);
//	//printf("a = %d\n", a);    //�������a��������
//	{
//		//int a = 10;           //�����������a��������
//		printf("2:%d\n", g_val);
//	}
//	printf("3:%d\n", g_val);
//
//
//
//return 0;
//}


//����һ������
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//��������
//�������������ڣ������Ĵ���������֮���ʱ���
//
//�ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ��������
//ȫ�ֱ������������ڣ��������������

//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//
//	}
//	//printf("%d\n", a);   //��������
//	return 0;
//}
//#define MAX 10000
//int main()
//{
//	1.���泣��
//	3.14;
//	10;
//	'a';
//	'asdf';
//
//	//2.const���εĳ�����
//	//const int num = 10;//num����һ�������� - ���г����ԣ����ܱ��ı�����ԣ�
//	//num = 20;
//	//printf("num = %d\n", num);  //20
//    //֤����������Ȼ�Ǳ���
//	int arr[10] = { 0 };//10��Ԫ��
//
//	cost int n = 10;
//	int arr2[n] = { 0 };//n�Ǳ����ģ������ǲ��е�
//
//    3.#define����ı�ʶ������
//	MAX = 20000;//err
//	/*int n = MAX;
//	printf("n = %d\n", n);*/
//
//	
//	return 0;
//}

//�Ա�
enum Sex
{
    //����ö�ٳ����ı�����δ������ȡֵ
    //ö�ٳ���
    MALE  = 3,//����ֵ
    FEMALE,
    SECRET
};
int main()
{
    //4.ö�ٳ���
    //����һһ�оٵĳ���

    enum Sex s = MALE;
    printf("%d\n", MALE);//0
    printf("%d\n", FEMALE);//1
    printf("%d\n", SECRET);//2
    return 0;
}
    