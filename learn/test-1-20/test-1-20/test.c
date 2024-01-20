#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 关键字 typedef  类型重命名

//typedef unsigned int uint;

//int main()
//{
//	unsigned int num = 0;
//	uint num1 = 1;
//
//	return 0;
//}

//关键字static
//在C语言中：
//static是用来修饰变量和函数的
//1. 修饰局部变量 - 称为静态局部变量
//2. 修饰全局变量 - 称为静态全局变量
//3. 修饰函数 - 称为静态函数


//void test()          //void返回类型
//{
//	int a = 1;         //赋值a=1
//	a++;               //a=a+1; 这里不是int b = a++;先使用后加加
//	printf("%d ", a);  
//}                    //a出了作用域就会销毁
                       //所以，当i<10时，每次调用test时，a都会赋值为1，因此每次打印出来都是2
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();//调用test函数
//        i++;
//	}
//	return 0;
//
//}

//void test()
//{
//	//修饰局部变量
//	static int a = 1;  //static修饰局部变量时，局部变量出了作用域不会销毁
//	                   //本质上，static修饰局部变量时，改变了变量的存储位置
//	                   //影响了变量的生命周期，生命周期变长，和程序的生命周期一样。
//	a++;               
//	printf("%d ", a);
//}                      
					   //所以，当i<10时，初次调用test，a赋值为1，运行a++,a为2，
                       //但a并没有被销毁，由栈区的局部变量变为静态区的静态变量
                       //因此，a的值被保留了下来，再次调用test，a为之前保留下来的a，
                       //使用上一次的a,因此static int a = 1; 不再参与执行
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();//调用test函数
//		i++;
//	}
//	return 0;
//
//}

//修饰局部变量
//extern声明外部符号

//extern int g_val;
//
//int main()
//{
//    printf("%d\n", g_val);
//    return 0;
//
//}

//修饰函数

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

//register - 寄存器
//电脑上的存储设备都有哪些？    从下往上
//寄存器（集成在CPU上）         空间小，造价高，访问速度快
//                           |
//高速缓存（cache）          |
//                           |
//内存                       |
//                           |
//硬件                       |    空间大，造价低，访问速度慢


//int main()
//{
//    //寄存器变量
//    register int num = 3;//建议：3存放在寄存器中
//
//    return 0;
//}

//#define 定义标志符常量

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

//#define 定义宏
//宏是有参数的

#define ADD(x,y) ((x)+(y))  //ADD是宏名  x,y是宏的参数，参数是无类型  ((x)+(y))是宏体

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

//13. 指针
//13.1 内存

//int main()
//{
//    int a = 10;//向内存申请4个字节，存储10
//    //&a;//取地址操作符
//    //printf("%p\n", &a);//%p是以地址的格式打印数据  010FFB40
//    int* p = &a;
//    //p就是指针变量 *说明是指针变量  int说明p指向对象是int类型的
//    //内存单元，编号 -> 地址 -> 地址也被称为指针
//    //存放指针（地址）的变量就是指针变量。
//    *p = 20;//解引用操作符，意思是通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象
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

//13.2 指针变量的大小

//int main()
//{
//    //int* p;
//   // char* p2;
//    //不管是什么类型的指针，都是在创建指针变量
//    //指针变量是用来存放地址的
//    //指针变量的大小取决于一个地址存放的时候需要多大空间
//    //32位机器上的地址：32bit位 - 4byte，所以指针变量的大小是4个字节
//    //64位机器上的地址：64bit位 - 8byte，所以指针变量的大小是8个字节
//    printf("%zu\n", sizeof(char*));
//    printf("%zu\n", sizeof(short*));
//    printf("%zu\n", sizeof(int*));
//    printf("%zu\n", sizeof(float*));
//    printf("%zu\n", sizeof(double*));
//
//
//    return 0;
//}

//14. 结构体  是把一些单一类型组合在一起的做法


//学生
struct Stu
{
    //成员
    char name[20];
    int age;
    char sex[10];
    char tele[12];

};

void print(struct Stu* ps)
{
    printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
    //->
    //结构体指针变量->成员名
    printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
}
int main()
{
    struct Stu s = { "zhangsan",20,"nan","11223344556" };

    //结构体对象.成员名
    printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
    print(&s);

    return 0;

}