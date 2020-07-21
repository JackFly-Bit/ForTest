#include <stdint.h>
#include <string.h>
#include <math.h>
#include <windows.h>

#pragma warning (disable:4996)

//typedef struct pos{
//	int x;
//	int y;
//	char addr[128];
//	int list[2000];
//	int* p;
//}pos_t;
//
//struct pos{
//	int x;
//	int y;
//	char addr[128];
//	int list[2000];
//	int* p;
//}x = { 23, 45, "陕西省西安市长安区xxx大学！", { 1, 2, 3, 4, 5 },NULL };//不推荐

//typedef struct pos{
//	int x;
//	int y;
//	char addr[128];
//	int list[2000];
//	int* p;
//}pos_t, *pos_p, pos_arr[10];//定义了类型

//struct pos{
//	int x;
//	int y;
//	char addr[128];
//	int list[2000];
//	int* p;
//}pos_t, *pos_p, pos_arr[10];//没有typedef 他们就是变量

struct stu{
	char name[16];
	int age;
	char sex;
	int score[5];
	char big[1024 * 100];
};

void Show(struct stu *x)
{
	//printf("Show: %p\n", &x);
	//printf("name: %s\n", x.name);
	//printf("age： %d\n", x.age);
	//printf("sex： %c\n", x.sex);
	//int num = sizeof(x.score) / sizeof(x.score[0]);
	//int i = 0;
	//for (; i < num; i++){
	//	printf("%d : %d\n", i, x.score[i]);
	//}
}

int Count(int x)
{
	int count = 0;
	while (x){
		x /= 10;
		count++;
	}
	return count;
}

int IsNarcissus(int x)
{
	int old_data = x;
	int count = Count(x);
	int sum = 0;
	while (x){
		int temp = x % 10;
		sum += (int)pow(temp, count);
		x /= 10;
	}
	return sum == old_data;

	//return sum == old_data ? 1 : 0;

	//if (sum == old_data){
	//	return 1;
	//}
	//else {
	//	return 0;
	//}//不写else部分，默认返回1
}

void show(int n)
{
	//上半部
	int i = 0;
	for (; i < n; i++){
		int j = 0;
		for (; j < n - 1 - i; j++){
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++){
			printf("*");
		}
		printf("\n");
	}
	//下半部
	for (i = 0; i < n - 1; i++){
		int j = 0;
		for (; j <= i; j++){
			printf(" ");
		}
		for (j = 0; j < 2 * n - 3 - 2 * i; j++){
			printf("*");
		}
		printf("\n");
	}
}

int main()
{


	//打印菱形
	//char graph[100][100] = {
	//	"         *",
	//	"        ***",
	//	"       *****",
	//	"      *******",
	//	"       *****",
	//	"        ***",
	//	"         *",
	//};
	//int i = 0;
	//for (; i < 7; i++){
	//	printf("%s\n", graph[i]);
	//}

	//上半部
	//*:i = 0;i= [(2*i)+1]
	//空格：(n-1)-i
	//下班部
	//*:0 13 2*n-3
	//  1 11
	//  2  9
	//show(8);

	//打印水仙花数
	//求出0～100000之间的所有“水仙花数”并输出。
	//“水仙花数”是指一个n位数
	//其各位数字的n次方之和确好等于该数本身
	//如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
	//1.先写一个函数，判定一个数字是否是“水仙花数”
	//2.判定数字有多少（n）位，取出每个位，进行x^n + ...
	//3.for(0~100000)
	//int i = 0;
	//for (; i < 100000; i++){
	//	if (IsNarcissus(i)){//执行这条语句时，先执行函数，函数形成一个返回值以后，然后if再判定
	//		printf("%d ", i);
	//	}
	//}
	//printf("\n");

	//结构体是一种聚合类型
	//int char ....是内置类型

	//struct stu stux;
	////stux.name = "zhangsan";//数组不能被整体赋值，所以要用strcpy函数，对数组进行赋值
	//strcpy(stux.name, "zhangsan");
	//stux.age = 10;//变量可以被直接赋值

	//struct stu stux = { "tom", 21, 'm', { 91, 90, 62, 90, 80 } };
	//printf("main: %p\n", &stux);//结构体的地址
	//printf("main: %p\n", stux.name);//结构体内数组首元素的地址
	//printf("main: %p\n", &(stux.name));//结构体内数组的地址

	//printf("main: %p\n", &stux + 1);
	//printf("main: %p\n", stux.name + 1);
	//printf("main: %p\n", &(stux.name) + 1);

	//int i = 0;
	//for (; i < 1000000; i++){
	//Show(&stux);
	////结构体不谈“退化，降维”之类的问题，结构体要发生对应的硬拷贝问题
	////这样系统开销（时间，空间）会较大
	////建议结构体穿参时传地址，且相应函数形参用指针
	//}

	//struct stu stux = { "tom", 21, 'm', { 91, 90, 62, 90, 80 } };
	//struct stu *p = &stux;
	//printf("name: %s\n", (*p).name);
	//printf("name: %s\n", p->name);
	//p->age = 80;

	//struct stu stux = { "tom", 21, 'm', { 91, 90, 62, 90, 80 } };
	//printf("name: %s\n", stux.name);
	//printf("age： %d\n", stux.age);
	//int num = sizeof(stux.score) / sizeof(stux.score[0]);
	//int i = 0;
	//for (; i < num; i++){
	//	printf("%d : %d\n", i, stux.score[i]);
	//}

	//pos_arr arr;//不推荐
	//pos_t arr[10];//推荐

	//int a = 10;
	//pos_t sust_pos = { 23, 45, "陕西省西安市长安区xxx大学！", \
		//								{ 1, 2, 3, 4, 5 },/*NULL*/&a};
	//pos_p p = &sust_pos;

	//int a = 10;
	//pos_t sust_pos = { 23, 45, "陕西省西安市长安区xxx大学！", \
		//							{ 1, 2, 3, 4, 5 },/*NULL*/&a};
	//pos_t xayd_pos = { 0, 0, "", { 0 } };
	//pos_t xaca_pos = { 0 };
	//pos_t skd_pos;//不太推荐


	//pos_t sust_pos = { 23, 45 };//初始化
	////sust_pos = { 23, 45 };//语法报错
	//sust_pos.x = 23;//赋值
	//sust_pos.y = 45;//正确

	//int arr[5] = { 1, 2, 3, 4, 5 };
	//arr[5] = { 1, 2, 3, 4, 5 };//语法报错
	//arr= { 1, 2, 3, 4, 5 };//语法报错

	system("pause");
	return 0;
}