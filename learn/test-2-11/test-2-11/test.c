#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


//��������Ϸʵ��
//���Բ���һ�������0-100
//������
//�´���
//��С��
//ֱ���¶��ˣ�����

//void menu()
//{
//	printf("**********************************\n");
//	printf("***********  1.play     **********\n");
//	printf("***********  0.exit     **********\n");
//	printf("**********************************\n");
//}
//
////0-RAND_MAX(32767)
////RAND_MAX--rand�����ܷ�������������ֵ��
//void game()
//{
//	int guess = 0;
//	//1.�����������
//	//0-99 --> 1-100
//	int ret = rand()%100+1;//�����������
//	//printf("%d\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//�����ֵ������߼�
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	
//	return 0;
//
//}


//goto���
//C�������ṩ�˿����������õ� goto���ͱ����ת�ı�š�
//�������� goto�����û�б�Ҫ�ģ�ʵ����û��goto���Ҳ���Ժ����׵�д�����롣
//����ĳЩ������goto��仹���õ��ŵģ�������÷�������ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ�����̡�
//���磺һ�������������ѭ����
//���ѭ���������ʹ��break�Ǵﲻ��Ŀ�ĵġ���ֻ�ܴ����ڲ�ѭ���˳�����һ���ѭ����

//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;  //���ܿ纯����ת
//	return 0;
//}

//goto���������ʺϵĳ������£�
//for (...)
//for (...)
//{
//    for (...)
//    {
//        if (disaster)
//            goto error;
//    }
//}
//��
//error :
//if (disaster)
// ����������

//������ʹ��goto����һ�����ӣ�Ȼ��ʹ��ѭ����ʵ�ַ�ʽ�滻goto��䣺
//һ���ػ�����
 

//�ػ�����
//1.��������������1�����ڹػ�
//2.������룺��������ȡ���ػ�

//int main()
//{
//    char input[10] = { 0 };
//    system("shutdown -s -t 60");
//again:
//    printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
//    scanf("%s", input);
//    if (0 == strcmp(input, "������"))
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//}

//int main()
//{
//    char input[10] = { 0 };
//    system("shutdown -s -t 60");
//    while (1)
//    {
//        printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
//        scanf("%s", input);
//        if (0 == strcmp(input, "������"))
//        {
//            system("shutdown -a");
//            break;
//        }
//    }
//    return 0;
//}


//strcpy��C�����е�һ���ַ����������������ڽ�һ���ַ������Ƶ���һ���ַ����С�
//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1,arr2);
//	printf("%s\n", arr1); //hello bit
//
//	return 0;
//
//}

//memset��C�����е�һ���ڴ�������������ڽ�ָ�����ڴ������Ϊ�ض���ֵ��
//memset��������������ptr��value��num���ֱ��ʾҪ���õ��ڴ�����ʼ��ַ��Ҫ���õ�ֵ�Լ�Ҫ���õ��ֽ�����
//int main()
//{
//	char arr[20] = "hello bit";
//	memset(arr,'x',5);
//	printf("%s\n", arr);//xxxxx bit
//	return 0;
//
//}

//int main()
//{
//	char arr[20] = "hello bit";
//	memset(arr+6, 'x', 3);
//	printf("%s\n", arr);//hello xxx
//	return 0;
//
//}


//��ϴ�ֵ
//int get_max(int x, int y)
//{
//	/*if (x < y)
//	{
//		return y;
//	}*/
//
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������������ֵ:\n");
//	scanf("%d %d", &a, &b);
//	//��ϴ�ֵ
//	//�����ĵ���
//	int m=get_max(a, b);
//	printf("%d\n", m);
//
//
//	return 0;
//
//}

//дһ���������Խ����������ͱ���������
//��ʽ����
//void Swap(int x,int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//	
//}

//void Swap(int* px, int* py)
//{
//	int z = *px;//a
//	*px = *py;//a=b
//	*py = z;//b=a
//}
//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ���������βε��޸Ĳ�������ʵ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d%d", &a, &b);
//	//����
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	//a��b��ʵ��
//	//Swap(a, b);
//	Swap(&a, &b);
//	printf("������:a=%d b=%d\n", a, b);
//
//	return 0;
//
//}

void menu()
{
	printf("*********** ������С��Ϸ **********\n");
	printf("***********************************\n");
	printf("***********   1.play     **********\n");
	printf("***********   0.exit     **********\n");
	printf("**********************************\n");
}
void game()
{
	int guess = 0;
	int ret = rand()%100+1;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
    char arr[10] = { 0 };
    system("shutdown -s -t 60");
again:
    printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
    scanf("%s", arr);
    if (0 == strcmp(arr, "������"))
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}