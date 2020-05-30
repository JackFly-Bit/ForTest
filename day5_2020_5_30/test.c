#include <stdio.h>
#include <windows.h>

//#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning (disable:4996)

//1.返回值：void
//2.函数名：见到名字知道意思
//3.形参列表：MyAdd(x,y),实参，实际参数
//形参，形式参数
//4.函数体：代表函数的核心代码
//函数作用：输入参数—>加工数据->返回结果
//int MyAdd(int _x, int _y){
//	int _z = _x + _y;
//	return _z;
//}
//int MyMul(int _x, int _y){
//	int _z = _x * _y;
//	return _z;
//}
//int MyDiv(int _x, int _y){
//	if (0 == _y){
//		printf("div zero!\n");
//		return -1;
//	}
//	int _z = _x / _y;
//	return _z;
//}
//void show(){
//	printf("hello world\n");
//}
//int MyMax(int _x, int _y){
//	int _max = _x > _y ? _x : _y;
//	return _max;
//}

typedef unsigned long long ull_t;
//关键字（类型重命名）老的类型 -> 新的类型（名字）
//除非特殊需求，否则不推荐！！！
int main(){
	//C语言中有32个关键字
	//unsigned long long x = 100;
	//unsigned long long y = 200;
	ull_t x = 100;
	ull_t y = 200;
	printf("%llu\n", x);
	printf("%llu\n", y);
	//printf("Please Enter<x,y>:");
	//int x = 0;
	//int y = 0;
	//scanf("%d %d", &x, &y);
	//int max = MyMax(x, y);
	//printf("max = %d\n",max);

	//char s[] = { 'b', 'i', 't' };
	//printf("%d,%s\n",sizeof(s),strlen(s));
	//printf("%d\n",sizeof(s));
	//printf("%d\n",strlen(s));
	////show;
	//show();
	//int a = (1, 2, 3, 4, 5, 6);
	//printf("%d\n",a);

	//printf("请输入对应的两个数据<x,y>:");
	//int x = 0;
	//int y = 0;
	//scanf("%d %d",&x,&y);
	//int max = x > y ? x : y;
	////if (x > y){
	////	max = x;
	////}
	////else{
	////	max = y;
	////}
	//printf("max = %d\n",max);
	//int x = 0;
	//int y = 30;

	//x == 1 && printf("ok\n");
	//x == 1 || printf("ok\n");

	//int i = 10;
	////int x = ++i;//前置++
	//int x = i++;//后置++

	//printf("%d\n", i);
	//printf("%d\n", x);

	//unsigned int x = 1;
	//printf("%u\n", ~x);
	//system("calc");

	//变量在内存中是有具体地址的
	//int x = 10;
	//printf("%d\n", x);
	//printf("0x%p\n", &x);


	//int x = 10;
	//printf("%d\n", +x);
	//printf("%d\n", -x);

	//int flag = 1;
	//if (!(1 == flag)){
	//	printf("hello world!\n");
	//}
	//else {
	//	printf("hello bit!\n");
	//}

	//定义变量：
	//1.开辟空间，大小由类型决定
	//2.向空间放置内容数据

	//int x = 0;//初始化：把开辟空间和放置内容数据一起进行：王思聪
	////赋值：刘强东
	//int y;//开辟空间
	//y = 20;//附内容

	//printf("%d\n", 2&6);//& -> 按位与

	//int x = 15;
	//printf("%d\n", x >> 1);//将整数右移一位相当于对整数x/2
	//printf("%d\n", x << 2);

	//int x = 10;
	//int y = 5;
	//printf("%d\n", x + y);
	//printf("%d\n", x - y);
	//printf("%d\n", x * y);
	////printf("%d\n", x / 0);//shift + F5;
	//printf("%d\n", 10 % 3);

	//int arr[10];//局部数组没有经过初始化，数组内容是随机值
	//int arr[] = { 1, 2, 3, 4, 5};
	//int num = sizeof(arr) / sizeof(arr[0]);

	////printf("%d\n",sizeof(arr));//整个数组的大小
	////printf("%d\n", sizeof(arr[0]));//一个元素的大小
	////printf("%d\n",sizeof(arr)/sizeof(arr[0]));
	////遍历
	//int total = 0;
	//int i = 0;
	//for (; i < num;i++){
	//	printf("arr[%d] : %d\n", i, arr[i]);//arr[i]

	//	total = total + arr[i];//total = 1 + 2;
	//}
	//printf("total : %d\n",total);

	//int x = 0;
	//int y = 0;
	//printf("请输入你的数据<x,y>:");
	//scanf("%d %d",&x, &y);
	//printf("result : %d\n", MyAdd(x, y));
	//printf("result : %d\n", MyMul(x, y));
	//int z = MyDiv(x, y);
	//printf("result : %d\n", z);
	//int result = MyAdd(x, y);
	//printf("result : %d\n",result);
	system("pause");
	return 0;
}