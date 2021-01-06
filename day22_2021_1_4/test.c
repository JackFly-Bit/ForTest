#include <stdio.h>
#include <assert.h>
#include <windows.h>

const char* my_strstr(const char* str, const char* sub){
	assert(str);
	assert(sub);

	const char* str_start = str;
	const char* str_p = str;
	const char* sub_p = sub;

	while (*str_start){
		str_p = str_start;
		sub_p = sub;

		while (*sub_p && *str_p && *str_p == *sub_p){
			str_p++, sub_p++;
		}
		if (*sub_p == '\0'){
			return str_start;
		}
		str_start++; //下一次从哪里开始比较
	}
	return NULL;
}

//str = NULL; 与 *str = '\0';是不一样的
//后者相当于是str = "";
int my_strcmp(const char* str1, const char* str2){
	assert(str1);
	assert(str2);

	int ret = 0;
	while (!(ret = *(unsigned char*)str1 - *(unsigned char*)str2) && *str1){
		str1++, str2++;
	}
	if (ret > 0){
		return 1;
	}
	else if (ret < 0){
		return -1;
	}
	else{
		//TODO
		return 0;
	}
	return 0;
}

//struct stu{char name[32];int age;char addr[64];}x;
//int                                             a;
//typedef int a;
//typedef struct stu{ char name[32]; int age; char addr[64]; }x;

//结构体的类型是否一致，取决于是否是同一个结构体定义的变量，哪怕两个结构体成员完全一致
//它也是两种类型！！！
//struct {
//	int a;
//	int b;
//	char c;
//}x;
//
//struct {
//	int a;
//	int b;
//	char c;
//}*p;

struct node{
	int data;
	struct node* next;//对
	//struct Node next;//非法自引用
};

typedef struct Node{
	int data;
	struct Node* next;
	int z[5];
}Node;

//现象：1.结构体内部是存在内存对齐情况的，内存对齐问题，会影响结构体整体的大小
struct A{//15->16->24:内存对齐
	short a;//1//start:0,2,虽然第一个元素不考虑对齐，但是第一个元素有对齐数
	int b;//2//start:2+2,4
	double c;//4//start:8,8
	char d;//8//start:16,1
	//2+2+4+8+1=17+7=24
};

struct B{
	char c;
};

//为什么&&是什么：2.因为硬件约束，可能会导致cpu访存次数增加，效率降低。空间来换取时间的策略，内存对齐
//如何内存对齐：3.

int main()
{
	//起始认知：
	//计算机访问内存的基本单位是字节
	//计算机能任意读取内存中的任何一个字节吗？
	//能，但是，计算机因为硬件设计的原因，计算机读取
	//数据的时候，必须从特定要求的起始位置开始读取。
	//假设：计算机读取内存，必须从4的整数倍地址处开始读取
	//像这种通过牺牲内存空间，来满足CPU访存硬件限制，提升效率的方式，我们叫做内存对齐
	//内存对齐的本质：用空间来换取时间

	//printf("%d\n", sizeof(struct A));
	//printf("%d\n", sizeof(struct B));

	struct A obj;
	printf("%p\n", &obj);
	printf("%p\n", &obj.a);
	printf("%p\n", &obj.b);
	printf("%p\n", &obj.c);
	printf("%p\n", &obj.d);
	printf("%d\n", sizeof(obj));

	//int a;
	//printf("hello world");
	//a = 10;
	//变量先定义，后使用
	//需要的时候再定义
	//old:变量的定义处和使用处，是分离的，不便于我们进行阅读和维护的
	//（建议）new:需要的时候再定义，好处是变量的定义和变量的使用是在一起的，便于我们进行阅读和维护的

	//Node x;
	//x = { 10, NULL, { 1, 2, 3, 4, 5 } };//不可以整体赋值

	//Node x = { 10, NULL, { 1, 2, 3, 4, 5 } };

	//printf("%d\n", sizeof(struct Node));

	//struct Node node1;
	//struct Node node2;
	//node1.next = &node2;

	//p = &x;

	//a b;
	//x b;
	//struct stu tom;
	//int a;

	//const char* str = "hello 123 abc456xyz, 12,xy1234";
	//const char* sub = "xyz1";
	//printf("%s\n", my_strstr(str, "\0"));

	//const char* str1 = "abcd123efgxyz";
	//const char* str2 = "abcD123efgxyz";
	//printf("ret = %d\n", my_strcmp(str1, str2));

	//unsigned char a = 10;
	//unsigned char b = 20;
	//int ret = a - b;
	//printf("%d\n", ret);
	//printf("%d\n", a-b);
	//printf("%u\n", a - b);

	//打印系统内部ASSII码表
	//unsigned int c = 0;
	//for (; c <= 255; c++){
	//	if (c % 15 == 0){
	//		printf("\n");
	//	}
	//	printf("%c ", c);
	//}
	//printf("\n");

	//printf("%c ", 1);

	system("pause");
	return 0;
}