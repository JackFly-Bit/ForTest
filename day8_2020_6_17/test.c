#include<stdio.h>
#include<string.h>
#include <windows.h>

#pragma warning (disable:4996)

int GetMax(int x,int y){
	return x > y ? x : y;
}

//�β�ʵ��������ֵ���Σ�Ҫ�������ݵ���ʱ����
void Swap(int* _x, int* _y){//�β�
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

	//ͳ��1��100��9���ֵĸ���
	int num = CountNine();
	printf("%d\n", num);

	////дһ�����������Խ�����������������
	//int x = 10;
	//int y = 20;
	//printf("main: %p, %p\n", &x, &y);
	//Swap(&x, &y);//ʵ��

	////дһ�����������ҳ����������е����ֵ
	//int x = 10;
	//int y = 20;
	//int max = GetMax(x, y);
	//printf("max : %d\n", max);

	//int a[5];
	//memset(a, 1, sizeof(int)* 5);//memset �ڸ�ֵ��ʱ�������ֽ�ά������λ�ģ�
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