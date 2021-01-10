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

	//���������Ҫ�������ݿ�����ɾ��ֻҪ����������Ч����
	//char* str = NULL;
	//str = GetMemory();
	//printf(str);

	//ջ����ʲôʱ��ʹ�ã�
	//�����Ҫ��̬�ڴ�-heap
	//�����Ҫ�Ŀռ�ϴ�-heap
	//��Ҫ��ȫ�֡��洢-heap

	//int* p = (int*)malloc(100);
	//free(p);
	//free(p);//�ظ��ͷ�

	//int* p = (int*)malloc(100);
	//p++;
	//free(p);//���ֲܾ��ͷ�

	//int a = 10;
	//int* p = &a;
	//free(p);
	//�����������ջ�Ͽ��ٿռ�
	//ֻ�жѿռ���Ҫfree

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

	//old_addr = realloc(old_addr, 10);//���ַ�ʽ�ǲ��еġ�reallocʧ�����أ��ѿռ䶪ʧ���ڴ�й©

	//char* new_addr = realloc(old_addr, 10);
	//if (NULL == new_addr){
	//	perror("realloc");
	//	return 2;
	//}
	//���ʹ�õ�һ����new_addr,����free. old_addr����ʹ�ã�����freeҲ�����ٲ���old_addr
	//printf("old address: %p\n", old_addr);
	//printf("new address: %p\n", new_addr);

	//printf("������Ҫ�����������ݵĸ���# ");
	//int num = 0;
	//scanf("%d", &num);
	////int* ptr = (int* )malloc(num*sizeof(int));//�����ʼ��
	//int* ptr = calloc(num, sizeof(int));//��ʼ��
	//if (NULL == ptr){
	//	perror("malloc error!");
	//	return 1;
	//}
	//printf("��������Ҫ������������# ");
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
	////һ��ʵ������ռ�Ĵ�С��Ҫ��΢����������Ҫ���ڴ�ռ��С��,��������Ҫ8�ֽڣ�ʵ��>8
	////������Ŀռ䣬���Ǹ��û��õģ��Ǹ�ϵͳ���й����
	//printf("before:%p\n", ptr);
	//free(ptr);//���û���ͷţ�������ڴ�й¶
	//printf("after:%p\n", ptr);//���ǰѿռ��ͷ��ˣ��ѵ�free�����Զ���ptr��ΪNULL�𣿲���
	////һ��ָ��ָ��һ��û��ʹ��Ȩ�޵Ŀռ䣬������ָ�����ǽ���Ұָ�루����ָ�룩
	////ptr[3] = 0;
	//ptr = NULL;

	system("pause");
	return 0;
}