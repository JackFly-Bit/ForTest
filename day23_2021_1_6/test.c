#include <stdio.h>
#include <windows.h>

//struct A{//24,24
//	char a[3];//3
//	double b;//5 + 8
//	short *c;//4
//};

//struct B{//16,16
//	double b;//8
//	char a[3];//3
//	short **c;//1 + 4
//};

//struct C{//16,16
//	short c;//2
//	char a;//1
//	double *b[3];//1 + 4*3
//
//};

//#pragma pack(2)//����Ϊ1
//#pragma pack()//�ָ�Ĭ��
//struct S3{//14,S3�Ķ�������:2
//	double d;//8
//	char c;//1
//	int i;//1 + 4
//};

//struct S4{//32
//	char c1;//1
//	struct S3 s3;//7 + 16
//	double d;//8
//};

//struct B{//24,������:8
//	char a;//1
//	int b;//3 + 4
//	char c[5];//5
//	double e;//3 + 8
//};
//
//struct A{//136
//	char* a[3];//4 * 3
//	char b[3];//3
//	double* c;//1 + 4
//	struct B* b1;//4
//	double d;//8
//	struct B b2;//24 -> 56
//	struct B b3[3];//24 * 3 -> 72 + 56 = 128
//	char e;//1
//};
//
//struct C{
//	char buf[1024 * 100];
//};
//
//void fun(struct C* obj)
//{
//	//obj->buf
//}

//λ�Σ��ڴ�ռ�������Ų�������ƽ̨Ӱ���
//λ�εĿռ���䣬���á�ѹ���洢���ķ�ʽ�����ʣ�µı���λ��Ŀ
//�ܹ����ɵ�ǰ��������Ҿͼ�һ����������ܣ����¿��٣���λ��λ
//���ڲ���һ�����͵Ĵ�С
struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

struct expressBill{
	int send_name : 16;
	int recv_name : 16;
	int send_addr : 30;
	int recv_addr : 30;
	int postal_code : 8;
	int send_tel : 24;
	int recv_tel : 24;
};

enum color{
	RED,
	WHILE,
	BLACK,
	YELLOW
};

#define RED 1
#define WHILE 2

int main()
{
	enum color myhat = RED;
	printf("%d\n", RED);
	printf("%d\n", WHILE);
	printf("%d\n", BLACK);
	printf("%d\n", YELLOW);

	struct expressBill eb = { 1, 1, 1, 1, 1, 1, 1 };
	char* temp = "����";
	char buf[128];
	memcpy(buf, &eb, sizeof(eb));
	memcpy(buf + sizeof(eb), temp, strlen(temp));

	struct S s = { 0 };
	printf("%d\n", sizeof(struct S));
	printf("%p\n", &s);
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	//printf("%d\n", sizeof(struct A));

	//struct C obj;
	//for (int i = 0; i < 1000000; i++){
	//	fun(&obj);
	//}

	//printf("%d\n", sizeof(struct B));
	//printf("%d\n", sizeof(struct A));

	//printf("%d\n", sizeof(struct S3));
	//printf("%d\n", sizeof(struct S4));

	//printf("%d\n", sizeof(struct A));
	//printf("%d\n", sizeof(struct B));
	//printf("%d\n", sizeof(struct C));

	system("pause");
	return 0;
}