#include <stdio.h>
#include <windows.h>

#pragma warning(disable:4996)

//void Show(/*int[][5]*/int (*a)[5], int n)
//{
//	int i = 0;
//	for (; i < n; i++){
//		int j = 0;
//		for (; j < 5; j++){
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}

void Show(int* a, int n)
{
	int i = 0;
	for (; i < n; i++){
		printf("%d ", *(a + i));
	}
	printf("\n");
}

void Reverse(char* str)
{
	if (NULL == str){
		return;
	}
	char *head = str;
	char *end = str + strlen(str) - 1;
	while (head < end){
		char temp = *head;
		*head = *end;
		*end = temp;
		head++, end--;
	}
}

int Sn(int a, int n)
{
	int sum = 0;
	int i = 0;
	int sn = a;
	for (; i < n; i++){
		if (i == n - 1){
			printf("%d", sn);
		}
		else{
			printf("%d+", sn);
		}
		sum += sn;
		sn = sn * 10 + a;
	}
	return sum;
}

//定义了一个结构体类型
typedef struct Student/*不加Student 叫做匿名结构体 无法在函数里定义变量 不推荐 */{
	char name[16];
	int age;
	char telephone[16];
}stu_t;

int main()
{
	//struct Student LiuBei;
	stu_t LiuBei;

	//场景：一个教室里的所有学生 可以用数组形态表示

	//int a = 0;
	//int n = 0;
	//printf("Please Enter Your a && n: ");
	//scanf("%d %d", &a, &n);
	//int result = Sn(a, n);
	//printf("= %d\n", result);

	//char str[] = "abcd1234";//"4321dcba"
	//printf("before: %s\n", str);
	//Reverse(str);
	//printf("after: %s\n", str);

	//int arr[] = { 1, 2, 3, 4, 5 };
	//short *p = (short*)arr;
	//int i = 0;
	//for (i = 0; i<4; i++)
	//{
	//	*(p + i) = 0;
	//}

	//for (i = 0; i<5; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	//int a[] = { 1, 2, 3, 4, 5, 6 };
	//int num = sizeof(a) / sizeof(a[0]);
	//Show(a, num);

	//在32位或64位下整形都是4个字节
	//int(*p)[];
	//int b[4];
	//p = &b;
	//int a[3][5] = { 0 };
	//Show(a, 3);
	//告警：“int (*)[]”和“int (*)[4]”数组的下标不同

	//int(*arr)[5];
	//int a[5];
	//arr = &a;
	//printf("&a[0]: %p\n", a); 
	//printf("&a: %p\n", &a);
	//printf("arr: %p\n", arr);
	//printf("arr+1: %p\n", arr+1);
	//printf("&a[0]+1: %p\n", a+1);
	//printf("&a+1: %p\n", &a + 1);
	//数组指针int (*arr)[5]
	//整形数组，字符数组，指针数组int* arr[5]
	//char* arr[5];
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr)/sizeof(arr[0]));
	//char c = 'c';
	//arr[0] = &c;

	//int a = 10;
	//int *p = &a;
	//int *pp = &p;
	//printf("before:%p(a),%p(p),%p(pp),%p(&a),%p(&p)\n", a, p, pp, &a, &p);
	//*pp = 0xF;
	//printf("before:%p(a),%p(p),%p(pp),%p(&a),%p(&p)\n", a, p, pp, &a, &p);

	//p = 20;//p变量的内容变成20（&a）
	//pp = 20;//pp变量的内容变成20（&p）
	//*p = 20;//a = 20
	//*pp = 20;//p =20
	//**pp = 20;//a = 20
	system("pause");
	return 0;
}