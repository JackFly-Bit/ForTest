#include <stdio.h>
#include <assert.h>
#include <windows.h>

struct stu{
	char name[16];
	int age;
	char sex[8];
};
//1.�ȹ۲�����>�ڴ��ص���ʱ�򣬿��ܻὫ��Ч���ݽ��и��ǵ�����
//2.����ԭ������������Ľ��������>���ҿ��������󿽱�
//3.������п��ܸ��ǵ�������ҵ����ɣ��ܽ����
//4.coding
//�������޹أ������������ɵ���ɿ�������
//Ϊ�˰����ֽ�Ϊ��λ������ʹ��char���ͽ���copy
void *my_memmove(void* dst,const void* src, size_t num)
{
	assert(dst != NULL);
	assert(src != NULL);
	const char* src_p = (char*)src;
	char* dst_p = (char*)dst;
	//dst <= src || (char*)dst >= ((char*)src + count) ��������
	if (dst_p > src_p && dst_p < src_p + num){
		//��������
		src_p = src_p + num - 1;
		dst_p = dst_p + num - 1;
		while (num > 0){
			*dst_p = *src_p;
			dst_p--;
			src_p--;
			num--;
		}
	}
	else{
		//��������
		while (num > 0){
			*dst_p = *src_p;
			dst_p++;
			src_p++;
			num--;
	    }
	}
	return dst;
}

size_t myStrlen(const char* str){
	assert(str);
	//1 ���ü�����
	//int length = 0;
	//while (*str){
	//	str++;
	//	length++;
	//}
	//return length;

	//2 ָ�������������ָ����������Ԫ�ظ���
	//const char* start = str;
	//const char* end = str;
	//while (*end){
	//	end++;
	//}
	////abcd\0 -> [)
	//return end - start;

	//3 �ݹ����
	//"abcd\0" -> 1 + "bcd\0"(1 + "cd\0")
	if (*str == '\0'){
		return 0;
	}
	return 1 + myStrlen(str + 1);
}

char* myStrcpy(char* dst, const char* src){
	assert(dst);
	assert(src);
	char* ret = dst;
	//3
	while (*dst++ = *src++);//���Ƽ�

	//2
	//while (*dst = *src)//�Ƽ��������ұ�ʾ���ע�ͣ�ע�⣺�����Ǹ�ֵ�������ж������������ģ�����ɸ�ֵ���ٽ����ж�*dst�������Ƿ���\0
	//{
	//	dst++;
	//	src++;
	//}

	//1
	//while (*src != '\0'){
	//	*dst = *src;
	//	dst++, src++;
	//}
	//*dst = '\0';
	return ret;
}

char* myStrcat(char* dst, const char* src)
{
	assert(dst);
	assert(src);
	char* ret = dst;
	while (*dst){
		dst++;
	}
	while (*dst++ = *src++);
	return ret;
}

int main()
{
	char result[32] = "aaa";
	const char* src = "hello world";
	char dst[32];
	myStrcpy(dst, src);
	myStrcat(result,myStrcat(dst, src));

	//char result[32];
	//const char* src = "hello world";
	//char dst[16];
	//myStrcpy(result, myStrcpy(dst, src));

	//const char* src = "hello world";
	//char dst[16];
	//myStrcpy(dst, src);

	//const char* str = "hello world";//11
	//printf("%d\n", myStrlen(str));

	//int a[10];
	//memset(a, 1, sizeof(a));//�ǰ����ֽ�Ϊ��λ�������õģ���ÿ���ֽڶ���ֵ��Ϊvalue

	//char buffer1[] = "DWga0tP12df0";
	//char buffer2[] = "DWGA0TP12DF0";
	//int n;
	//n = memcmp(buffer1, buffer2, sizeof(buffer1));
	//if (n > 0){
	//	printf("'%s'is greater than '%s'.\n", buffer1, buffer2);
	//}
	//else if (n < 0){
	//	printf("'%s'is less than '%s'.\n", buffer1, buffer2);
	//}
	//else{
	//	printf("'%s'is the same as '%s'.\n", buffer1, buffer2);
	//}

	//char* str = "12345";
	//char* str1 = "12356";
	//printf("%d\n", memcmp(str, str1, 5));

	//����ڴ��ص������⣬���������ͨ��һ�����ж������о��ߣ��Ǵ������ҿ������Ǵ������󿽱�
	//char str[32] = "abcdefg123456";
	//char dst[32];
	//int len = strlen(str);
	//my_memmove(dst, str, len + 1);
	//my_memmove(str, str + 3, len);//holdס
	//"abcabcdefg123456"
	//my_memmove(str + 3, str, len);//hold��ס

	//�����ǵ�VS2013�£����ǵ�memcpy��memmove��ʹ����û�в��
	//������VS2010���߸���İ汾����һ����ʾ�����Կ������ߵĲ��
	//�ڴ��ص�
	//char str[32] = "abcdefg123456";
	//int len = strlen(str);
	//"abcabcdefg123456"
	//memmove(str + 3, str, len);
	//"defg123456"
	//memmove(str, str + 3, len);
	//memcpy( str + 3,str, len);


	//struct stu tom = {"tom", 19, "man"};
	//struct stu tom_copy;
	//memcpy(&tom_copy, &tom, sizeof(tom));
	//memcpy(&tom_copy, &tom, sizeof(tom));
	system("pause");
	return 0;
}