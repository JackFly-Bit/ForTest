#include "test.h"

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &c);

	int x[] = { 1, 2, 3, 4, 5 };
	int i = 0;
	for (; i < 5; i++){
		printf("a[%d] ; %p\n", i, &x[i]);
	}

	//int a[10] = { 1, 2, 3 };
	//printf("%p\n", *(a + 1));
	//printf("%p\n", a[1]);
	//printf("%p\n", *&a[1]);

	//printf("%p\n", a + 1);//数组名就是数组首元素的地址
	//printf("%p\n", &a[1]);

	//printf("%p\n", a);
	//printf("%p\n", (int)a + 1);

	//int a[10];
	//printf("%p\n", a);//&a[0]
	//printf("%p\n", a + 1);//&a[1] int* p = a; p +1
	//printf("%p\n", (int)a + 1);

	//double d = 3.14;
	//printf("%p\n", &d);
	//scanf("%f", &d);

	//int a = 0x11223344;
	//printf("%p\n", &a);

	//int a[10];
	//int num = sizeof(a) / sizeof(a[0]);
	//int i = 0;
	//for (; i < num; i++){
	//	printf("a[%d] : %p\n", i, &a[i]);
	//}

	//int a[] = { 11, 22, 33, 44, 55 };
	//int num = sizeof(a) / sizeof(a[0]);
	//int i = 0;
	//for (; i < num; i++){
	//	a[i] = i * 10;
	//}
	//for (i = 0; i < num; i++){
	//	printf("%d ",a[i]);
	//}
	//printf("\n");
	
	//int a[] = { 11, 22, 33, 44, 55 };
	//scanf("%d", &a[2]);
	//printf("%d\n", a[2]);

	//char arr[5];
	//scanf("%s", arr);//被整体当作字符串使用

	//int i = 0;
	//for (; i < 5; i++){
	//	scanf("%c", &arr[i]);//被当作普通的char数组
	//}
	//char []
	//1.被当作普通的char数组
	//2.被整体当作字符串使用
	//3.数组的空间是在对应函数的栈帧内部开辟的，换言之，是在栈上开辟的（常规情况）
	//char arr[5] = { 'a', 'b', 'c', 'd', '\0' };//"a" vs 'a'
	////char arr[] = "abcd1234";
	////int arr[10] = { 1, 2, 3 };
	////char* str = "hello";
	//int num = sizeof(arr) / sizeof(arr[0]);
	//printf("%s\n", arr);
	//int i = 0;
	//for (; i < num; i++){
	//	printf("%c\n", arr[i]);
	//}

	//int arr[N];

	//int res = nk(2, 10);
	//printf("res: %d\n", res);

	//int ret = DigitSum(1729);
	//printf("ret = %d\n", ret);

	//char *str = "abcd1234";//该字符串"abcd1234",不能被修改！！！
	//printf("before: %s\n", str);
	//ReverseString(str);
	//printf("after: %s\n", str);

	//printf("hello world!\n");

	system("pause");
	return 0;
}