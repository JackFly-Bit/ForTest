#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<limits.h>
#include<errno.h>
#include<windows.h>

struct A{
	int num;
	char arr[0];//��������
};

//1.��struct����
//2.һ�������һ��Ԫ��
//3.Ԫ�ظ���Ϊ0
//4.������������������飬����ռ�ṹ��ռ��С

//struct Array{
//	int num;
//	int* mem;//ָ��һ���䳤�Ŀռ�
//};
//old:һ��������ֻ��1�������ǳ���һ�Σ������������ֶ�����������
//��дһ�������ҳ���1��ֻ����һ�ε�����

//new:һ��������ֻ�����������ǳ���һ�Σ������������ֶ�����������
//��дһ�������ҳ�������ֻ����һ�ε�����

//�������ƣ����Ǻ���˼���Ǹ��Ӷ���������
//˼·��
//1.����������ս����a.һ����Ϊ0 b.һ����������ͬ�������Ľ��
//                      c.һ����Ϊ0���������32������λ������һ���б���λΪ1��
//						  ��ζ�Ų�ͬ���������ݣ���Ӧ�ı���λ�ǲ�ͬ��
//2.�ҵ���ͬ�ı���λ��λ�ã�pos = 3;
//3.���ݲ�ͬ�ı���λ��λ��pos���������黮�֣������黮�ֳ�Ϊ2����
//  a.������ͬ�����֣�һ�������ֵ��˲�ͬ����
//  b.��ͬ�����ݣ�һ�����ֵ���ͬһ�飬��������һ�飬����Ҫ
//  c.����a,b������������������

void FindTwoSingle(int a[], int num, int* x, int* y)
{
	assert(a);
	assert(num > 0);
	assert(x);
	assert(y);

	//�������
	int result = a[0];
	for (int i = 1; i < num; i++){
		result ^= a[i];
	}
	//�ҵ���ͬ�ı���λ��λ��
	int pos = 1;
	while (1)
	{
		if ((result & pos)){
			break;
		}
		pos <<= 1;
	}
	*x = 0;
	*y = 0;
	//���ݲ�ͬ�ı���λ��λ��pos���������黮�֣������黮�ֳ�Ϊ2����
	for (int i = 0; i < num; i++){
		if (a[i] & pos){
			//A��
			*x ^= a[i];
		}
		else{
			//B��
			*y ^= a[i];
		}
	}
}

//1.��û�п��ǹ��ַ������� "+123" "-123" "123"
//2.��û�п��ǹ����쳣�ַ�? "1a2b3c"?
//3.��û�п��ǹ�"111123456789001111234567890011112345678900",int,Խ������
//4.���������������������Ǵ�����?
int status = 0;
int my_atoi(const char* str)//"-1"
{
	assert(str);
	int flag = 1;
	long long result = 0;
	int i = 0;
	while (isspace(str[i])){
		i++;
	}
	if (str[i] == '-'){
		flag = -flag;
		i++;
	}
	while (str[i]){
		if (iswdigit(str[i])){
			result = result * 10 + flag*(str[i] - '0');//"-10"
			if (result > INT_MAX || result < INT_MIN){//int
				status = 1;
				break;
			}
		}
		else{
			status = 2;
			break;
		}
		i++;
	}
	return (int)result;

	//str = "54"
	//int a = *str - '0';//str++
	//int b = *str - '0';//10*a + b

	//"1234"
	//int result = 0;
	//while (&str){
	//	result = result * 10 + *str - '0';
	//	str++;
	//}
	//return result;
}

int main()
{
	//const char* str = "111";
	//int res = atoi(str);
	//printf("%d\n", errno);


	//ģ��ʵ��atoi
	const char* str = "12345";
	int res = my_atoi(str);//�Ӻܶ�
	printf("status: %d, result: %d\n", status, res);

	//printf("%d, %d\n", INT_MAX, INT_MIN);


	//int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 11, 33, 1, 2, 3, 4, 5, 6, 7, 81, 2, 3, 4, 5, 6, 7, 8 };
	//int num = sizeof(a) / sizeof(a[0]);
	//int x = 0;
	//int y = 0;
	//FindTwoSingle(a, num, &x, &y);
	//printf("X: %d, Y: %d\n", x, y);


	//int* p = malloc(100);
	//free(NULL)//����ΪNULL�ǿ��Ե�

	//���Ƕѣ�ջ��ջ����ջ��ջ

	//�ڽṹ���У������Ҫһ���䳤���飬���Ǹ���ô�죿
	//����������ڵļ�ֵ��
	//1.�ܹ���������Աʵ��һ���ṹ���ڵı䳤����
	//2.��

	//printf("%d\n", sizeof(struct A));

	//2.
	//struct A* p = malloc(sizeof(struct A) + 100 * sizeof(char));
	//p->num = 100;
	//for (int i = 0; i < p->num; i++){
	//	p->arr[i] = i;
	//}
	//free(p);

	//1.
	//struct Array* arr = (struct Array*)malloc(sizeof(struct Array));
	//if (arr->mem == NULL){
	//	return 1;
	//}
	//arr->num = 100;
	//arr->mem = (int*)malloc(arr->num*sizeof(int));
	//if (arr->mem == NULL){
	//	free(arr);
	//	return 2;
	//}
	////����ͷ�
	//free(arr->mem);
	//free(arr);

	system("pause");
	return 0;
}