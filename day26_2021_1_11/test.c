#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<limits.h>
#include<errno.h>
#include<windows.h>

struct A{
	int num;
	char arr[0];//柔性数组
};

//1.在struct里面
//2.一定是最后一个元素
//3.元素个数为0
//4.柔性数组名代表的数组，本身不占结构体空间大小

//struct Array{
//	int num;
//	int* mem;//指向一个变长的空间
//};
//old:一个数组中只有1个数字是出现一次，其它所有数字都出现了两次
//编写一个函数找出这1个只出现一次的数字

//new:一个数组中只有两个数字是出现一次，其它所有数字都出现了两次
//编写一个函数找出这两个只出现一次的数字

//基本相似，但是核心思想是更加多样和深入
//思路：
//1.整体异或，最终结果：a.一定不为0 b.一定是两个不同数据异或的结果
//                      c.一定不为0将结果看作32个比特位，其中一定有比特位为1，
//						  意味着不同的两个数据，对应的比特位是不同的
//2.找到不同的比特位的位置，pos = 3;
//3.根据不同的比特位的位置pos，进行数组划分，把数组划分成为2部分
//  a.两个不同的数字，一定被划分到了不同的组
//  b.相同的数据，一定被分到了同一组，具体在哪一组，不重要
//  c.根据a,b所以我们有两组数据

void FindTwoSingle(int a[], int num, int* x, int* y)
{
	assert(a);
	assert(num > 0);
	assert(x);
	assert(y);

	//整体异或
	int result = a[0];
	for (int i = 1; i < num; i++){
		result ^= a[i];
	}
	//找到不同的比特位的位置
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
	//根据不同的比特位的位置pos，进行数组划分，把数组划分成为2部分
	for (int i = 0; i < num; i++){
		if (a[i] & pos){
			//A组
			*x ^= a[i];
		}
		else{
			//B组
			*y ^= a[i];
		}
	}
}

//1.有没有考虑过字符串类似 "+123" "-123" "123"
//2.有没有考虑过有异常字符? "1a2b3c"?
//3.有没有考虑过"111123456789001111234567890011112345678900",int,越界问题
//4.如何区分是正常结果，还是错误结果?
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


	//模拟实现atoi
	const char* str = "12345";
	int res = my_atoi(str);//坑很多
	printf("status: %d, result: %d\n", status, res);

	//printf("%d, %d\n", INT_MAX, INT_MIN);


	//int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 11, 33, 1, 2, 3, 4, 5, 6, 7, 81, 2, 3, 4, 5, 6, 7, 8 };
	//int num = sizeof(a) / sizeof(a[0]);
	//int x = 0;
	//int y = 0;
	//FindTwoSingle(a, num, &x, &y);
	//printf("X: %d, Y: %d\n", x, y);


	//int* p = malloc(100);
	//free(NULL)//参数为NULL是可以的

	//堆是堆，栈是栈，堆栈是栈

	//在结构体中，如果需要一个变长数组，我们该怎么办？
	//柔性数组存在的价值：
	//1.能够帮助程序员实现一个结构体内的变长数组
	//2.简单

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
	////如何释放
	//free(arr->mem);
	//free(arr);

	system("pause");
	return 0;
}