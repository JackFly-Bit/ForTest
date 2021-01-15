#include <stdio.h>
#include <windows.h>

#define do_forever for(;;)
#define M 1000;
#define ADD(x) x+M
#define SQ(x) x*x

#define M N
#define N M//宏不能出现递归替换

#define MAX 1000

#define PRINT(FORMAT,VALUE)\
	printf("the value of "#VALUE" is "FORMAT"\n",VALUE);

int main()
{
	int a = 10;
	int b = 20;
	PRINT("%d", a + b);

	//char* str = "hello""world";
	//printf("%s\n", str);
	//printf("hello""world""\n");//临近字符串自动连接特性！

	//char* str = "MAX";//原生字符串不会被替换

	//printf("%d\n", ADD(10));
	//printf("%d\n", SQ(11));

	//int i = 1;
	//if (i == 1)
	//	int c = M;
	//else
	//	int d = M + 100;

	//int a = M;
	//printf("%d\n", a);//不报错

//	do_forever{
//	printf("hello world!\n");
//}

//	register int a = 0;
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
	//printf("%d\n", __STDC__);
	system("pause");
	return 0;
}