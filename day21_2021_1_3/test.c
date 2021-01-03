#include <stdio.h>
#include <assert.h>
#include <windows.h>

struct stu{
	char name[16];
	int age;
	char sex[8];
};
//1.先观察现象—>内存重叠的时候，可能会将有效数据进行覆盖的问题
//2.分析原因且提出初步的解决方案—>左右拷贝，右左拷贝
//3.穷举所有可能覆盖的情况，找到规律，总结策略
//4.coding
//与类型无关，但是我们依旧得完成拷贝啊！
//为了按照字节为单位，我们使用char类型进行copy
void *my_memmove(void* dst,const void* src, size_t num)
{
	assert(dst != NULL);
	assert(src != NULL);
	const char* src_p = (char*)src;
	char* dst_p = (char*)dst;
	//dst <= src || (char*)dst >= ((char*)src + count) 从左向右
	if (dst_p > src_p && dst_p < src_p + num){
		//丛右向左
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
		//从左向右
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
	//1 设置计数器
	//int length = 0;
	//while (*str){
	//	str++;
	//	length++;
	//}
	//return length;

	//2 指针相减代表两个指针所经历的元素个数
	//const char* start = str;
	//const char* end = str;
	//while (*end){
	//	end++;
	//}
	////abcd\0 -> [)
	//return end - start;

	//3 递归策略
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
	while (*dst++ = *src++);//不推荐

	//2
	//while (*dst = *src)//推荐，建议大家标示清楚注释，注意：这里是赋值，所以判定过程是这样的：先完成赋值，再进行判定*dst的内容是否是\0
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
	//memset(a, 1, sizeof(a));//是按照字节为单位进行设置的，把每个字节都赋值成为value

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

	//解决内存重叠的问题，解决方案是通过一定的判断来进行决策，是从左向右拷贝还是从右向左拷贝
	//char str[32] = "abcdefg123456";
	//char dst[32];
	//int len = strlen(str);
	//my_memmove(dst, str, len + 1);
	//my_memmove(str, str + 3, len);//hold住
	//"abcabcdefg123456"
	//my_memmove(str + 3, str, len);//hold不住

	//在我们的VS2013下，我们的memcpy和memmove在使用上没有差别
	//可以在VS2010或者更早的版本进行一下演示，可以看出两者的差别
	//内存重叠
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