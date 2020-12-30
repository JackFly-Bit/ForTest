#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <windows.h>

#pragma warning(disable:4996)
//OS —>startUp()
//main函数退出，代表程序退出，程序退出，你把对应的任务完成的如何了？
//return 0 ->任务退出，且任务无措完成
//!0->任务退出，但是任务出错，具体是什么原因，由该数字表示

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
	//mem*系列的函数，叫做内存操作函数，本质是不关心类型，只关心操作的字节数。也就是说
	//mem*系列函数，操作的基本单位是字节！
	const char* src = "hello world";
	char dst[16];
	memcpy(dst, src, strlen(src)+1);

	//struct person tom = { "tom", 'm', 18 };
	//struct person zhangsan;
	//memcpy(&zhangsan, &tom, sizeof(tom));

	//int src[5] = { 11, 22, 33, 44, 55 };
	//int dst[5];
	//memcpy(dst, src, sizeof(src));


	////虽然我们自己可以自主实现该接口，但是我们不推荐，我们强烈建议使用C库函数来完成逻辑
	////除非后续有人让你从零开始实现否则，我们不做
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

	////错误码：C库函数调用情况错误说明
	////错误码：一般是表示，用户在调用C标准库函数的时候，如果在调用库函数期间，出错了
	////C语言中有一个全局变量errno,就会被设置（默认是0，如果设置了，就是!0）用来表明详细的出错原因
	//printf("errno:%d\n", errno);
	//FILE* fp = fopen("test.txt", "r");//test.txt不存在的
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
	//strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容
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
	////1.函数内部使用static局部变量，来保存历史子字符串的剩余子串
	////2.采用分隔符进行设置为\0的策略来进行子串划分
	////3.strtok进行子串截取的时候，采用的策略是截取有效字符串
	////4.分割的时候，strtok会自动进行分隔符过略
	//while (sub){
	//	printf("%s\n", sub);
	//	sub = strtok(NULL, ", |");
	//}

	//printf("%s\n", strtok(str, ", |"));//无法使用一次strtok返回所有的子串
	////我们C标准采用的策略是：重复调用strtok函数，第一次传入有效字符串，第二次之后，清一色传入NULL(第一个参数)
	//printf("%s\n", strtok(NULL, ", |"));
	//printf("%s\n", strtok(NULL, ", |"));
	//printf("%s\n", strtok(NULL, ", |"));
	//printf("%s\n", strtok(NULL, ", |"));

	//strtok:是用来进行字符串切割的，可以根据特定的分隔符（集），来进行字符串的切割
	//"abcd,1234 xyz|789"; -> "abcd" "1234" "xyz" "789" ：分隔符 :", |"

	//考虑的是把两个字符串进行拼接的过程
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
	//凡是在terminal中显示的信息，哪怕是1，2，3，4,这样的信息，本质都是字符
	//int a;
	//scanf("%d", &a);
	//输入的所有内容，都是字符
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
	return 0;//退出码：表示程序退出时执行结果如何
}