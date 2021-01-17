//#include <stdio.h>会把头文件中的相关内容直接插入到我们的源代码中，替换掉#include
#include <stdio.h>
#include <windows.h>

#define ADD(num, value) x##num += value

#define MAX(x, y) (x) > (y) ? (x) : (y)//带副作用宏参

//void fun()
//{
//	printf("%d\n", M);
//#define M 100
//	printf("%d\n", M);
//}

//#define M 10

//#define DEBUG

//#define DEBUG 0

#define DEBUG0 0
#define DEBUG1 1

//linux 工具:gedit 类似于notepad++
//vim自动安装配置地址：https://github.com/askunix/VimForCpp
//命令行键入"curl -sLf https://gitee.com/HGtz2222/VimForCpp/raw/master/install.sh -o ./install.sh && bash ./install.sh"回车，输入密码，ok(注意不要使用root)
//安装gcc:"sudo yum -y install gcc-c++"(注意要在联网情况下)
//ping 百度看是否联网，(ctrl+c结束回显）
#define INT_P char*
typedef int* int_p;

int main()
{
	INT_P a, b;//char *aa,*bb;
	int_p e, f;
	printf("%d, %d\n", sizeof(a), sizeof(b));
	printf("%d, %d\n", sizeof(e), sizeof(f));

//#if defined()判定宏是否被定义
//宏是否为真VS宏是否被定义
//#if defined(DEBUG0)
//#ifdef DEBUG0
#ifndef DEBUG0
	printf("debug0\n");
#endif

//	//#if 判定的是表达式结果是否为真
//#if DEBUG0
//	printf("DEBUG0\n");
//#elif DEBUG1
//	printf("DEBUG1\n");
//#else
//	printf("unknow\n");
//#endif

//	printf("1: %d\n",DEBUG);
//#if DEBUG
//	printf("2: %d\n",DEBUG);
//#endif

//	int i = 1;
//	int sum = 0;
//	for (; i <= 10; i++){
//#ifdef DEBUG
//		printf("debug version: %d\n", sum);
//#else
//		printf("release version: %d\n", sum);
//#endif
//		sum += i;
//	}
//	printf("%d\n", sum);

//	int i = 1;
//	int sum = 0;
//	for (; i <= 10; i++){
//#ifdef DEBUG
//		printf("before debug: %d\n", sum);
//#endif
//		sum += i;
//#ifdef DEBUG
//		printf("after debug: %d\n", sum);
//#endif
//	}
//	printf("%d\n", sum);

	//int i = 0;
	//for (; i < M; i++){
	//	printf("...%d\n", i);
	//}

//#define M 100
//	printf("%d\n", M);
//	printf("%d\n", M);
//	printf("%d\n", M);
//	printf("%d\n", M);
//#undef M//取消宏
//	printf("%d\n", M);

	//int x = 5;
	//int y = 8;
	//int z = MAX(x++, y++);//int z = (x++)>(y++)? (x++):(y++)
	//printf("%d, %d, %d\n", x, y, z);

	//printf("%d\n", MAX(10, 9));

	//int x1 = 100;
	//int x2 = 200;
	//int x3 = 300;
	//ADD(1, 100);
	//ADD(2, 200);
	//ADD(3, 300);
	//printf("%d, %d, %d\n", x1, x2, x3);

	system("pause");
	return 0;
}