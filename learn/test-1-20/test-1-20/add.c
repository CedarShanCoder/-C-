#define _CRT_SECURE_NO_WARNINGS


//全局变量
//int g_val = 2022;
//全局变量是具有外部链接属性的

//static int g_val = 2022;
//static修饰全局变量时，这个全局变量的外部链接属性就变成了内部链接属性。
//其他源文件.c就不能再使用这个全局变量了。
//我们在使用时，感觉作用域变小了

//static int Add(int x, int y)
//{
//    return x + y;
//
//}
//函数具有外部链接属性,但是被static修饰时候，外部链接属性就变成了内部链接属性。
//其他源文件.c就不能再使用这个全局变量了。
