#include <stdio.h>
#include <windows.h>

#pragma warning (disable:4996)

int MyStrlen(char *str)
{
	if (NULL == str){
		return 0;
	}
	char *start = str;
	char *end = str;
	while (*end != '\0'){
		end++;
	}
	return end - start;
}

#define N_VALUES 5
float values[N_VALUES];
//float *vp;//全局变量会被默认清零，但是我们最好写清楚，如下一行所示
float *vp = NULL;//NULL其实就是0.在系统里这样定义的，一个宏 #define NULL (void*)0



int main()
{
	//1.指针和数组没有关系，他们是两种不同的类型
	//2.但是他们在访问数组元素的时候，是有一定的相似性的
	//int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	//int num = sizeof(a) / sizeof(a[0]);
	//int *p = a;
	//int i = 0;
	//for (; i < num; i++){
	//	//printf("%d ", a[i]);//找到之后对a访问
	//	//printf("%d ", *(a + i));
	//	//printf("%d ", *(p + i));//先找到指针p ,对指针p进行解引用，找到a,之后再运算,再对a进行访问
	//	//通过指针和数组访问数组的差别在计算机寻址上，差别不大
	//	printf("%d ", p[i]);
	//}
	//printf("\n");

	//int a[5];
	//int *p = a;
	//int *q = &a[5];
	//printf("%d\n", q - p);
	
	//C语言标准里：数据进行指针式遍历的时候（通过指针进行遍历）是允许访问最后一个元素的下一个元素的地址。这是标准规定的，你是可以进行访问的！
	//符合循环遍历[)(半闭半开)的方式建议 大部分语言都喜欢用这种方式，因为这样右边的值-左边的值就是他们俩的元素的个数
	//数组地址比较的时候，最后一个元素的下一个元素的地址是可以被拿来比较的。
	//但是，仅仅是拿来进行大小比较，不能有任何其他操作。如：写入
	//指针+-数组；指针的关系运算。
	//for (vp = &values[0]; vp < &values[N_VALUES];)
	//{
	//	*vp++ = 0;
	//}

	//两个指针相减，建议两个指针一定要指向同一块内存
	//int a = 10;
	//int b = 20;
	//int *p = &a;
	//int *q = &b;
	//printf("%d\n", q - p);

	//两个指针相减，必须做到，这两个指针的类型是一致的
	//int a[10];
	//char *p = (char*)a;
	//int *q = &a[9];
	//printf("%d\n", q - p);

	//int a[10];
	//short *p = (short*)a;
	//short *q = (short*)&a[9];
	//printf("%d\n", q - p);

	int a[10];
	char *p = (char*)a;
	char *q = (char*)&a[9];
	printf("%d\n", q - p);

	//int a[10];
	//int *p = a;
	//int *q = &a[9];
	//printf("%d\n", q - p);

	//指针-指针：代表两个指针之间所经历的“元素”（不一定是1个字节）的个数
	//char *str = "helloworld";
	//int len = MyStrlen(str);
	//printf("%d\n", len);

	//防御性编程
	//好习惯永远保证指针只有两态
	//1.要么指向NULL 2.要么指向一个合法的位置
	//int *p = NULL;
	//int a = 10;
	//p = &a;
	//if (p != NULL)
	//{
	//	*p = 20;
	//}

	//int a[5] = { 1, 2, 3, 4, 5 };
	//int *p = a;//&a[0]
	//int i = 0;
	//for (; i <= 5; i++){
	//	*p++ = 0x11223344;
	//}

	//int *p = NULL;
	//*p = 10;//*p指向一个NULL空间，该空间不允许进行访问

	//int x = 0x11223344;//大小端
	//char *pc = (char*)&x;
	//int *pi = &x;

	//printf("%p\n", &x);
	//printf("%p\n", pc);//为什么第二个和其他两个打印值一样？(char*)&x不是讲x的地址强转成了char类型吗，应该要发生截断，不应该是x地址的最高或者最低的两个数字？
	//printf("%p\n", pi);

	////*pc = 0;
	//*pi = 0;

	system("pause");
	return 0;
}