#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//4. �ַ���+ת���ַ�+ע��
//int main()
//{
//	//#$%%ffsty
//	//char �ַ�����
//	//'a'�ַ�����
//	//char ch = 'w';
//	//�ַ���     ������˫���ţ�Double Quote����������һ���ַ���Ϊ�ַ�������ֵ��String Literal�������߼���ַ�����
//	//C��������û���ַ��������أ�  --û��
//	/*"asddff"*/
//	char arr1[] = "asdfgh";//\0   ��7��
//	//�ַ����Ľ�����־��һ�� \0 ��ת���ַ����ڼ����ַ������ȵ�ʱ�� \0 �ǽ�����־���������ַ������ݡ�
//	char arr2[] = { 'a','s','d','f','g','h','\0'};//��6��
//
//	int len = strlen(arr1);//���ַ������ȵ�һ��������string length
//	printf("%d\n", len);
//
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//
//	return 0;
//}

//ת���ַ�
// ����ĸ��
//??) --> ]
//??( --> [

//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%s - ��ӡ�ַ���
//%f - ��ӡfloat���͵�����
//%lf - ��ӡdouble���͵�����
//%zu - ��ӡsizeof�ķ���ֵ
//
//int main()
//{
//	//printf("asdfghn");
//	//printf("asdfgh\n");//\n�ǻ��з�
//	//printf("asd\0fghn");//\0���ַ�������־
//	//printf("%s\n", "(are you ok??)");
//	//(are you ok]//���ڵ�������ٳ�����������������֣�������\?
//	//printf("%c\n", 'w');
//	//printf("%c\n", '\'');//\'�Ǿ͵�����ӡ������
//	//printf("asdfgh\n");
//	//printf("a");
//	//printf("\"");//\"�Ǿ͵�����ӡ˫����
//	//printf("%s\n", "asdfgh");
//	//printf("asd\\0fgh");//\\0������\0����˼
//	//printf("c:\\test\\test.c");//\t��ˮƽ�Ʊ�������ǳ��ֿո�
//	//printf("\a");//\a�Ǿ����ַ�������
//	//printf("%c\n",'\130');//X    \ddd   ddd��ʾ1~3���˽��Ƶ����֡� �磺 \130  ���˽�����130ת����ʮ���������ٶ�ӦASCII��ķ���
//	//printf("%c\n", '\x63');//C   \xdd   dd��ʾ2��ʮ���������֡� �磺 \x63     ��ʮ��������63ת����ʮ���������ٶ�ӦASCII��ķ���
//
//
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("asd fg"));//6  �ո�Ҳ��һ���ַ�
//	printf("%d\n", strlen("c:\test\628\test.c"));//14  \t��һ���ַ�����ȻЧ����ˮƽ�Ʊ������4���ո�
//	//\62��һ���ַ�  
//	return 0;
//}

//ѡ�����
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ��(1/0)?");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//	return 0;
//
//}

//ѭ��ѡ�����
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while(line<2000)
//	{
//		printf("д���룺%d\n", line);
//		line++;
//	}
//	if(line >= 2000)
//	{
//		printf("��offer\n");
//	}
//	else 
//	{
//		printf("��������\n");
//	}
//	return 0;
//
//}
//����
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//int Add(int x, int y)    //��һ����С������Ƕ���add���൱�ڷ�װ���Ѻ�����װ�ú��Ժ�����ֱ�ӵ�ȡ
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������:>");
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);            //add�ȶ�����
//	printf("sum = %d\n", sum);
//	return 0;
//}

//����
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//�±�0-9
	/*printf("%d", arr[7]);*/
	int i = 0;
	while(i < 10)
	{
		printf("%d", arr[i]);
		i = i + 1;
	}
	return 0;

}