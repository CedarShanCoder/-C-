#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ѭ�����

//while

//int  main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//
//}

//��ӡ1-10����

//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		a++;
//		if (a == 5)
//			//break;
//			/*�ܽ᣺
//			break��whileѭ���е����ã�
//			��ʵ��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ����
//			���ԣ�while�е�break������������ֹѭ���ġ�*/
//			continue;
//	        /*�ܽ�:
//		    continue��whileѭ���е����þ��ǣ�
//			continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�
//			����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������жϡ�*/
//		printf("%d ", a);
//		
//	}
//
//	return 0;
//
//}

//����1
//int main()
//{
//    //EOF;//end of file���ļ�������־��ֵΪ-1��getchar����EOFʱ������Ϊ-1��������������int������char
//    //int ch = getchar();//getchar�ǻ�ȡ�ַ���ASCIIֵ��ֵ��ch
//    //printf("%c\n", ch);//���ַ�����ʽ��ӡch
//    //putchar(ch);//putchar�����chֵ
//
//    //int ch = 0;
//    //while ((ch = getchar()) != EOF)//ch������EOF�����ch��getchar�Ǵӻ�������ȡ�ģ����Ե�������a�س�ʱ����ʵ��a\n,��ӡʱ�ȴ�ӡa�ٴ�ӡ\n�Ż���ֻ���
//    //    putchar(ch);
//    //return 0;//�ó����������������EOF����ctrl+z�س�
//
//    //�ٸ�����
//    //����������һ���ַ���
//    char password[20] = { 0 };
//    printf("����������:>");
//    scanf("%s", password);//����������123456\n����scanfֻ�������뻺������123456����ʣ��\n�ͻᱻgetchar����
//                          //����������123456 789456\n����getchar�Ͳ������ˣ�����getcar�������ޣ�ֻ�ܶ�ȡ�ո�
//                          //�������Ӽ���getchar����̫�鷳�ˣ���˽���������£�
//    //getchar();//��ȡ��\n
//
//    int ch = 0;
//    while ((ch = getchar()) != '\n')//
//        while ((ch = getchar()) != '\n')//getchar�����뻺������ȡֵʱ��ѭ����ȡ������\n��ֹ
//    {
//        ;
//    }
//    printf("��ȷ������(Y/N):>");
//    int ret = getchar();
//    if ('Y' == ret)
//    {
//        printf("Yes\n");
//    }
//    else
//    {
//        printf("No\n");
//
//    }
//    return 0;
//}
//����Ĵ����ʵ����޸��ǿ�����������������.


//����2
//int main()
//{
//    char ch = '\0';//���ǳ�ʼ����\0��ASCIIֵΪ0
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch > '9')//�����ֵ�������Χ��Ϊ�棬������Ϊ�٣������ӡ
//            //0 - 48  9 - 57
//            continue;
//        putchar(ch);
//    }
//    return 0;
//}
//�������������ǣ�ֻ��ӡ�����ַ������������ַ��ġ�