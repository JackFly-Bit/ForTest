//#include <stdio.h>���ͷ�ļ��е��������ֱ�Ӳ��뵽���ǵ�Դ�����У��滻��#include
#include <stdio.h>
#include <windows.h>

#define ADD(num, value) x##num += value

#define MAX(x, y) (x) > (y) ? (x) : (y)//�������ú��

//void fun()
//{
//	printf("%d\n", M);
//#define M 100
//	printf("%d\n", M);
//}

//#define M 10

//#define DEBUG

//#define DEBUG 0

#define DEBUG0 0
#define DEBUG1 1

//linux ����:gedit ������notepad++
//vim�Զ���װ���õ�ַ��https://github.com/askunix/VimForCpp
//�����м���"curl -sLf https://gitee.com/HGtz2222/VimForCpp/raw/master/install.sh -o ./install.sh && bash ./install.sh"�س����������룬ok(ע�ⲻҪʹ��root)
//��װgcc:"sudo yum -y install gcc-c++"(ע��Ҫ�����������)
//ping �ٶȿ��Ƿ�������(ctrl+c�������ԣ�
#define INT_P char*
typedef int* int_p;

int main()
{
	INT_P a, b;//char *aa,*bb;
	int_p e, f;
	printf("%d, %d\n", sizeof(a), sizeof(b));
	printf("%d, %d\n", sizeof(e), sizeof(f));

//#if defined()�ж����Ƿ񱻶���
//���Ƿ�Ϊ��VS���Ƿ񱻶���
//#if defined(DEBUG0)
//#ifdef DEBUG0
#ifndef DEBUG0
	printf("debug0\n");
#endif

//	//#if �ж����Ǳ��ʽ����Ƿ�Ϊ��
//#if DEBUG0
//	printf("DEBUG0\n");
//#elif DEBUG1
//	printf("DEBUG1\n");
//#else
//	printf("unknow\n");
//#endif

//	printf("1: %d\n",DEBUG);
//#if DEBUG
//	printf("2: %d\n",DEBUG);
//#endif

//	int i = 1;
//	int sum = 0;
//	for (; i <= 10; i++){
//#ifdef DEBUG
//		printf("debug version: %d\n", sum);
//#else
//		printf("release version: %d\n", sum);
//#endif
//		sum += i;
//	}
//	printf("%d\n", sum);

//	int i = 1;
//	int sum = 0;
//	for (; i <= 10; i++){
//#ifdef DEBUG
//		printf("before debug: %d\n", sum);
//#endif
//		sum += i;
//#ifdef DEBUG
//		printf("after debug: %d\n", sum);
//#endif
//	}
//	printf("%d\n", sum);

	//int i = 0;
	//for (; i < M; i++){
	//	printf("...%d\n", i);
	//}

//#define M 100
//	printf("%d\n", M);
//	printf("%d\n", M);
//	printf("%d\n", M);
//	printf("%d\n", M);
//#undef M//ȡ����
//	printf("%d\n", M);

	//int x = 5;
	//int y = 8;
	//int z = MAX(x++, y++);//int z = (x++)>(y++)? (x++):(y++)
	//printf("%d, %d, %d\n", x, y, z);

	//printf("%d\n", MAX(10, 9));

	//int x1 = 100;
	//int x2 = 200;
	//int x3 = 300;
	//ADD(1, 100);
	//ADD(2, 200);
	//ADD(3, 300);
	//printf("%d, %d, %d\n", x1, x2, x3);

	system("pause");
	return 0;
}