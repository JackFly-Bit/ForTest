#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <windows.h>

#pragma warning(disable:4996)
//OS ��>startUp()
//main�����˳�����������˳��������˳�����Ѷ�Ӧ��������ɵ�����ˣ�
//return 0 ->�����˳����������޴����
//!0->�����˳��������������������ʲôԭ���ɸ����ֱ�ʾ

//int my_islower(char c)
//{
//	return c >= 97 && c <= 122;
//}
//
//int my_toupper(char c)
//{
//	return my_islower(c) ? c - 32 : c;
//}

int my_islower(char c)
{
	return c >= 'a' && c <= 'z';
}

int my_toupper(char c)
{
	return my_islower(c) ? c - ('a' - 'A') : c;
}

struct person{
	char name[16];
	char sex;
	int age;
};

int main()
{
	//mem*ϵ�еĺ����������ڴ���������������ǲ��������ͣ�ֻ���Ĳ������ֽ�����Ҳ����˵
	//mem*ϵ�к����������Ļ�����λ���ֽڣ�
	const char* src = "hello world";
	char dst[16];
	memcpy(dst, src, strlen(src)+1);

	//struct person tom = { "tom", 'm', 18 };
	//struct person zhangsan;
	//memcpy(&zhangsan, &tom, sizeof(tom));

	//int src[5] = { 11, 22, 33, 44, 55 };
	//int dst[5];
	//memcpy(dst, src, sizeof(src));


	////��Ȼ�����Լ���������ʵ�ָýӿڣ��������ǲ��Ƽ�������ǿ�ҽ���ʹ��C�⺯��������߼�
	////���Ǻ�������������㿪ʼʵ�ַ������ǲ���
	//char str[] = "This Is a String";
	//int len = strlen(str);
	//for (int i = 0; i < len; i++){
	//	//if (isupper(str[i])){
	//	//	str[i] = tolower(str[i]);
	//	//}

	//	if (my_islower(str[i])){
	//		str[i] = my_toupper(str[i]);
	//	}
	//}
	//printf("%s\n", str);

	//for (int i = 0; i < 43; i++){
	//	printf("%d: %s\n", i, strerror(i));
	//}

	////�����룺C�⺯�������������˵��
	////�����룺һ���Ǳ�ʾ���û��ڵ���C��׼�⺯����ʱ������ڵ��ÿ⺯���ڼ䣬������
	////C��������һ��ȫ�ֱ���errno,�ͻᱻ���ã�Ĭ����0����������ˣ�����!0������������ϸ�ĳ���ԭ��
	//printf("errno:%d\n", errno);
	//FILE* fp = fopen("test.txt", "r");//test.txt�����ڵ�
	//if (fp == NULL){
	//	printf("errno: %d\n", errno);
	//	printf("errno String: %s\n", strerror(errno));
	//	system("pause");
	//	return 1;
	//}

	//const char *p = "zhangpengfei@bitedu.student";
	//const char* sep = ".@";
	//char arr[30];
	//char* str = NULL;
	//strcpy(arr, p);//�����ݿ���һ�ݣ�����arr���������
	//for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
	//{
	//	printf("%s\n", str);
	//}

	//char str[] = "- This, a sample string.";
	//char* pch;
	//printf("Splitting string \"%s\" into token:\n", str);
	//pch = strtok(str, " ,.-");
	//while (pch != NULL)
	//{
	//	printf("%s\n", pch);
	//	pch = strtok(NULL, " ,.-");
	//}

	//char str[] = "abcd,,,1234   xyz|||789";
	//puts(str);
	//char* sub = strtok(str, ", |");
	////1.�����ڲ�ʹ��static�ֲ���������������ʷ���ַ�����ʣ���Ӵ�
	////2.���÷ָ�����������Ϊ\0�Ĳ����������Ӵ�����
	////3.strtok�����Ӵ���ȡ��ʱ�򣬲��õĲ����ǽ�ȡ��Ч�ַ���
	////4.�ָ��ʱ��strtok���Զ����зָ�������
	//while (sub){
	//	printf("%s\n", sub);
	//	sub = strtok(NULL, ", |");
	//}

	//printf("%s\n", strtok(str, ", |"));//�޷�ʹ��һ��strtok�������е��Ӵ�
	////����C��׼���õĲ����ǣ��ظ�����strtok��������һ�δ�����Ч�ַ������ڶ���֮����һɫ����NULL(��һ������)
	//printf("%s\n", strtok(NULL, ", |"));
	//printf("%s\n", strtok(NULL, ", |"));
	//printf("%s\n", strtok(NULL, ", |"));
	//printf("%s\n", strtok(NULL, ", |"));

	//strtok:�����������ַ����и�ģ����Ը����ض��ķָ������������������ַ������и�
	//"abcd,1234 xyz|789"; -> "abcd" "1234" "xyz" "789" ���ָ��� :", |"

	//���ǵ��ǰ������ַ�������ƴ�ӵĹ���
	//char str[] = "This is a simple string";
	//char* pch;
	//pch = strstr(str, "simple");
	//strncpy(pch, "sample", 6);
	//puts(str);

	//const char *str1 = "xyz, 123, abc, 123";
	//const char *str2 = "123";
	//printf("%s\n", strstr(str1, str2));

	//char str[][5] = { "R2D2", "C3P0", "R2A6" };
	//int n;
	//puts("Looking for R2 astromech droids...");
	//for (n = 0; n<3; n++)
	//if (strncmp(str[n], "R2xx", 2) == 0)
	//{
	//	printf("found %s\n", str[n]);
	//}

	//char *str1 = "abcdXyz123";
	//char *str2 = "abcdxyz345";
	//printf("%d\n", strncmp(str1, str2, 4));

	//char str1[20];
	//char str2[20];
	//strcpy(str1, "To be ");
	//strcpy(str2, "or not to be ");
	//strncat(str1, str2, 6);
	//puts(str1);

	//const char* str1 = "hello world!%d%s";
	//puts(str1);
	//printf("helloworld! :%s, %d\n", "abcd", 4);
	//������terminal����ʾ����Ϣ��������1��2��3��4,��������Ϣ�����ʶ����ַ�
	//int a;
	//scanf("%d", &a);
	//������������ݣ������ַ�
	//1234 VS "1234"

	//const char *src = "abcdefg";
	//char dst[] = "123456";
	//strncat(dst, src, 4);
	//strncat(dst, src, strlen(src) + 1);

	//const char *src = "abcdefg";
	//char dst[] = "123456789";
	//strncpy(dst, src, 0);
	//strncpy(dst, src, 4);
	//strncpy(dst, src, strlen(src) + 1);
	system("pause");
	return 0;//�˳��룺��ʾ�����˳�ʱִ�н�����
}