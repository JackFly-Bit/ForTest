#include "test.h"

void BubbleSort(int *arr, int num)
{
	int i = 0;
	for (; i < num - 1; i++){
		int j = 0;
		int flag = 1;
		for (; j < num - 1 - i; j++){
			if (arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1){
			break;
		}
	}
	//p arr[]
	//arr[],*(arr+i)
	//p[], *(p+i)
	//int i = 0;
	//for (; i < num; i++){
	//	printf("arr[%d]: %d\n", i, arr[i]);
	//}
}
Show(int arr[],int num)
{
	int i = 0;
	for (; i < num; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int a[] = (2, 4);
	printf("%d\n", a[0]);

	//int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//int num = sizeof(arr) / sizeof(arr[0]);

	////数组名再两种情况下代表整个数组：&arr or sizeof(arr)单独；
	////其他情况，都代表数组首元素的地址

	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 1));

	//printf("%p\n", arr);//数组首元素的地址
	//printf("%p\n", &arr);//数组的地址
	//printf("%p\n", arr + 1);//下一个元素
	//printf("%p\n", &arr + 1);//下一个数组

	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);
	//printf("%d\n", *arr);

	//printf("%p\n", arr+1);
	//printf("%p\n", arr+2);
	// printf("%p\n", *(arr + 1));//%p按照16进制打印 %d按照10进制打印
	//printf("%p\n", arr[1]);

	//int arr[] = { 2, 1, 3, 2, 5, 6, 7, 8, 9, 0, 1, 2, 4, 3, 2 };
	//int num = sizeof(arr) / sizeof(arr[0]);
	//Show(arr, num);
	//BubbleSort(arr, num);
	//Show(arr, num);

	//数组只能被初始化，不能被赋值（不能先声明一个数组，下一步再给数组赋值）
	//任何数组，线性连续且递增
	//int arr[3][4] = { 1, 2, 3, 4, 5 };
	//int i = 0;
	//for (; i < 3; i++){
	//	int j = 0;
	//	for (; j < 4; j++){
	//		printf("&arr[%d][%d] : %p\n", i, j, &arr[i][j]);
	//	}
	//}
	//printf("hello world!\n");
	system("pause");
	return 0;
}