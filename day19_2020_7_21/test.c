#include <stdint.h>
#include <string.h>
#include <math.h>
#include <windows.h>

#pragma warning (disable:4996)

//typedef struct pos{
//	int x;
//	int y;
//	char addr[128];
//	int list[2000];
//	int* p;
//}pos_t;
//
//struct pos{
//	int x;
//	int y;
//	char addr[128];
//	int list[2000];
//	int* p;
//}x = { 23, 45, "����ʡ�����г�����xxx��ѧ��", { 1, 2, 3, 4, 5 },NULL };//���Ƽ�

//typedef struct pos{
//	int x;
//	int y;
//	char addr[128];
//	int list[2000];
//	int* p;
//}pos_t, *pos_p, pos_arr[10];//����������

//struct pos{
//	int x;
//	int y;
//	char addr[128];
//	int list[2000];
//	int* p;
//}pos_t, *pos_p, pos_arr[10];//û��typedef ���Ǿ��Ǳ���

struct stu{
	char name[16];
	int age;
	char sex;
	int score[5];
	char big[1024 * 100];
};

void Show(struct stu *x)
{
	//printf("Show: %p\n", &x);
	//printf("name: %s\n", x.name);
	//printf("age�� %d\n", x.age);
	//printf("sex�� %c\n", x.sex);
	//int num = sizeof(x.score) / sizeof(x.score[0]);
	//int i = 0;
	//for (; i < num; i++){
	//	printf("%d : %d\n", i, x.score[i]);
	//}
}

int Count(int x)
{
	int count = 0;
	while (x){
		x /= 10;
		count++;
	}
	return count;
}

int IsNarcissus(int x)
{
	int old_data = x;
	int count = Count(x);
	int sum = 0;
	while (x){
		int temp = x % 10;
		sum += (int)pow(temp, count);
		x /= 10;
	}
	return sum == old_data;

	//return sum == old_data ? 1 : 0;

	//if (sum == old_data){
	//	return 1;
	//}
	//else {
	//	return 0;
	//}//��дelse���֣�Ĭ�Ϸ���1
}

void show(int n)
{
	//�ϰ벿
	int i = 0;
	for (; i < n; i++){
		int j = 0;
		for (; j < n - 1 - i; j++){
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++){
			printf("*");
		}
		printf("\n");
	}
	//�°벿
	for (i = 0; i < n - 1; i++){
		int j = 0;
		for (; j <= i; j++){
			printf(" ");
		}
		for (j = 0; j < 2 * n - 3 - 2 * i; j++){
			printf("*");
		}
		printf("\n");
	}
}

int main()
{


	//��ӡ����
	//char graph[100][100] = {
	//	"         *",
	//	"        ***",
	//	"       *****",
	//	"      *******",
	//	"       *****",
	//	"        ***",
	//	"         *",
	//};
	//int i = 0;
	//for (; i < 7; i++){
	//	printf("%s\n", graph[i]);
	//}

	//�ϰ벿
	//*:i = 0;i= [(2*i)+1]
	//�ո�(n-1)-i
	//�°ಿ
	//*:0 13 2*n-3
	//  1 11
	//  2  9
	//show(8);

	//��ӡˮ�ɻ���
	//���0��100000֮������С�ˮ�ɻ������������
	//��ˮ�ɻ�������ָһ��nλ��
	//���λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
	//��:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
	//1.��дһ���������ж�һ�������Ƿ��ǡ�ˮ�ɻ�����
	//2.�ж������ж��٣�n��λ��ȡ��ÿ��λ������x^n + ...
	//3.for(0~100000)
	//int i = 0;
	//for (; i < 100000; i++){
	//	if (IsNarcissus(i)){//ִ���������ʱ����ִ�к����������γ�һ������ֵ�Ժ�Ȼ��if���ж�
	//		printf("%d ", i);
	//	}
	//}
	//printf("\n");

	//�ṹ����һ�־ۺ�����
	//int char ....����������

	//struct stu stux;
	////stux.name = "zhangsan";//���鲻�ܱ����帳ֵ������Ҫ��strcpy��������������и�ֵ
	//strcpy(stux.name, "zhangsan");
	//stux.age = 10;//�������Ա�ֱ�Ӹ�ֵ

	//struct stu stux = { "tom", 21, 'm', { 91, 90, 62, 90, 80 } };
	//printf("main: %p\n", &stux);//�ṹ��ĵ�ַ
	//printf("main: %p\n", stux.name);//�ṹ����������Ԫ�صĵ�ַ
	//printf("main: %p\n", &(stux.name));//�ṹ��������ĵ�ַ

	//printf("main: %p\n", &stux + 1);
	//printf("main: %p\n", stux.name + 1);
	//printf("main: %p\n", &(stux.name) + 1);

	//int i = 0;
	//for (; i < 1000000; i++){
	//Show(&stux);
	////�ṹ�岻̸���˻�����ά��֮������⣬�ṹ��Ҫ������Ӧ��Ӳ��������
	////����ϵͳ������ʱ�䣬�ռ䣩��ϴ�
	////����ṹ�崩��ʱ����ַ������Ӧ�����β���ָ��
	//}

	//struct stu stux = { "tom", 21, 'm', { 91, 90, 62, 90, 80 } };
	//struct stu *p = &stux;
	//printf("name: %s\n", (*p).name);
	//printf("name: %s\n", p->name);
	//p->age = 80;

	//struct stu stux = { "tom", 21, 'm', { 91, 90, 62, 90, 80 } };
	//printf("name: %s\n", stux.name);
	//printf("age�� %d\n", stux.age);
	//int num = sizeof(stux.score) / sizeof(stux.score[0]);
	//int i = 0;
	//for (; i < num; i++){
	//	printf("%d : %d\n", i, stux.score[i]);
	//}

	//pos_arr arr;//���Ƽ�
	//pos_t arr[10];//�Ƽ�

	//int a = 10;
	//pos_t sust_pos = { 23, 45, "����ʡ�����г�����xxx��ѧ��", \
		//								{ 1, 2, 3, 4, 5 },/*NULL*/&a};
	//pos_p p = &sust_pos;

	//int a = 10;
	//pos_t sust_pos = { 23, 45, "����ʡ�����г�����xxx��ѧ��", \
		//							{ 1, 2, 3, 4, 5 },/*NULL*/&a};
	//pos_t xayd_pos = { 0, 0, "", { 0 } };
	//pos_t xaca_pos = { 0 };
	//pos_t skd_pos;//��̫�Ƽ�


	//pos_t sust_pos = { 23, 45 };//��ʼ��
	////sust_pos = { 23, 45 };//�﷨����
	//sust_pos.x = 23;//��ֵ
	//sust_pos.y = 45;//��ȷ

	//int arr[5] = { 1, 2, 3, 4, 5 };
	//arr[5] = { 1, 2, 3, 4, 5 };//�﷨����
	//arr= { 1, 2, 3, 4, 5 };//�﷨����

	system("pause");
	return 0;
}