#include <stdio.h>

#if 0
//�����ռ�Ķ����ʽ
namespace N
{
	//����
	//����
}
int a = 10;
//���ֶ��巽ʽ
//1.�����ʽ
namespace N1
{
	int a = 10;
	int b = 20;
	int Add(int left, int right)
	{
		return left + right;
	}
}
//2.�����ռ����Ƕ��
//�����ڣ�һ��ѧУ�п��԰������ѧԺ
namespace N2
{
	int a = 10;
	int b = 20;
	int Sub(int left, int right)
	{
		return left - right;
	}
	namespace N3
	{
		int c = 10;
		int d = 20;
		int Mul(int left, int right)
		{
			return left*right;
		}
	}
}
//��ͬһ�����У����Զ�����������ͬ�������ռ�
//�����ͻ
//�������Ὣ�����ͬ���Ƶ������ռ�ϲ���һ��
namespace N1
{
	int Div(int left, int right)
	{
		return left / right;
	}
}
namespace N
{
	int a = 10;
	//Ƕ�׵ķ�ʽ----���ַ�ʽ�����ͻ
	//�൱�����N�����ռ����ְ�����һ��N�������ռ�
	namespace N
	{
		int b = 10;
		int a = 20;
	}
}
#endif

#if 0
#include <stdio.h>
//�����ռ��г�Ա��ʹ�÷�ʽ
//1.�����ռ�����::��Ա
namespace N
{
	int a = 10;
	int b = 20;
	int Add(int left, int right)
	{
		return  left + right;
	}
}
int a = 20;
int main()
{
	int a = 30;
	//�ͽ�ԭ��
	printf("%d\n", a);
	//�������ȫ���������е�a
	//::�����������
	//::a ��ȷ˵������ȫ���������е�a
	printf("%d\n", ::a);
	//����N�����ռ��е�a
	printf("%d\n", N::a);
	return 0;
}
#endif

#if 0
namespace N
{
	int a = 10;
	int b = 20;
	int Add(int left, int right)
	{
		return  left + right;
	}
}
//�ó�������N�����ռ��к�ĳЩ��Ա���ʵķǳ�Ƶ��
//�е㣺д�������
//ȱ�㣺������ļ�������ͬ���Ƶı������ߺ������ͻ������ͻ
//���������ͻ����ô��?---���շ�ʽ1ʹ�ü���
//����������֮���൱�ڽ�N�����ռ��е�a���ɵ�ǰ�ļ���һ��ȫ�ֱ�����ʹ��
using N::a;
int main()
{
	//����N�����ռ��е�a
	printf("%d\n", N::a);
	printf("%d\n", N::a);
	printf("%d\n", N::a);
	//Ϊ��д����򵥣���Ҫֱ�ӷ���N�����ռ��е�a
	printf("%d\n", a);
	return 0;
}
#endif

#if 0
//������������N�����ռ�������Ա�ڵ�ǰ�ļ���ʹ�÷ǳ�Ƶ��
namespace N
{
	int a = 10;
	int b = 20;
	int Add(int left, int right)
	{
		return  left + right;
	}
}
//using N::a;
//using N::b;
//using N::Add;

//����ǰN�����ռ��е����г�Ա���ɸ��ļ���ȫ�ֱ���
//�ŵ㣺ʹ�÷ǳ���
//ȱ�㣺������ͻ�ĸ��ʿ��ܷǳ���
//���������ͻ����������շ�ʽ1ʹ��
using namespace N;
int main()
{
	printf("%d\n", N::a);
	printf("%d\n", N::a);
	printf("%d\n", N::a);
	printf("%d\n", a);
	printf("%d\n", N::b);
	printf("%d\n", N::b);
	printf("%d\n", N::b);
	printf("%d\n", b);
	Add(1, 2);
	Add(1, 2);
	Add(1, 2);
	return 0;
}
#endif
//C++�е���������
//ע�⣺C���������������ķ�ʽ��C++���Ծɿ���ʹ��---ӦΪC++Ҫ����C����
//C++�Լ����Ǹ���һ�����������ķ�ʽ��ӦΪC����������������ʽ̫�鷳��
#if 0
int main()
{
	int a = 10;
	scanf("%d%d", &a);
	printf("%d\n", 10, 20, 30);
	printf("%d %s %f\n", 10);
	return 0;
}
#endif

//ע�⣺<iostream.h> �ɿ��а�����
//#include <iostream.h>
#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b >> c;
	cout << a << " " << b << " " << c << endl;
	cout << 10;
	cout << 12.34 << "\n";
	cout << "hello" << 123 << "world!!!" << endl;//endlҲ��ʾ����
	return 0;
}