#include <stdio.h>
#include <windows.h>

#pragma warning (disable:4996)

void Swap(int *xp, int *yp)
{
	*xp ^= *yp;
	*yp ^= *xp;
	*xp ^= *yp;

	//int temp = *xp;
	//*xp = *yp;
	//*yp = temp;
}

int CountOne(int x)
{

	//x = 01000000000000000000
	//x &= (x-1);
	//00000100010001000  (x)(old)
	//00000100010000111  (x - 1) & x
	//------------------
	//00000100010000000   x (new)
	//00000100001111111 & (x - 1) & x
	//-----------------
	//00000100000000000
	//00000011111111111 & (x - 1) & x
	//-----------------
	//00000000000000000
	//code3
	int count = 0;
	while (x){
		x &= (x - 1);
		count++;
	}
	return count;

	//code2
	//int count = 0;
	//while (x){
	//	if (x % 2){
	//		count++;
	//	}
	//	x /= 2;
	//}
	//return count;

	//code1
	//int count = 0;
	//int i = 0;
	//while (i < sizeof(x)* 8){
	//	if (x & (1 << i)){
	//		count++;
	//	}
	//	i++;
	//}
	//return count;
}

int main()
{
	//���;���1.���ٿռ�Ĵ�С 2.�������ݵķ�ʽ
	//char c = 'a';
	//int a = c;
	//ǿת�ı�������ǿ������ݵķ�ʽ�����ݱ���û�б仯
	//float f = 1.0;
	//int a = (int)f;

	//ת��������ǿת,������ת�������ӣ����ַ�"12345" ת�����ַ� 12345��
	char *str = "12345";
	int n = 12345;

	//int i = 10;
	//int x = ++i;
	////int x = i++;
	//printf("%d,%d", x, i);

	//char a[10];
	//printf("%d\n", sizeof(a));//��������sizeof�е�������ʱ������������
	//printf("%d\n", sizeof(a + 1));//����������������Ԫ�صĵ�ַ��a+1����ڶ���Ԫ�صĵ�ַ,�����ǵڼ�����ַ��ֻҪ�ǵ�ַ����4���ֽ�
	//printf("%d\n", sizeof(a[1]));//��һ��Ԫ�صĴ�С��ӦΪ��char����������1

	//int a = 10;
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof a );//sizeof���Ǻ���
	//printf("%d\n", sizeof(10));
	//printf("%d\n", sizeof 10);
	//printf("%d\n", sizeof(int));
	////printf("%d\n", sizeof int);

	//int a = 10;
	////printf("%d\n", &a);
	////printf("%o\n", &a);
	////printf("%f\n", &a);
	////printf("%p\n", &a);
	////printf("0x%p\n", &a);
	//int* p = NULL;
	//p = &a;
	//int* q = p;

	//int x = 1;
	//printf("%d\n", !x);//�߼���
	//printf("%d\n", ~x);//��λ��

	//int a = 10;
	//a <<= 1;
	//a >>= 1;

	//float f = 3.14f;
	//double d = 1.234;
	//
	//int a = 10;
	//int b = 20;
	//int c;

	////���Ƽ�
	//c = b = a + 40;

	////�Ƽ�
	//b = a + 40;
	//c = b;

	//printf("%d\n", a);
	//printf("%d\n", b);
	//printf("%d\n", c);


	//��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ���
	//int x = 0;
	//int y = 0;
	//printf("������# ");
	//scanf("%d %d", &x, &y);
	//printf("before: %d, %d\n", x, y);
	//Swap(&x, &y);
	//printf("after: %d, %d\n", x, y);

	//�������������м��ܽ��ܣ�������ѹ����
	//int x = 10;
	//int y = 20;
	//printf("%d\n", x ^ y ^ x);//x ^ y ^ x -> 0 ^ y;//0 ^ 0 = 0 , 1 ^ 0 = 1
	//ע����λ�룬�����Ĳ���������������

	//int x = 10;
	//x >> -1;//Ϊ�������Ϊ

	//�߼���λ �����0��䣬�ұ߶��� ��> ��Ӧ���޷�������
	//������λ ����ø�ԭֵ�ķ���λ��䣬�ұ߶��� ��> ��Ӧ���з�������
	//int x = -1;
	//printf("%d\n", (unsigned int)x >> 1);
	//����������ʱ��Ҫ����һ�����CPU + �Ĵ�����
	//int x = 10;
	//printf("%u\n", x << 1);
	system("pause");
	return 0;
}