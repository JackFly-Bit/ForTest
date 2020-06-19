//函数实现
#include "test.h"

int count = 0;
int fib(int n)
{

	//迭代方案
	int first = 1;
	int second = 1;
	int third = 1;
	while (n>2){//n = 4
		third = first + second;//third = 3
		first = second;//first = 2
		second = third;//second = 3
		n--;//n=2
	}
	return third;//3
	//递归方案
	//if (n == 1 || n == 2){
	//	return 1;
	//}
	//if (n == 3){
	//	count++;
	//}
	//return fib(n - 1) + fib(n - 2);//双递归，重复计算
}

//int Fact(int n)
//{
//	//自顶向下形成（压栈）
//	//自底向上释放（弹栈）
//	//code2
//	//if (n == 1){
//	//	return 1;
//	//}
//	//return n*Fact(n - 1);
//
//	//code1
//	//int i = 1;
//	//int total = 1;
//	//for (; i <= n; i++){
//	//	total *= i;
//	//}
//	//return total;
//}

//接受一个整型值（无符号），按照顺序打印它的每一位置。
//例如：输入：1234，输出 1 2 3 4
//1234 % 10 = 4 —> 1234 /= 10 = 123
//123 % 10 = 3 —> 123 /= 10 = 12
//12 % 10 = 2 —> 12 /= 10 = 1
//1 % 10 = 1 —> 1 /= 10 = 0
//1234 -> 1 2 3 4 
//如果要打印，个位数据是可以直接打印的（递归出口）
//1234—>123—>12—>1:大事化小
//4，123
//3，12
//2，1
//void ShowInt(int x)
//{
	//if (x > 9){
	//	ShowInt(x / 10);
	//}
	////1. if条件不满足
	////2. if条件满足，但是内部函数调用返回了
	//printf("%d ", x%10);

	//code2
	//if (x < 10){
	//	printf("%d", x);
	//	return;
	//}
	//ShowInt(x / 10);
	//printf(" %d ", x%10);

	//code 1
	//int arr[64] = { 0 };
	//int i = 0;
	//while (x > 0){
	//	arr[i] = x % 10;
	//	x /= 10;
	//	i++;
	//}
	//while (i > 0){
	//	i--;
	//	printf("%d ", arr[i]);
	//}
	//printf("\n");

	//while (x > 0){
	//	printf("%d ", x % 10);
	//	x /= 10;
	//}
	//printf("\n");
//}