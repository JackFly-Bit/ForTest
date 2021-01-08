#include <stdio.h>
#include <windows.h>

#pragma warning(disable:4996)

#define RED 0
#define BLACK 1
#define GREEN 2
#define YELLOW 3
#define BLUE 4

//枚举类型本质是int,而且默认情况是从0开始依次递增的int
//枚举是一种类型，在编译的时候会进行类型检查，宏是基于替换原则，在这个过程中，并不进行任何检查工作。
//宏的应用场景>>枚举
//typedef enum color{
//	RED = -100,
//	BLACK,
//	GREEN,
//	YELLOW,
//	BLUE
//}color_t;

//联合体本身的大小并不是把所有的类型加起来的大小
//常规而言，联合体的大小是由联合体内最大元素的大小决定的。决定了之后，所有元素共享空间
//在使用union的时候，一次只会访问一个元素
//union _un{
//	int a;
//	char b;
//	char c;
//	char d;
//	char e;
//	char f;
//};

//union _un{
//	int a;
//	char b;
//};

//联合体也要考虑内存对齐问题
//联合体的最终大小，要能整除联合体内的最大对齐数
union _un{//8
	char a[7];
	int b;
};

int main()
{
	//数组在哪里开辟空间？栈
	//数组的下标必须是常量，也就是确定值。数组的大小在编译过程中，已经确定了
	//int a[10];
	//char b[20];
	//double c[30];
	//short* d[40];
	//我们有没有场景，使用内存时，并不知道需要多少，而是在运行中，才能确定的。
	//题面：我们想求任意多个int中，最大值，需要你提前输入

	//1.空间在不同的需求下，可能需要不断调整，导致代码的可扩展性下降
	//2.有可能因为空间划分不合理，可能导致空间浪费的问题
	//3.一般在栈上，能一次有效分配的空间是有限的
	//int a[100 * 100 * 100];//1024 * 1024 = 1MB
	//所以，我们需要“动态内存管理”
	//1.让我们能够在程序运行期间来决定开辟空间的大小，需要多少给多少，满足不同的需求
	//2.有效使用空间
	//3.堆>栈空间

	//1.明确我们是有动态内存使用的需求的
	//2.明确我们接下来要使用的内存指的是：堆空间
	//客户端程序和服务器程序最怕内存泄露问题

	//什么时候用堆，什么时候用栈？

	printf("请输入有多少个数据#");
	int num = 0;
	scanf("%d", &num);
	int* p = (int*)malloc(num*sizeof(int));
	if (NULL == p){
		printf("malloc error!\n");
		return 1;
	}
	//空间申请success
	printf("请输入你的数据列表#");
	for (int i = 0; i < num; i++){
		scanf("%d", p + i);
		//scanf("%d", &p[i]);
	}
	int max = p[0];//*(p+0)
	for (int i = 1; i < num; i++){
		if (max < p[i]){
			max = p[i];
		}
	}
	printf("max: %d\n", max);
	free(p);

	//unsigned char puc[4];
	//struct tagPIM
	//{
	//	unsigned char ucPim1;
	//	unsigned char ucData0 : 1;
	//	unsigned char ucData1 : 2;
	//	unsigned char ucData2 : 3;
	//}*pstPimData;
	//pstPimData = (struct tagPIM*)puc;
	//memset(puc, 0, 4);
	//pstPimData->ucPim1 = 2;
	//pstPimData->ucData0 = 3;
	//pstPimData->ucData1 = 4;
	//pstPimData->ucData2 = 5;
	//printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);

	//printf("%d\n", sizeof(union _un));

	//union _un obj;
	//obj.a = 0x11223344;//0x11 22 33 44
	//obj.b = 0x55;
	//printf("%d\n", obj.b);
	////解决大小端问题
	//union _un obj;
	//obj.a = 1;//0x00 00 00 01
	//printf("%d\n", obj.b);

	//union _un obj;
	//obj.a = 0;
	//obj.b = 10;

	//printf("%p\n", &obj);
	//printf("%p\n", &(obj.a));
	//printf("%p\n", &(obj.b));
	//printf("%d\n", sizeof(obj));//int a = 10; sizeof(a) sizeof(int) 
	//printf("%d\n", sizeof(union _un));

	//int c = RED;

	//color_t c = RED;

	////enum color c = RED;
	//enum color c = 1000;
	//printf("%d\n", RED);
	//printf("%d\n", BLACK);
	//printf("%d\n", GREEN);
	//printf("%d\n", YELLOW);

	system("pause");
	return 0;
}