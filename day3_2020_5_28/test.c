#include <stdio.h>
#include <windows.h>

//ȫ�ֱ���
//int global = 100;
//double weight = 160.5;

//void fun()
//{
//	printf("%f\n", weight);
//	//printf("%f\n", high);
//}

#pragma warning (disable:4996)

//#define AGE 120//�꣬����֪�⣬��������Ŀ�ά���ԣ�ΪʲôҪ�к꣩

//enum color{
//	YELLOW,
//	BLACK,
//	RED,
//	BLUE,
//};
int main()
{
	//C��û���ַ������͵ģ�������Ҫ����char*,����char[],������
	//�ַ�����ʹ�ã�
	char *str = "abc";
	char str1[] = "xyz";

	printf("%s\n",str);
	printf("%s\n", str1);

	//3;
	//'x';
	//char c = 'xy';
	//"xyz";
	//"x";

	//const int x = 100;//��ʼ��
	//x = 200;//��ֵ
	//enum color c = YELLOW;

	//int x = AGE;
	//int x1 = AGE;
	//int x2 = AGE;
	//int x3 = AGE;
	//int x4 = AGE;
	//int x5 = AGE;
	//int x6 = AGE;

	//int x = 0;
	//int y = 0;
	//printf("�������Ӧ�����ݣ�>");
	//scanf("%d %d",&x,&y);
	//int z = x + y;
	//printf("result:%d\n",z);

	//int x = 200;
	////int global = 300;
	//printf("%d,%d\n",x,global);

	//�ֲ�����
	//double high = 190.8;
	//printf("%f\n",weight);
	//printf("%f\n", high);
	//fun();

	//int high = 190;
	//float money = 1.8f;
	//char phone[12] = "12345678901";

	//int a = 10;

	//double m1 = 10.5;
	//double m2  = 1.5;

	//printf("%f\n", m1 + m2);

	//double pi = 3.14;
	//double r = 2;
	//printf("���:%f\n",pi*r*r);

	//char c = 'A';
	//for (; c <= 'Z'; c++){
	//	printf("%c ",c);
	//}
	//printf("\n");

	//printf("char:%d\n", sizeof(char));//1
	//printf("short:%d\n",sizeof(short));//2
	//printf("int:%d\n",sizeof(int));//4
	//printf("long:%d\n",sizeof(long));//4
	//printf("llong:%d\n",sizeof(long long));//8
	//printf("float:%d\n",sizeof(float));//4
	//printf("double:%d\n",sizeof(double));//8
	//printf("long double:%d\n", sizeof(double));//8

	//printf("hello world��\n");
	system("pause");
	return 0;
}