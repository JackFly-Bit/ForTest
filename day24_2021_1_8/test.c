#include <stdio.h>
#include <windows.h>

#pragma warning(disable:4996)

#define RED 0
#define BLACK 1
#define GREEN 2
#define YELLOW 3
#define BLUE 4

//ö�����ͱ�����int,����Ĭ������Ǵ�0��ʼ���ε�����int
//ö����һ�����ͣ��ڱ����ʱ���������ͼ�飬���ǻ����滻ԭ������������У����������κμ�鹤����
//���Ӧ�ó���>>ö��
//typedef enum color{
//	RED = -100,
//	BLACK,
//	GREEN,
//	YELLOW,
//	BLUE
//}color_t;

//�����屾��Ĵ�С�����ǰ����е����ͼ������Ĵ�С
//������ԣ�������Ĵ�С���������������Ԫ�صĴ�С�����ġ�������֮������Ԫ�ع���ռ�
//��ʹ��union��ʱ��һ��ֻ�����һ��Ԫ��
//union _un{
//	int a;
//	char b;
//	char c;
//	char d;
//	char e;
//	char f;
//};

//union _un{
//	int a;
//	char b;
//};

//������ҲҪ�����ڴ��������
//����������մ�С��Ҫ�������������ڵ���������
union _un{//8
	char a[7];
	int b;
};

int main()
{
	//���������￪�ٿռ䣿ջ
	//������±�����ǳ�����Ҳ����ȷ��ֵ������Ĵ�С�ڱ�������У��Ѿ�ȷ����
	//int a[10];
	//char b[20];
	//double c[30];
	//short* d[40];
	//������û�г�����ʹ���ڴ�ʱ������֪����Ҫ���٣������������У�����ȷ���ġ�
	//���棺��������������int�У����ֵ����Ҫ����ǰ����

	//1.�ռ��ڲ�ͬ�������£�������Ҫ���ϵ��������´���Ŀ���չ���½�
	//2.�п�����Ϊ�ռ仮�ֲ��������ܵ��¿ռ��˷ѵ�����
	//3.һ����ջ�ϣ���һ����Ч����Ŀռ������޵�
	//int a[100 * 100 * 100];//1024 * 1024 = 1MB
	//���ԣ�������Ҫ����̬�ڴ����
	//1.�������ܹ��ڳ��������ڼ����������ٿռ�Ĵ�С����Ҫ���ٸ����٣����㲻ͬ������
	//2.��Чʹ�ÿռ�
	//3.��>ջ�ռ�

	//1.��ȷ�������ж�̬�ڴ�ʹ�õ������
	//2.��ȷ���ǽ�����Ҫʹ�õ��ڴ�ָ���ǣ��ѿռ�
	//�ͻ��˳���ͷ��������������ڴ�й¶����

	//ʲôʱ���öѣ�ʲôʱ����ջ��

	printf("�������ж��ٸ�����#");
	int num = 0;
	scanf("%d", &num);
	int* p = (int*)malloc(num*sizeof(int));
	if (NULL == p){
		printf("malloc error!\n");
		return 1;
	}
	//�ռ�����success
	printf("��������������б�#");
	for (int i = 0; i < num; i++){
		scanf("%d", p + i);
		//scanf("%d", &p[i]);
	}
	int max = p[0];//*(p+0)
	for (int i = 1; i < num; i++){
		if (max < p[i]){
			max = p[i];
		}
	}
	printf("max: %d\n", max);
	free(p);

	//unsigned char puc[4];
	//struct tagPIM
	//{
	//	unsigned char ucPim1;
	//	unsigned char ucData0 : 1;
	//	unsigned char ucData1 : 2;
	//	unsigned char ucData2 : 3;
	//}*pstPimData;
	//pstPimData = (struct tagPIM*)puc;
	//memset(puc, 0, 4);
	//pstPimData->ucPim1 = 2;
	//pstPimData->ucData0 = 3;
	//pstPimData->ucData1 = 4;
	//pstPimData->ucData2 = 5;
	//printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);

	//printf("%d\n", sizeof(union _un));

	//union _un obj;
	//obj.a = 0x11223344;//0x11 22 33 44
	//obj.b = 0x55;
	//printf("%d\n", obj.b);
	////�����С������
	//union _un obj;
	//obj.a = 1;//0x00 00 00 01
	//printf("%d\n", obj.b);

	//union _un obj;
	//obj.a = 0;
	//obj.b = 10;

	//printf("%p\n", &obj);
	//printf("%p\n", &(obj.a));
	//printf("%p\n", &(obj.b));
	//printf("%d\n", sizeof(obj));//int a = 10; sizeof(a) sizeof(int) 
	//printf("%d\n", sizeof(union _un));

	//int c = RED;

	//color_t c = RED;

	////enum color c = RED;
	//enum color c = 1000;
	//printf("%d\n", RED);
	//printf("%d\n", BLACK);
	//printf("%d\n", GREEN);
	//printf("%d\n", YELLOW);

	system("pause");
	return 0;
}