#include <stdio.h>
#include <windows.h>

#pragma warning (diasble:4996)

int i;

int fun(int number)
{
	printf("%d\n", number);
	static int count = 1;
	return ++count;
}
int main()
{
	//推荐书籍《C和指针》《C深度剖析》
	//总结：指针的类型决定了，对指针解引用的时候有多大的权限（能操作几个字节）。比如：char* 的
	//指针解引用就只能访问一个字节，而int*的指针的解引用就能访问四个字节。
	int n = 0x11223344;
	char *pc = (char*)&n;
	int *pi = &n;
	*pc = 0;
	*pi = 0;
	//4.指针进行解引用访问的时候，自己的类型决定了自己能访问几个字节（type）

	//int a = 10;
	//int* p = &a;
	//*p = 20;
	//p = 20;//p的内容编成了20 这个地址存不存在，合不合法，都未定义。所以p就变成了一个野指针
	//int *q = p;
	//*q = 30;
	//q = 100;//q也变成了一个野指针
	//3.指针变量也是变量，指针变量也要有空间，内容，地址
	
	//int a = 10;
	//int* p = &a;
	//*p = 20;
	//int b = 0;
	//b = *p;
	//printf("%d\n", a);
	//printf("%d\n", b);

	//int a = 10;
	//int* p = &a;
	//int b = *p;
	//*p = 20;
	//2.对指针解引用，代表指针所指向的变量（目标）（修正：正常情况，不牵扯强转）

	//int a = 10;
	//int* q = &a;
	//printf("&a: %p\n", &a);
	//printf("q: %p\n", (short*)q + 1);

	//char c = 'c';
	//char* p = &c;
	//int a = 10;
	//int* q = &a;
	//printf("&c: %p\n", &c);
	//printf("p: %p\n", p+1);
	//指针的类型决定了其向前或者向后一步有多大
	//1.对指针+1，看起来是+1，实际上是加上该指针所指向的类型的大小（type+*, +1 == +sizeof(type)）

	//int* p;//随机值，野指针，悬垂指针。随机指向的地址，解引用时可能会发生不可预料的问题
	//int* p = NULL;
	//char* 类型的指针是为了存放char类型变量的地址
	//32位平台下只要时指针都是4个字节
	//指针是无符号的整数（正数）

	//CPU和内存之间是通过 系统总线 连接起来的，系统总线传输的01代码可以是地址，也可以是数据，CPU有它自己的区别方式
	//电线上的信号通过电平的高低，或者电信号的疏密来区别01数据
	//int a = 1;//数值1
	//int* p = 1;//地址1
	//类型决定了看待数据的方式
	//printf("%d\n", sizeof(int*));

	//int answer;
	//answer = fun(1) - fun(2) * fun(3);
	//printf("%d\n", answer);

	//C语言可以跨平台，但
	//可移植性差
	//a + b + c + d + e*f

	//int a = 10;
	//int *p = &a;
	//printf("before p: %p\n", p);
	//int b = *p++;//++的优先级比*高，但是++的使用规则是先使用再自增，所以先执行*p之后p再自增！
	//printf("after p: %p\n", p);
	//printf("%d\n", b);

	// ++/-- 优先级比 * 高 eg. *++p *p++
	//.的优先级比—> 高
	//—>指向操作符的优先级 高于 *解引用操作符的优先级 eg. *p->age 先访问age再解引用
	//++ 后缀子增的优先级比 前缀自增的优先级高

	//long double
	//double
	//float
	//unsigned long int 
	//long int 
	//unsigned int 
	//int 
	//算数转化
	//以上在相互赋值时需要强转
	//char, short, int 在赋值时发生隐士类型转化(整形提升)，不需要强转

	//float f = 3.14;
	//int a = f;
	//printf("%d\n", a);

	//printf("%d\n", i);//全局变量不赋初值则为0. 如果是在函数内定义的变量（函数内的临时变量），不赋初值则为1，因为函数内的变量在栈上
	//i--;// i = i + (-1);
	//if (i < sizeof(int)/*unsigned int*/){//1.sizeof求出来是无符号整型 2.类型转化不改变量里的数据内容，只改变看待数据的方式
	//	printf("AAAAAAAAAAAAAa\n");
	//}
	//else{
	//	printf("BBBBBBBBBBBBBBb\n");
	//}
	system("pause");
	return 0;
}