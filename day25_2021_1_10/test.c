#include <stdio.h>
#include <windows.h>

#pragma warning(disable:4996)

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}

void GetMemory(char** p, int num)
{
	*p = (char*)malloc(num);
}

char* GetMem(int num)
{
	char* temp = (char*)malloc(num);
	return temp;
}

int g_unval;
int g_val = 100;

int main()
{
	printf("code addr: %p\n", main);
	const char* str = "helloworld";
	printf("readonly : %p\n", str);
	printf("init	 : %p\n", &g_val);
	printf("init	 : %p\n", &g_unval);
	char* mem = (char*)malloc(10);
	char* mem1 = (char*)malloc(10);
	char* mem2 = (char*)malloc(10);
	char* mem3 = (char*)malloc(10);
	printf("heap	 : %p\n", mem);
	printf("heap	 : %p\n", mem1);
	printf("heap	 : %p\n", mem2);
	printf("heap	 : %p\n", mem3);
	printf("stack	 : %p\n", &str);
	printf("stack	 : %p\n", &mem);
	printf("heap	 : %p\n", mem1);
	printf("heap	 : %p\n", mem2);
	printf("heap	 : %p\n", mem3);

	//char* str = (char*)malloc(100);
	//strcpy(str, "hello");
	//free(str);
	//if (str != NULL)
	//{
	//	strcpy(str, "world");
	//	printf(str);
	//}

	//char* str = GetMem(100);

	//char* str = NULL;
	//GetMemory(&str, 100);
	//strcpy(str, "hello");
	//printf(str);

	//拷贝是真的要进行数据拷贝，删除只要设置数据无效即可
	//char* str = NULL;
	//str = GetMemory();
	//printf(str);

	//栈，堆什么时候使用？
	//如果需要动态内存-heap
	//如果需要的空间较大-heap
	//需要“全局”存储-heap

	//int* p = (int*)malloc(100);
	//free(p);
	//free(p);//重复释放

	//int* p = (int*)malloc(100);
	//p++;
	//free(p);//不能局部释放

	//int a = 10;
	//int* p = &a;
	//free(p);
	//定义变量是在栈上开辟空间
	//只有堆空间需要free

	//exit(EXIT_FAILURE);
	//printf("%d\n", EXIT_FAILURE);

	//char* old_addr = (char*)malloc(5);
	//if (NULL == old_addr){
	//	perror("malloc");
	//	return 1;
	//}
	//for (int i = 0; i < 5; i++){
	//	old_addr[i] = i;
	//}
	//char* tmp = realloc(old_addr, 20);
	//old_addr = (tmp != NULL ? tmp : old_addr);
	//for (int i = 5; i < 20; i++){
	//	old_addr[i] = 2 * i;
	//}
	//free(old_addr);


	//char* old_addr = (char*)malloc(5);
	//if (NULL == old_addr){
	//	perror("malloc");
	//	return 1;
	//}
	//char* tmp = realloc(old_addr, 100000);
	//if (NULL == tmp){
	//	perror("realloc");
	//	return 1;
	//}
	//old_addr = tmp;
	//old_addr = (tmp != NULL ? tmp : old_addr);

	//old_addr = realloc(old_addr, 10);//这种方式是不行的。realloc失败了呢？堆空间丢失，内存泄漏

	//char* new_addr = realloc(old_addr, 10);
	//if (NULL == new_addr){
	//	perror("realloc");
	//	return 2;
	//}
	//后边使用的一定是new_addr,包括free. old_addr不再使用，包括free也不能再操作old_addr
	//printf("old address: %p\n", old_addr);
	//printf("new address: %p\n", new_addr);

	//printf("请输入要参与计算的数据的个数# ");
	//int num = 0;
	//scanf("%d", &num);
	////int* ptr = (int* )malloc(num*sizeof(int));//不会初始化
	//int* ptr = calloc(num, sizeof(int));//初始化
	//if (NULL == ptr){
	//	perror("malloc error!");
	//	return 1;
	//}
	//printf("请输入你要计算的相关数据# ");
	//for (int i = 0; i < num; i++){
	//	scanf("%d", ptr + i);//&prt[i]
	//}
	//int sum = 0;
	//for (int i = 0; i < num; i++){
	//	if (i == num - 1){
	//		printf("%d = ", ptr[i]);
	//	}
	//	else{
	//		printf("%d + ", ptr[i]);
	//	}
	//	sum += ptr[i];
	//}
	//printf("%d\n", sum);
	////一般实际申请空间的大小是要稍微大于你所需要的内存空间大小的,比如你需要8字节，实际>8
	////多出来的空间，不是给用户用的，是给系统进行管理的
	//printf("before:%p\n", ptr);
	//free(ptr);//如果没有释放，就造成内存泄露
	//printf("after:%p\n", ptr);//我们把空间释放了，难道free不会自动对ptr置为NULL吗？不会
	////一个指针指向一段没有使用权限的空间，这样的指针我们叫做野指针（悬垂指针）
	////ptr[3] = 0;
	//ptr = NULL;

	system("pause");
	return 0;
}