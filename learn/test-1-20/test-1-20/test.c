#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �ؼ��� typedef  ����������

//typedef unsigned int uint;

//int main()
//{
//	unsigned int num = 0;
//	uint num1 = 1;
//
//	return 0;
//}

//�ؼ���static
//��C�����У�
//static���������α����ͺ�����
//1. ���ξֲ����� - ��Ϊ��̬�ֲ�����
//2. ����ȫ�ֱ��� - ��Ϊ��̬ȫ�ֱ���
//3. ���κ��� - ��Ϊ��̬����


//void test()          //void��������
//{
//	int a = 1;         //��ֵa=1
//	a++;               //a=a+1; ���ﲻ��int b = a++;��ʹ�ú�Ӽ�
//	printf("%d ", a);  
//}                    //a����������ͻ�����
                       //���ԣ���i<10ʱ��ÿ�ε���testʱ��a���ḳֵΪ1�����ÿ�δ�ӡ��������2
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();//����test����
//        i++;
//	}
//	return 0;
//
//}

//void test()
//{
//	//���ξֲ�����
//	static int a = 1;  //static���ξֲ�����ʱ���ֲ��������������򲻻�����
//	                   //�����ϣ�static���ξֲ�����ʱ���ı��˱����Ĵ洢λ��
//	                   //Ӱ���˱������������ڣ��������ڱ䳤���ͳ������������һ����
//	a++;               
//	printf("%d ", a);
//}                      
					   //���ԣ���i<10ʱ�����ε���test��a��ֵΪ1������a++,aΪ2��
                       //��a��û�б����٣���ջ���ľֲ�������Ϊ��̬���ľ�̬����
                       //��ˣ�a��ֵ���������������ٴε���test��aΪ֮ǰ����������a��
                       //ʹ����һ�ε�a,���static int a = 1; ���ٲ���ִ��
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();//����test����
//		i++;
//	}
//	return 0;
//
//}

//���ξֲ�����
//extern�����ⲿ����

//extern int g_val;
//
//int main()
//{
//    printf("%d\n", g_val);
//    return 0;
//
//}

//���κ���

//extern int Add(intx, inty);
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int z = Add(a, b);
//    printf("%d\n", z);
//
//    return 0;
//
//}

//register - �Ĵ���
//�����ϵĴ洢�豸������Щ��    ��������
//�Ĵ�����������CPU�ϣ�         �ռ�С����۸ߣ������ٶȿ�
//                           |
//���ٻ��棨cache��          |
//                           |
//�ڴ�                       |
//                           |
//Ӳ��                       |    �ռ����۵ͣ������ٶ���


//int main()
//{
//    //�Ĵ�������
//    register int num = 3;//���飺3����ڼĴ�����
//
//    return 0;
//}

//#define �����־������

#define NUM 100

//int main()
//{
//    printf("%d\n", NUM);
//    int n = NUM;
//    printf("%d\n", n);
//    int arr[NUM] = { 0 };
//
//
//    return 0;
//
//}

//#define �����
//�����в�����

#define ADD(x,y) ((x)+(y))  //ADD�Ǻ���  x,y�Ǻ�Ĳ�����������������  ((x)+(y))�Ǻ���

//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int z = ADD(a, b);
//    printf("%d\n", z);
//    return 0;
//
//}

//13. ָ��
//13.1 �ڴ�

//int main()
//{
//    int a = 10;//���ڴ�����4���ֽڣ��洢10
//    //&a;//ȡ��ַ������
//    //printf("%p\n", &a);//%p���Ե�ַ�ĸ�ʽ��ӡ����  010FFB40
//    int* p = &a;
//    //p����ָ����� *˵����ָ�����  int˵��pָ�������int���͵�
//    //�ڴ浥Ԫ����� -> ��ַ -> ��ַҲ����Ϊָ��
//    //���ָ�루��ַ���ı�������ָ�������
//    *p = 20;//�����ò���������˼��ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ��Ķ���
//    printf("%d\n", a);
//
//
//
//
//
//    /*char ch = 'w';
//    char* pc = &ch;*/
//
//    return 0;
//}

//13.2 ָ������Ĵ�С

//int main()
//{
//    //int* p;
//   // char* p2;
//    //������ʲô���͵�ָ�룬�����ڴ���ָ�����
//    //ָ�������������ŵ�ַ��
//    //ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�
//    //32λ�����ϵĵ�ַ��32bitλ - 4byte������ָ������Ĵ�С��4���ֽ�
//    //64λ�����ϵĵ�ַ��64bitλ - 8byte������ָ������Ĵ�С��8���ֽ�
//    printf("%zu\n", sizeof(char*));
//    printf("%zu\n", sizeof(short*));
//    printf("%zu\n", sizeof(int*));
//    printf("%zu\n", sizeof(float*));
//    printf("%zu\n", sizeof(double*));
//
//
//    return 0;
//}

//14. �ṹ��  �ǰ�һЩ��һ���������һ�������


//ѧ��
struct Stu
{
    //��Ա
    char name[20];
    int age;
    char sex[10];
    char tele[12];

};

void print(struct Stu* ps)
{
    printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
    //->
    //�ṹ��ָ�����->��Ա��
    printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
}
int main()
{
    struct Stu s = { "zhangsan",20,"nan","11223344556" };

    //�ṹ�����.��Ա��
    printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
    print(&s);

    return 0;

}