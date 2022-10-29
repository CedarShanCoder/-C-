#define _CRT_SECURE_NO_WARNINGS 1 
   
//写代码
//1. 写出主函数（main函数）
//100-500 代码
//如何执行呢？  C语言是从主函数的第一行开始执行的
//所以C语言代码中得有main函数-入口     重点：一个工程中有且仅有一个main函数，可以有多个.c文件，但多个.c文件只能有一个main函数

#include <stdio.h>
int main()                                                     //int是整形  main是函数名
{
	printf("比特\n");                                           //printf 库函数 在屏幕上打印信息的 使用时得引用头文件 stdio.h 
 
	return 0;
}

//编译+链接+运行代码
//快捷键：ctrl+f5
//        ctrl+fn+f5
//        菜单栏：调试  开始执行不调试
//程序执行太快，可以修改text项目属性中系统的子系统的控制台（针对VC2013）