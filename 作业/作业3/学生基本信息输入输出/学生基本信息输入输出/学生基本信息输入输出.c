#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//精度不高的用float，精度高的用double
	int id = 0;
	float c = 0.0f;//不加f，他会认为是double类型，加f，他会认为是float类型
	float math = 0.0f;
	float eng = 0.0f;

	//输入
	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
	//输出
	printf("The each subject score of No. %d is %.2f,%.2f,%.2f.\n", id, c, math, eng);
	//.2是保留小数点后两位
	return 0;
}