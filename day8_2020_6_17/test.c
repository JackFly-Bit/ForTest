#include<stdio.h>
#include<string.h>
#include <windows.h>

#pragma warning (disable:4996)

int GetMax(int x,int y){
	return x > y ? x : y;
}

//形参实例化，传值传参，要发生数据的临时拷贝
void Swap(int* _x, int* _y){//形参
	int temp = *_x;
	*_x = *_y;
	*_y = temp;
}
int CountNine(){
	int i = 1;
	int count = 0;
	for (; i < 100; i++){
		if (i % 10 == 9){
			count++;
		}
		if (1 / 10 == 9){
			count++;
		}
	}
	return count;
}

#define SIZE 10

int Max(int a[], int num){
	int i = 0;
	int max = a[0];
	for (i = 1; i < num; i++){
		if (max < a[i]){
			max = a[i];
		}
	}
	return max;
}
int main(){
	int a[SIZE] = { 0 };
	int i = 0;
	for (; i < SIZE; i++){
		scanf("%d",&a[i]);
	}
	int max = Max(a, SIZE);
	printf("max = %d\n",max);

	//统计1—100中9出现的个数
	int num = CountNine();
	printf("%d\n", num);

	////写一个函数，可以交换两个变量的内容
	//int x = 10;
	//int y = 20;
	//printf("main: %p, %p\n", &x, &y);
	//Swap(&x, &y);//实参

	////写一个函数可以找出两个整数中的最大值
	//int x = 10;
	//int y = 20;
	//int max = GetMax(x, y);
	//printf("max : %d\n", max);

	//int a[5];
	//memset(a, 1, sizeof(int)* 5);//memset 在赋值的时候，是以字节维基本单位的！
	//int i = 0;
	//for (; i < 5; i++){
	//	printf("%d ",a[i]);
	//}
	//printf("\n");

	//char str[8];
	//memset(str, 'a', 8);
	//int i = 0;
	//for (; i < 8; i++){
	//	printf("%c ", str[i]);
	//}
	//printf("\n");

	//printf("hello bit!\n");

	system("pause");
	return 0;
}