#include <stdio.h>
#include <windows.h>

//#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning (disable:4996)

//1.����ֵ��void
//2.����������������֪����˼
//3.�β��б�MyAdd(x,y),ʵ�Σ�ʵ�ʲ���
//�βΣ���ʽ����
//4.�����壺�������ĺ��Ĵ���
//�������ã����������>�ӹ�����->���ؽ��
//int MyAdd(int _x, int _y){
//	int _z = _x + _y;
//	return _z;
//}
//int MyMul(int _x, int _y){
//	int _z = _x * _y;
//	return _z;
//}
//int MyDiv(int _x, int _y){
//	if (0 == _y){
//		printf("div zero!\n");
//		return -1;
//	}
//	int _z = _x / _y;
//	return _z;
//}
//void show(){
//	printf("hello world\n");
//}
//int MyMax(int _x, int _y){
//	int _max = _x > _y ? _x : _y;
//	return _max;
//}

typedef unsigned long long ull_t;
//�ؼ��֣��������������ϵ����� -> �µ����ͣ����֣�
//�����������󣬷����Ƽ�������
int main(){
	//C��������32���ؼ���
	//unsigned long long x = 100;
	//unsigned long long y = 200;
	ull_t x = 100;
	ull_t y = 200;
	printf("%llu\n", x);
	printf("%llu\n", y);
	//printf("Please Enter<x,y>:");
	//int x = 0;
	//int y = 0;
	//scanf("%d %d", &x, &y);
	//int max = MyMax(x, y);
	//printf("max = %d\n",max);

	//char s[] = { 'b', 'i', 't' };
	//printf("%d,%s\n",sizeof(s),strlen(s));
	//printf("%d\n",sizeof(s));
	//printf("%d\n",strlen(s));
	////show;
	//show();
	//int a = (1, 2, 3, 4, 5, 6);
	//printf("%d\n",a);

	//printf("�������Ӧ����������<x,y>:");
	//int x = 0;
	//int y = 0;
	//scanf("%d %d",&x,&y);
	//int max = x > y ? x : y;
	////if (x > y){
	////	max = x;
	////}
	////else{
	////	max = y;
	////}
	//printf("max = %d\n",max);
	//int x = 0;
	//int y = 30;

	//x == 1 && printf("ok\n");
	//x == 1 || printf("ok\n");

	//int i = 10;
	////int x = ++i;//ǰ��++
	//int x = i++;//����++

	//printf("%d\n", i);
	//printf("%d\n", x);

	//unsigned int x = 1;
	//printf("%u\n", ~x);
	//system("calc");

	//�������ڴ������о����ַ��
	//int x = 10;
	//printf("%d\n", x);
	//printf("0x%p\n", &x);


	//int x = 10;
	//printf("%d\n", +x);
	//printf("%d\n", -x);

	//int flag = 1;
	//if (!(1 == flag)){
	//	printf("hello world!\n");
	//}
	//else {
	//	printf("hello bit!\n");
	//}

	//���������
	//1.���ٿռ䣬��С�����;���
	//2.��ռ������������

	//int x = 0;//��ʼ�����ѿ��ٿռ�ͷ�����������һ����У���˼��
	////��ֵ����ǿ��
	//int y;//���ٿռ�
	//y = 20;//������

	//printf("%d\n", 2&6);//& -> ��λ��

	//int x = 15;
	//printf("%d\n", x >> 1);//����������һλ�൱�ڶ�����x/2
	//printf("%d\n", x << 2);

	//int x = 10;
	//int y = 5;
	//printf("%d\n", x + y);
	//printf("%d\n", x - y);
	//printf("%d\n", x * y);
	////printf("%d\n", x / 0);//shift + F5;
	//printf("%d\n", 10 % 3);

	//int arr[10];//�ֲ�����û�о�����ʼ�����������������ֵ
	//int arr[] = { 1, 2, 3, 4, 5};
	//int num = sizeof(arr) / sizeof(arr[0]);

	////printf("%d\n",sizeof(arr));//��������Ĵ�С
	////printf("%d\n", sizeof(arr[0]));//һ��Ԫ�صĴ�С
	////printf("%d\n",sizeof(arr)/sizeof(arr[0]));
	////����
	//int total = 0;
	//int i = 0;
	//for (; i < num;i++){
	//	printf("arr[%d] : %d\n", i, arr[i]);//arr[i]

	//	total = total + arr[i];//total = 1 + 2;
	//}
	//printf("total : %d\n",total);

	//int x = 0;
	//int y = 0;
	//printf("�������������<x,y>:");
	//scanf("%d %d",&x, &y);
	//printf("result : %d\n", MyAdd(x, y));
	//printf("result : %d\n", MyMul(x, y));
	//int z = MyDiv(x, y);
	//printf("result : %d\n", z);
	//int result = MyAdd(x, y);
	//printf("result : %d\n",result);
	system("pause");
	return 0;
}