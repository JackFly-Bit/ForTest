#include "test.h"

////计算1/1 + (-1/2) + 1/3 + (- 1/4) + 1/5 …… + 1/99 - 1/100 的值，打印处结果
//float Cal()
//{
//	int i = 1;
//	float res = 0.0;
//	int flag = 1;
//	for (; i <= 100; i++){
//		res += flag*(1.0f / i);
//		flag = -flag;
//	}
//	return res;
//}

//在屏幕上输出 9*9 乘法口诀表
//void Show()
//{
//	int i = 1;
//	for (; i <= 9; i++){
//		int j = 1;
//		for (; j <= i; i++){
//			printf("%d*%d=%d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}

int main()
{
	//Show();

	//float ret = Cal();
	//printf("%f\n", ret);

	//const char* str = "abcd1234";
	//printf("%d\n", MyStrlen(str));

	//printf("%d\n", g_val);

	printf("%d\n", MyAdd(10, 20));

	//int ret = MyDiv(30, 6);
	//printf("%d\n", ret);

	system("pause");
	return 0;
}