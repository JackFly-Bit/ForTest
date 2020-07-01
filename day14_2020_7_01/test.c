#include <stdio.h>
#include <windows.h>

#pragma warning (disable:4996)

void Swap(int *xp, int *yp)
{
	*xp ^= *yp;
	*yp ^= *xp;
	*xp ^= *yp;

	//int temp = *xp;
	//*xp = *yp;
	//*yp = temp;
}

int CountOne(int x)
{

	//x = 01000000000000000000
	//x &= (x-1);
	//00000100010001000  (x)(old)
	//00000100010000111  (x - 1) & x
	//------------------
	//00000100010000000   x (new)
	//00000100001111111 & (x - 1) & x
	//-----------------
	//00000100000000000
	//00000011111111111 & (x - 1) & x
	//-----------------
	//00000000000000000
	//code3
	int count = 0;
	while (x){
		x &= (x - 1);
		count++;
	}
	return count;

	//code2
	//int count = 0;
	//while (x){
	//	if (x % 2){
	//		count++;
	//	}
	//	x /= 2;
	//}
	//return count;

	//code1
	//int count = 0;
	//int i = 0;
	//while (i < sizeof(x)* 8){
	//	if (x & (1 << i)){
	//		count++;
	//	}
	//	i++;
	//}
	//return count;
}

int main()
{
	//类型决定1.开辟空间的大小 2.看待数据的方式
	//char c = 'a';
	//int a = c;
	//强转改变的是我们看待数据的方式，数据本身并没有变化
	//float f = 1.0;
	//int a = (int)f;

	//转化不等于强转,如下是转化的例子（将字符"12345" 转化成字符 12345）
	char *str = "12345";
	int n = 12345;

	//int i = 10;
	//int x = ++i;
	////int x = i++;
	//printf("%d,%d", x, i);

	//char a[10];
	//printf("%d\n", sizeof(a));//数组名在sizeof中单独出现时代表整个数组
	//printf("%d\n", sizeof(a + 1));//数组名代表数组首元素的地址，a+1代表第二个元素的地址,不论是第几个地址，只要是地址就是4个字节
	//printf("%d\n", sizeof(a[1]));//第一个元素的大小，应为是char类型所以是1

	//int a = 10;
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof a );//sizeof不是函数
	//printf("%d\n", sizeof(10));
	//printf("%d\n", sizeof 10);
	//printf("%d\n", sizeof(int));
	////printf("%d\n", sizeof int);

	//int a = 10;
	////printf("%d\n", &a);
	////printf("%o\n", &a);
	////printf("%f\n", &a);
	////printf("%p\n", &a);
	////printf("0x%p\n", &a);
	//int* p = NULL;
	//p = &a;
	//int* q = p;

	//int x = 1;
	//printf("%d\n", !x);//逻辑反
	//printf("%d\n", ~x);//按位反

	//int a = 10;
	//a <<= 1;
	//a >>= 1;

	//float f = 3.14f;
	//double d = 1.234;
	//
	//int a = 10;
	//int b = 20;
	//int c;

	////不推荐
	//c = b = a + 40;

	////推荐
	//b = a + 40;
	//c = b;

	//printf("%d\n", a);
	//printf("%d\n", b);
	//printf("%d\n", c);


	//编写代码实现：求一个整数存储再内存中的二进制中1的个数
	//int x = 0;
	//int y = 0;
	//printf("请输入# ");
	//scanf("%d %d", &x, &y);
	//printf("before: %d, %d\n", x, y);
	//Swap(&x, &y);
	//printf("after: %d, %d\n", x, y);

	//异或可以用来进行加密解密，和数据压缩等
	//int x = 10;
	//int y = 20;
	//printf("%d\n", x ^ y ^ x);//x ^ y ^ x -> 0 ^ y;//0 ^ 0 = 0 , 1 ^ 0 = 1
	//注：按位与，或，异或的操作数必须是整数

	//int x = 10;
	//x >> -1;//为定义的行为

	//逻辑移位 左边用0填充，右边丢弃 —> 对应于无符号整数
	//算术移位 左边用该原值的符号位填充，右边丢弃 —> 对应于有符号整数
	//int x = -1;
	//printf("%d\n", (unsigned int)x >> 1);
	//在理解运算的时候，要引入一个概念（CPU + 寄存器）
	//int x = 10;
	//printf("%u\n", x << 1);
	system("pause");
	return 0;
}