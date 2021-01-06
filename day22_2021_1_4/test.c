#include <stdio.h>
#include <assert.h>
#include <windows.h>

const char* my_strstr(const char* str, const char* sub){
	assert(str);
	assert(sub);

	const char* str_start = str;
	const char* str_p = str;
	const char* sub_p = sub;

	while (*str_start){
		str_p = str_start;
		sub_p = sub;

		while (*sub_p && *str_p && *str_p == *sub_p){
			str_p++, sub_p++;
		}
		if (*sub_p == '\0'){
			return str_start;
		}
		str_start++; //��һ�δ����￪ʼ�Ƚ�
	}
	return NULL;
}

//str = NULL; �� *str = '\0';�ǲ�һ����
//�����൱����str = "";
int my_strcmp(const char* str1, const char* str2){
	assert(str1);
	assert(str2);

	int ret = 0;
	while (!(ret = *(unsigned char*)str1 - *(unsigned char*)str2) && *str1){
		str1++, str2++;
	}
	if (ret > 0){
		return 1;
	}
	else if (ret < 0){
		return -1;
	}
	else{
		//TODO
		return 0;
	}
	return 0;
}

//struct stu{char name[32];int age;char addr[64];}x;
//int                                             a;
//typedef int a;
//typedef struct stu{ char name[32]; int age; char addr[64]; }x;

//�ṹ��������Ƿ�һ�£�ȡ�����Ƿ���ͬһ���ṹ�嶨��ı��������������ṹ���Ա��ȫһ��
//��Ҳ���������ͣ�����
//struct {
//	int a;
//	int b;
//	char c;
//}x;
//
//struct {
//	int a;
//	int b;
//	char c;
//}*p;

struct node{
	int data;
	struct node* next;//��
	//struct Node next;//�Ƿ�������
};

typedef struct Node{
	int data;
	struct Node* next;
	int z[5];
}Node;

//����1.�ṹ���ڲ��Ǵ����ڴ��������ģ��ڴ�������⣬��Ӱ��ṹ������Ĵ�С
struct A{//15->16->24:�ڴ����
	short a;//1//start:0,2,��Ȼ��һ��Ԫ�ز����Ƕ��룬���ǵ�һ��Ԫ���ж�����
	int b;//2//start:2+2,4
	double c;//4//start:8,8
	char d;//8//start:16,1
	//2+2+4+8+1=17+7=24
};

struct B{
	char c;
};

//Ϊʲô&&��ʲô��2.��ΪӲ��Լ�������ܻᵼ��cpu�ô�������ӣ�Ч�ʽ��͡��ռ�����ȡʱ��Ĳ��ԣ��ڴ����
//����ڴ���룺3.

int main()
{
	//��ʼ��֪��
	//����������ڴ�Ļ�����λ���ֽ�
	//������������ȡ�ڴ��е��κ�һ���ֽ���
	//�ܣ����ǣ��������ΪӲ����Ƶ�ԭ�򣬼������ȡ
	//���ݵ�ʱ�򣬱�����ض�Ҫ�����ʼλ�ÿ�ʼ��ȡ��
	//���裺�������ȡ�ڴ棬�����4����������ַ����ʼ��ȡ
	//������ͨ�������ڴ�ռ䣬������CPU�ô�Ӳ�����ƣ�����Ч�ʵķ�ʽ�����ǽ����ڴ����
	//�ڴ����ı��ʣ��ÿռ�����ȡʱ��

	//printf("%d\n", sizeof(struct A));
	//printf("%d\n", sizeof(struct B));

	struct A obj;
	printf("%p\n", &obj);
	printf("%p\n", &obj.a);
	printf("%p\n", &obj.b);
	printf("%p\n", &obj.c);
	printf("%p\n", &obj.d);
	printf("%d\n", sizeof(obj));

	//int a;
	//printf("hello world");
	//a = 10;
	//�����ȶ��壬��ʹ��
	//��Ҫ��ʱ���ٶ���
	//old:�����Ķ��崦��ʹ�ô����Ƿ���ģ����������ǽ����Ķ���ά����
	//�����飩new:��Ҫ��ʱ���ٶ��壬�ô��Ǳ����Ķ���ͱ�����ʹ������һ��ģ��������ǽ����Ķ���ά����

	//Node x;
	//x = { 10, NULL, { 1, 2, 3, 4, 5 } };//���������帳ֵ

	//Node x = { 10, NULL, { 1, 2, 3, 4, 5 } };

	//printf("%d\n", sizeof(struct Node));

	//struct Node node1;
	//struct Node node2;
	//node1.next = &node2;

	//p = &x;

	//a b;
	//x b;
	//struct stu tom;
	//int a;

	//const char* str = "hello 123 abc456xyz, 12,xy1234";
	//const char* sub = "xyz1";
	//printf("%s\n", my_strstr(str, "\0"));

	//const char* str1 = "abcd123efgxyz";
	//const char* str2 = "abcD123efgxyz";
	//printf("ret = %d\n", my_strcmp(str1, str2));

	//unsigned char a = 10;
	//unsigned char b = 20;
	//int ret = a - b;
	//printf("%d\n", ret);
	//printf("%d\n", a-b);
	//printf("%u\n", a - b);

	//��ӡϵͳ�ڲ�ASSII���
	//unsigned int c = 0;
	//for (; c <= 255; c++){
	//	if (c % 15 == 0){
	//		printf("\n");
	//	}
	//	printf("%c ", c);
	//}
	//printf("\n");

	//printf("%c ", 1);

	system("pause");
	return 0;
}