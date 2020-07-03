#include <stdio.h>
#include <windows.h>

#pragma warning (disable:4996)

void show(int top)
{
	int i = 0;
	while (i < top){
		printf("%d\n", i);
		i++;
	}
}

typedef struct Stu{
	char name[32];
	int age;
	char sex;
	char telephone[16];
}stu_t;

void Show(stu_t s/*硬拷贝*/)
{
	printf("Show: %p\n", &s);
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%c\n", s.sex);
	printf("%s\n", s.telephone);
}

void Show1(stu_t* s)
{
	printf("Show: %p\n", s);
	printf("%s\n", s->name);
	printf("%d\n", s->age);
	printf("%c\n", s->sex);
	printf("%s\n", s->telephone);
}

int CountOne(int n)
{
	int count = 0;
	while (n){
		n &= (n - 1);
		count++;
	}
	return count;
}
int DiffOne(int a, int b)
{
	return CountOne(a ^ b);
}

void Print(int x)
{
	//打印奇数位
	int i = 30;
	for (; i >= 0; i -= 2){
		printf("%d ", (x >> i) & 1); //0000 0000 0000 0000 0000 0000 0000 0001
		//if ( x & (1 << i)){
		//	printf("1 ");
		//}
		//else{
		//	printf("0 ");
		//}
	}
	printf("\n");
	//打印偶数位
	for (i = 31; i >= 0; i -= 2){
		printf("%d ", (x >> i) & 1); //0000 0000 0000 0000 0000 0000 0000 0001
		//if (x & (1 << i)){
		//	printf("1 ");
		//}
		//else{
		//	printf("0 ");
		//}
	}
	printf("\n");
}

int CountOneChar(char n)
{
	int count = 0;
	while (n){
		n &= (n - 1);
		count++;
	}
	return count;
}
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(!c));//其实要进行整形提升，但是VS编译器认为值为1

	//应用场景：
	//1.
	//int a = 10;
	//int b = 20;
	//char c = 'a';
	//a = b + c;
	//2.
	//a == c

	//char a = 0xb6; //1011 0000
	//short b = 0xb600;
	//int c = 0xb6000000;
	//if (a == 0xb6)
	//	printf("a");
	//if (b == 0xb600)
	//	printf("b");
	//if (c == 0xb6000000)
	//	printf("c");

	//unsigned char c = -1;
	//char c = -1;
	//printf("%u\n", c);

	//unsigned char c = -1;
	////char c = -1;//1111 1111
	//printf("%d\n", CountOneChar(c));
	//int a = c;
	//printf("%d\n", CountOne(a));// 0000 0000 0000 0000 0000 0000 1111 1111
	//注：默认情况下 char 是一个有符号数

	//如何进行整形提升？
	//整形提升是按照变量的数据类型的符号位来提升的
	//1.如果是无符号数，整形提升，直接全部补0
	//2.如果是有符号数，补符号位(看变量本身的类型！！)

	//为什么要进行整形提升？
	//1.因为运算是在CPU内进行的
	//2.可能发生不对等赋值，如：int = char
	//char c = 'a';
	//printf("%d\n", c);//97

	//C的整型算术运算总是至少以缺省类型的精度来进行的
	//char a = 'a';
	//char b = 'b';
	//int c = a + b;
	//printf("%d\n", a + b);

	//打印整数二进制的奇数位和偶数位
	//1100 0011
	//        1 &
	//int x = 123;
	//Print(x);

	//求两个数二进制中不同位的个数
	//int x = 123;
	//int y = 321;
	//int count = DiffOne(x, y);
	//printf("count: %d\n", count);

	//struct Stu student1 = { "张三", 18, 'm', "123456" };
	//stu_t student2 = { "李四", 21, 'w', "123456" };

	//printf("main: %p\n", &student2);
	//Show1(&student2);

	//stu_t* p = &student1;

	//printf("name: %s\n", student1.name);
	//printf("name: %s\n", (*p).name);
	//printf("name: %s\n", *p->name);

	//show(10);
	//int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//printf("%d\n", a[0]);
	//[0,10)
	//[i,j)
	//好处：j - i 是两个下标中间元素的个数
	//例如遍历数组的伪代码如下：
	//int x = i;
	//while ( x < j - i){
	//
	//}

	//逗号表达式存在的原因 - 伪代码解释（避免代码的重复）
	//a = get_val();
	//count_val(a);
	//while (a > 0)
	//{
	//	//业务处理
	//	a = get_val();
	//	count_val(a);
	//}
	////使用逗号表达式，改写：
	//while (a = get_val(), count_val(a), a > 0)
	//{
	//	//业务处理
	//}

	//if (a = b + 1, c = a / 2, d > 0);

	//int a = 1;
	//int b = 2;
	//int c = (a > b, a = b + 10, a, b = a + 1);

	//int x = 1;
	//int y = 2;
	//int a = (printf("hello world\n"), x > y);
	////int a = (1, 2, 3, 4, 5);
	//printf("%d\n", a);

	//int a = 0;
	//int b = 0;
	//if (a > 5){
	//	b = 3;
	//}
	//else{
	//	b = -3;
	//}
	////b = a > 5? 3 : -3;

	//int a = 10;
	//int b = 20;
	//int max = 0;
	//max = a > b ? a++ : b++;
	//printf("%d\n", max);
	//printf("%d, %d\n", a, b);

	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	////i = a++ && ++b && d++;
	//i = a++ || ++b || d++;
	//printf(" a = %d\n b = %d\n c = %d\n d = %d\n i = %d\n", a, b, c, d, i);

	//int flag = 1;
	//flag == 1 && printf("aaa\n");//printf的返回值是个整数
	//flag == 0 || printf("aaa\n");

	//int a = 10;
	//int b = 20;
	//int c = 30;
	//if (a >= 10 && b <= 20 && c == 30){
	//	printf("true\n");
	//}
	//else{
	//	printf("false\n");
	//}
	//&  -> 按位与是用来进行数据运算的
	//&& -> 逻辑与不是进行数据运算的，是用来进行结果判断的

	//int a = 10;
	//int b = 20;
	//if (a == b){
	//	printf("equals\n");
	//}
	//else{
	//	printf("not equals\n");
	//}
	system("pause");
	return 0;
}