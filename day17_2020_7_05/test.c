#include <stdio.h>
#include <windows.h>

#pragma warning (disable:4996)

int MyStrlen(char *str)
{
	if (NULL == str){
		return 0;
	}
	char *start = str;
	char *end = str;
	while (*end != '\0'){
		end++;
	}
	return end - start;
}

#define N_VALUES 5
float values[N_VALUES];
//float *vp;//ȫ�ֱ����ᱻĬ�����㣬�����������д���������һ����ʾ
float *vp = NULL;//NULL��ʵ����0.��ϵͳ����������ģ�һ���� #define NULL (void*)0



int main()
{
	//1.ָ�������û�й�ϵ�����������ֲ�ͬ������
	//2.���������ڷ�������Ԫ�ص�ʱ������һ���������Ե�
	//int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	//int num = sizeof(a) / sizeof(a[0]);
	//int *p = a;
	//int i = 0;
	//for (; i < num; i++){
	//	//printf("%d ", a[i]);//�ҵ�֮���a����
	//	//printf("%d ", *(a + i));
	//	//printf("%d ", *(p + i));//���ҵ�ָ��p ,��ָ��p���н����ã��ҵ�a,֮��������,�ٶ�a���з���
	//	//ͨ��ָ��������������Ĳ���ڼ����Ѱַ�ϣ���𲻴�
	//	printf("%d ", p[i]);
	//}
	//printf("\n");

	//int a[5];
	//int *p = a;
	//int *q = &a[5];
	//printf("%d\n", q - p);
	
	//C���Ա�׼����ݽ���ָ��ʽ������ʱ��ͨ��ָ����б�����������������һ��Ԫ�ص���һ��Ԫ�صĵ�ַ�����Ǳ�׼�涨�ģ����ǿ��Խ��з��ʵģ�
	//����ѭ������[)(��հ뿪)�ķ�ʽ���� �󲿷����Զ�ϲ�������ַ�ʽ����Ϊ�����ұߵ�ֵ-��ߵ�ֵ������������Ԫ�صĸ���
	//�����ַ�Ƚϵ�ʱ�����һ��Ԫ�ص���һ��Ԫ�صĵ�ַ�ǿ��Ա������Ƚϵġ�
	//���ǣ��������������д�С�Ƚϣ��������κ������������磺д��
	//ָ��+-���飻ָ��Ĺ�ϵ���㡣
	//for (vp = &values[0]; vp < &values[N_VALUES];)
	//{
	//	*vp++ = 0;
	//}

	//����ָ���������������ָ��һ��Ҫָ��ͬһ���ڴ�
	//int a = 10;
	//int b = 20;
	//int *p = &a;
	//int *q = &b;
	//printf("%d\n", q - p);

	//����ָ�����������������������ָ���������һ�µ�
	//int a[10];
	//char *p = (char*)a;
	//int *q = &a[9];
	//printf("%d\n", q - p);

	//int a[10];
	//short *p = (short*)a;
	//short *q = (short*)&a[9];
	//printf("%d\n", q - p);

	int a[10];
	char *p = (char*)a;
	char *q = (char*)&a[9];
	printf("%d\n", q - p);

	//int a[10];
	//int *p = a;
	//int *q = &a[9];
	//printf("%d\n", q - p);

	//ָ��-ָ�룺��������ָ��֮���������ġ�Ԫ�ء�����һ����1���ֽڣ��ĸ���
	//char *str = "helloworld";
	//int len = MyStrlen(str);
	//printf("%d\n", len);

	//�����Ա��
	//��ϰ����Զ��ָ֤��ֻ����̬
	//1.Ҫôָ��NULL 2.Ҫôָ��һ���Ϸ���λ��
	//int *p = NULL;
	//int a = 10;
	//p = &a;
	//if (p != NULL)
	//{
	//	*p = 20;
	//}

	//int a[5] = { 1, 2, 3, 4, 5 };
	//int *p = a;//&a[0]
	//int i = 0;
	//for (; i <= 5; i++){
	//	*p++ = 0x11223344;
	//}

	//int *p = NULL;
	//*p = 10;//*pָ��һ��NULL�ռ䣬�ÿռ䲻������з���

	//int x = 0x11223344;//��С��
	//char *pc = (char*)&x;
	//int *pi = &x;

	//printf("%p\n", &x);
	//printf("%p\n", pc);//Ϊʲô�ڶ���������������ӡֵһ����(char*)&x���ǽ�x�ĵ�ַǿת����char������Ӧ��Ҫ�����ضϣ���Ӧ����x��ַ����߻�����͵��������֣�
	//printf("%p\n", pi);

	////*pc = 0;
	//*pi = 0;

	system("pause");
	return 0;
}