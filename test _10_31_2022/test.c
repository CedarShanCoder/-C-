#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//
////�ַ�������һ���ַ� - ������˫������������һ���ַ�
//
////int main()
////{
////	"asdfg";
////	"hello bit";
////	return 0;
////}
////#include <string.h>
////int main()
////{
////	//�ַ����� - ������һ����ͬ���͵�Ԫ��
////	//�ַ����ڽ�β��λ��������һ��\0���ַ�
////	//\0���ַ����Ľ�����־***�������ַ�������ʱ��\0�����ַ�������
////
////	//char arr[] = "hello";
////
////	char arr1[] = "abc";
////	char arr2[] = { 'a','b','c'};
////	//����ʱarr1,arr2��4,3
////    //��ӡʱarr1 - abc\0   arr2 - abc����
////	//����arr2�������'\0',���ӡ����abc
////
////	//���ַ����ĳ���
////	printf("%d\n", strlen(arr1));//3
////	printf("%d\0", strlen(arr2));//15���ֵ  ��������ֹ��\0����3
////	//int len = strlen("abc");//string length
////	//printf("%d\n", len);//������3��'\0'����������
////
////	//��ӡ�ַ���
////	/*printf("%s\n", arr1);
////	printf("%s\n", arr2);*/
////
////
////	return 0;
////}
//
////ת���ַ� - ת����ԭ������˼!
////int main()
////{
////	/*printf("c:\\test\\test.c");*/   \tˮƽ�Ʊ�� �൱��tab���������ϣ����ת����ǰ���\
////	printf("ab\ncd");
////	return 0;
////}
//
////int main()
////{
////	//printf("(are you ok\?\?)");//??) - ]  ����ĸ��
////	//(are you ok]
////	//printf("%c\n", '\'');
////	//printf("%s\n", "abc");
////	//printf("%s\n", "a");
////	//printf("%s\n", "\"");
////	////printf�ڴ�ӡ���ݵ�ʱ�򣬿���ָ����ӡ�ĸ�ʽ
////	//printf("%d", 100);
////	//printf("%c", 'a');
////	//printf("%s", "abc");
////	//printf("c:\\test\\test.c");//\\��ֹת���ַ�
////	//printf("\a\a\a");//�����ַ�
////	//printf("%c\n", '\130');//8���Ƶ�130��ʮ���Ƶ�88��X����Ӧ��ASCII��ֵ��88
////	//printf("%c\n", '\101');//A - 65 - 8�����ǣ�101
////	//printf("%c\n", '\x30');//16���Ƶ�30 - ʮ���Ƶ�48 - ASCII��0
////	printf("%d\n", strlen("abc"));//3	
////	printf("%d\n", strlen("c:\test\328\test.c"));//14     c : \t e s t \32 8 \t e s t . c
////
////	return 0;
////}
//
////ע�����������͸��Ӵ����
//
/////*
////int main()
////{
////	//int a = 10;//C++ע�ͷ��
////	/*
////	int b = 10;//C���Ե�ע�ͷ��  ��֧��Ƕ��ע��
////	*/
////	return 0;
////}
////*/
//
////ѡ�����
//
//
int mian()
{
	int input = 0;//�����ֵ
	printf("�������:>");
	printf("��Ҫ�ú�ѧϰ��(1/0)?>:");
	scanf("%d", &input);

	if (input == 1)
		printf("��offer\n");
	else
		printf("������\n");

	return 0;
 }