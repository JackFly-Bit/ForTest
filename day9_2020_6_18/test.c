#include "test.h"

////"ab"
//int MyStrlen(const char* str){
//	//function2
//	//"ab"
//	if (*str == '\0') {
//		return 0;
//	}
//	//1 + MyStrlen("b")[1 + MyStrlen("\0")]
//	//0����"\0",0+1����"b",b+1����"ab"
//	return 1 + MyStrlen(str + 1);
	//"abcd1234"
	//1 + "bcd1234"
	//1 + 1 + "cd1234"
	//1 + 1 + 1 + "d1234"
	//����
	//1 + 1 + 1 + ���� + 0//""�մ�<=>"\0"<=>0

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
////������Ϊ����������ʱ������㴫����һ�����飬��������ʱ��Ҫ��������Ľ�ά���⣡
////��ά���⣺��ά�ɶ�Ӧ��ָ��
////Ϊʲô��ά���⣺���Ч�ʣ�ͨ�����Ϳ����ɱ��ﵽ��
////��ά�ɵ�ָ�������ŵ�������Ԫ�ص��׵�ַ
//int main(){
//	//char str[32] = "hello ";
//	////char* ret = strcat(str, "world");
//	////printf("%s\n", ret);
//	//printf("%d\n", strlen(strcat(str, "world")));//����һ����������ʽ����.strlen���ַ������ȣ���ͳ��\0
//
//	//printf("%d", printf("%d"), pirntf("%d", 43));//��ʽ����
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