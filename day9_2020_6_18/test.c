#include "test.h"

////"ab"
//int MyStrlen(const char* str){
//	//function2
//	//"ab"
//	if (*str == '\0') {
//		return 0;
//	}
//	//1 + MyStrlen("b")[1 + MyStrlen("\0")]
//	//0返回"\0",0+1返回"b",b+1返回"ab"
//	return 1 + MyStrlen(str + 1);
	//"abcd1234"
	//1 + "bcd1234"
	//1 + 1 + "cd1234"
	//1 + 1 + 1 + "d1234"
	//……
	//1 + 1 + 1 + …… + 0//""空串<=>"\0"<=>0

	//function1
	//int i = 0;
	//while (str[i] != '\0'){
	//	i++;
	//}
	//return i;

	//int count = 0;
	//while (*str != '\0'){
	//	count++;
	//	str++;
	//}
	//return count++;
//}
//int g_val = 100;
//
int MyAdd( x,  y)
{
	return x + y;
}
//
//int MyDiv(int x, int y){
//	if (0 == y){
//		printf("div zero!error!\n");
//		return - 1;
//	}
//	return x / y;
//}


//#include<stdio.h>
//#include<windows.h>
//#pragma warning (disable:4996)
//void Swap1(int* _x ,int* _y){
//	printf("Swap1 before:%d, %d\n", *_x, *_y);
//	int temp = *_x;
//	*_x = *_y;
//	*_y = temp;
//	printf("Swap1 after:%d, %d\n", *_x, *_y);
//}
//void Swap2(int _x, int _y){
//	printf("Swap1 before:%d, %d\n", _x, _y);
//	int temp = _x;
//	_x = _y;
//	_y = temp;
//	printf("Swap1 after:%d, %d\n", _x, _y);
//}
//void Inc(int* p){
//	(*p)++;
//}
////数组作为函数参数的时候，如果你传入了一个数组，真正传参时，要发生数组的降维问题！
////降维问题：降维成对应的指针
////为什么降维问题：提高效率，通过降低拷贝成本达到的
////降维成的指针里面存放的是数组元素的首地址
//int main(){
//	//char str[32] = "hello ";
//	////char* ret = strcat(str, "world");
//	////printf("%s\n", ret);
//	//printf("%d\n", strlen(strcat(str, "world")));//这是一个函数的链式调用.strlen求字符串长度，不统计\0
//
//	//printf("%d", printf("%d"), pirntf("%d", 43));//链式调用
//
//	//int num = 0;
//	//Inc(&num);
//	//printf("%d\n", num);
//	//Inc(&num);
//	//printf("%d\n", num);
//	//Inc(&num);
//	//printf("%d\n", num);
//
//	//int x = 10;
//	//int y = 20;
//	//printf("before:%d, %d\n", x, y);
//	//Swap1(&x, &y);
//	//Swap2(x, y);
//	//printf("after:%d, %d\n", x, y);

//	system("pause");
//	return 0;
//}