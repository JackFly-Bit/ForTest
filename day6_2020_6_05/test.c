#include <stdio.h>
#include <windows.h>

//void Show(){
//	static ���ξֲ�����ֻ�ı��˱�������������
//	�þ�̬�ֲ�����������������Ȼ���ڣ�����������������ڲŽ���������������������ʵ��û�б仯��
//	static int i = 0;//�ֲ��������Զ���������ʱ����
//	i++;
//	printf("current i is :%d, %p\n", i,&i);
//}

//����ֻ�ܶ���һ�Σ����ٿռ䣬�������ݣ����������Զ������������test.c��ĳ���ط������ȫ�ֱ�����
//ȫ�ֱ�����֧�ֿ��ļ����ʵ�
//extern int g_value;

//��������Ҳ��֧�ֿ��ļ����ʵ�
//extern void Show();

//ֻ���򵥵��ı��滻
//���ڴ����ά����
//�����Ķ�����������������֪����˼
//#define M 1234
//10*DOUBLE(10+1) 10*10+1+10+1
//Double(10) 10*10
//�궨�����ڱ���֮ǰ���еģ���������ʵ�����е�ʱ����е�
//DOUBLE(10+1) 10+1*10+1
//#define DOUBLE(x) x*x
//DOUBLE(10+1) (10+1)+(10+1)
//#define DOUBLE(x) (x)*(x)
//#define DOUBLE(x) x+x
//#define DOUBLE(x) ((x)+(x)��
//int Double(int x){
//	return x*x;
//}
int main(){

	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(long long*));
	//����ָ����32λ��ƽ̨�¶���4���ֽڡ�
	//����ָ����64λ��ƽ̨�¶���8���ֽڡ�
	

	//int a = 10;
	//int *p = &a;

	//printf("%p.%p, %d,%d\n", &a, p, a, *p);
	//��ָ����н����ã��������ָ����ָ��ı������������õ��Ǳ����Ŀռ仹������Ҫȡ��������ֵ������ֵ
	//*p = 20;
	//int b = *p;

	//printf("%d,%d\n",a,b);
	//����������ڴ�Ļ�����Ԫ���ֽڣ�
	//��32λ��Ϊ����2^32*1�ֽ� = ��2^10��*��2^10��*��2^10����2^2��*1�ֽ� = 4GB
	//int a = 10;
	//p��һ��������p��û�п��ٿռ��أ��У�32λ����4�ֽڣ���64λ����8�ֽڣ�
	//��ַ����������
	//���ݿ��Է��ڿռ������𣿿���
	//p<-��ַ
	//int *p = &a;
	//int x;
	//int *p;










	//printf("%d\n", Double(10));
	//printf("%d\n",10*DOUBLE(10+1));

	//int x = M;
	//int Mx =10;
	//printf("M = %d\n", x);
	//printf("M = %d\n", M);

	//Show();
	/*printf("%d\n", g_value);*/
	//int i = 0;
	//for (; i < 10; i++){
	//	Show();
	//	Sleep(500);
	//}

	system("pause");
	return 0;
}