#include <stdio.h>
#include <windows.h>

//全局变量
//int global = 100;
//double weight = 160.5;

//void fun()
//{
//	printf("%f\n", weight);
//	//printf("%f\n", high);
//}

#pragma warning (disable:4996)

//#define AGE 120//宏，见名知意，提升代码的可维护性（为什么要有宏）

//enum color{
//	YELLOW,
//	BLACK,
//	RED,
//	BLUE,
//};
int main()
{
	//C是没有字符串类型的，所以需要借助char*,或者char[],来进行
	//字符串的使用！
	char *str = "abc";
	char str1[] = "xyz";

	printf("%s\n",str);
	printf("%s\n", str1);

	//3;
	//'x';
	//char c = 'xy';
	//"xyz";
	//"x";

	//const int x = 100;//初始化
	//x = 200;//赋值
	//enum color c = YELLOW;

	//int x = AGE;
	//int x1 = AGE;
	//int x2 = AGE;
	//int x3 = AGE;
	//int x4 = AGE;
	//int x5 = AGE;
	//int x6 = AGE;

	//int x = 0;
	//int y = 0;
	//printf("请输入对应的数据：>");
	//scanf("%d %d",&x,&y);
	//int z = x + y;
	//printf("result:%d\n",z);

	//int x = 200;
	////int global = 300;
	//printf("%d,%d\n",x,global);

	//局部变量
	//double high = 190.8;
	//printf("%f\n",weight);
	//printf("%f\n", high);
	//fun();

	//int high = 190;
	//float money = 1.8f;
	//char phone[12] = "12345678901";

	//int a = 10;

	//double m1 = 10.5;
	//double m2  = 1.5;

	//printf("%f\n", m1 + m2);

	//double pi = 3.14;
	//double r = 2;
	//printf("面积:%f\n",pi*r*r);

	//char c = 'A';
	//for (; c <= 'Z'; c++){
	//	printf("%c ",c);
	//}
	//printf("\n");

	//printf("char:%d\n", sizeof(char));//1
	//printf("short:%d\n",sizeof(short));//2
	//printf("int:%d\n",sizeof(int));//4
	//printf("long:%d\n",sizeof(long));//4
	//printf("llong:%d\n",sizeof(long long));//8
	//printf("float:%d\n",sizeof(float));//4
	//printf("double:%d\n",sizeof(double));//8
	//printf("long double:%d\n", sizeof(double));//8

	//printf("hello world！\n");
	system("pause");
	return 0;
}