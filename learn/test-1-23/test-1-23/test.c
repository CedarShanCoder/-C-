#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��֧����

// if���

//int main()
//{
//	/*int a = 10;
//	if (a == 10)
//		printf("hehe\n");*/
//
//	/*int age = 20;
//	if (age > 18)
//		printf("����\n");*/
//
//	//int age = 17;
//	//if (age < 18)      //if else�����ƶ������ʱҪ������
//	//{
//	//	printf("δ����\n");
//	//	printf("��������\n");
//	//}
//	//	
//	//else
//	//{
//	//	printf("����\n");
//	//}
//
//	/*int age = 50;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("�����\n");
//	else if (age >= 18 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age < 100)
//		printf("����\n");
//	else
//		printf("������\n");*/
//
//	int age = 17;
//	if (age > 18)      
//		printf("����\n");
//	else
//	{
//		printf("δ����\n");
//		printf("��������\n");
//	}
//
//
//
//	return 0;
//}

//����else
//else��ƥ�䣺else�Ǻ�����������ifƥ��ġ�

//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("hehe\n");
//    }
//    else
//            printf("haha\n");
//    return 0;
//}
//1.�����������������壬�淶��
//2.�ո񣬿��У�����

//int main()
//{
//	/*char firstname[20] = { 0 };
//	char first_name[20] = { 0 };
//	char FirstName[20] = { 0 };*/
//
//	int a = 10;
//	int a=10;//���淶
//
//	return 0;
//}

//int test()
//{
//	int a = 4;
//	if (a == 3)
//		return 1;
//	else
//	    return 0;
//}
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//
//	return 0;
//
//}

//int main()
//{
//	int num = 3;
//	if (5 == num)//(num == 5)
//		printf("hehe\n");
//	return 0;
//
//}

//��ϰ
//1. �ж�һ�����Ƿ�Ϊ����

//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("No\n");
//
//	return 0;
//
//}

//2. ���1-100֮�������

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	   
//	return 0;
//
//}

//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d ", a);
//		a += 2;
//	}
//
//
//	return 0;
//}

//switch���
//switch���Ҳ��һ�ַ�֧��䡣
//�������ڶ��֧�������

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	/*if (1 == day)
//		printf("����һ\n");
//	else if (2 == day)
//		printf("���ڶ�\n");
//	else if (3 == day)
//		printf("������\n");
//	else....*/
//	//��switch����е� break
//		//��switch����У�����û�취ֱ��ʵ�ַ�֧������breakʹ�ò���ʵ�������ķ�֧��
//	/*switch(���ͱ��ʽ)
//	{
//		����
//	}
//	��һЩcase��䣺
//    ���£�
//    case ���γ������ʽ:
//	���;*///
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//
//
//	return 0;
//
//}

//��ʱ�����ǵ�������ˣ�
//1. ����1 - 5��������ǡ�weekday��;
//2. ����6 - 7�������weekend��
//�������ǵĴ����Ӧ������ʵ���ˣ�

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("weekday\n");
//			break;
//		case 6:
//		case 7:
//			printf("weekend\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
    int n = 1;
    int m = 2;
    switch (n)
    {
    case 1:
        m++;
    case 2:
        n++;
    case 3:
        switch (n)
        {//switch����Ƕ��ʹ��
        case 1:
            n++;
        case 2:
            m++;
            n++;
            break;//һ��breakֻ�����������ڵ�switch���
        }
    case 4:
        m++;
        break;
    default:
        break;
    }
    printf("m = %d, n = %d\n", m, n);
    return 0;
}
