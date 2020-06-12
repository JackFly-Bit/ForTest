#include<stdio.h>
#include<windows.h>

#pragma warning (disable:4996)



//int Mul(int _n){
//	printf("%d!:", _n);
//	int result = 1; 
//	for (; _n > 0; _n--){
//		if (1 == _n){
//			printf("%d",_n);
//		}
//		else{
//			printf("%d*", _n);
//		}
//		result *= _n;
//	}
//	printf("=%d\n",result);
//	return result;
//}

//找到了，返回对应数组下标
//如果没有找到，返回-1
int BinSearch(int a[], int num, int x){//数组传参的时候，数组的下标是被忽略的
	//int i = 0;
	//for (; i < num;i++){
	//	if (x == a[i]){
	//		return i;
	//	}
	//}
	//return -1;

	int start = 0;
	int end = num - 1;
	while (start <= end){
		int mid = (start + end) / 2;
		if (x > a[mid]){
			//右半
			start = mid + 1;
		}
		else if (x < a[mid]){
			//左半
			end = mid - 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}

void Show(){
	//const char *str = "|/-\\";
	//int index = 0;
	//while (1){
	//	printf("%c\r",str[index]);
	//	Sleep(100);
	//	index++;
	//	index %= 4;
	//}

	//int i = 0;
	//for (; i <= 10;i++){
	//	printf("%d\r",i);//回车
	//	Sleep(500);
	//}

	char str1[] = "hello world...";
	char str2[] = "**************";
	int start = 0;
	int end = strlen(str1)-1;
	for (; start <= end; start++, end--){
		str2[start] = str1[start];
		str2[end] = str1[end];
		Sleep(1000);
		printf("%s\r", str2);
	}

	//while (start <= end){
	//	str2[start] = str1[start];
	//	str2[end] = str1[end];
	//	start++, end--;
	//	Sleep(1000);
	//	printf("%s\n", str2);
	//}
}

int IsThree(int x){
	return x % 3 == 0;
}

int main(){
	int i = 0;
	int count = 0;


	for (i = 101; i <= 200; i += 2)
	{
		//判断i是否为素数
		//2->i-1
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		//...
		if (j>sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}

	printf("\ncount = %d\n", count);

	//int year = 0;
	//for (year = 1000; year <= 2000; year++)
	//{
	//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	//	{
	//		printf("%d ", year);
	//	}
	//}

	//int a = 18;
	//int b = 24;
	//int c = 0;
	//while (c = a%b)
	//{
	//	a = b;
	//	b = c;
	//}
	//printf("%d\n", b);

	//int i = 1;
	//for (; i = 100;i++){
	//	if (IsThree(i)){
	//		printf("%d",i);
	//	}
	//}
	//printf("\n");

	////1.计算n的阶乘
	//printf("请输入你要求的阶乘：");
	//int n = 0;
	//scanf("%d",&n);
	//int result = Mul(n);
	//printf("=%d\n",result);

	////2.1!+……+10!
	//int i = 1;
	//int result = 0;
	//for (; i <= 10; i++){
	//	result += Mul(i);
	//}
	//printf("result:%d\n");

	////3.二分查找算法
	////查找的过程秒其实就是排除的过程
	//int a[] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 110 };
	//int num = sizeof(a) / sizeof(a[0]);
	//int n = 0;
	//printf("请输入你需要找的数据：");
	//scanf("%d",&n);
	//int index = BinSearch(a,num,n);
	//printf("result:%d\n",index);

	////4.演示代码向中间汇聚
	//Show();

	//int i = 0;
	//do{
	//	i++;
	//	if (5 == i){
	//		continue;
	//		//break;
	//	}
	//	printf("%d\n", i);
	//} while (i < 10);

	//int i = 0;
	//int k = 0;
	//for (i = 0, k = 0; k = 0;i++,k++){
	//	k++;
	//}
	//printf("%d\n",k);

	//int x, y;
	//for (x = 0, y = 0; x < 2 && y < 5;++x,y++){
	//	printf("hehe\n");
	//}

	//for (;;){
	//	printf(".");
	//}

	//int i = 1;
	//for (;i!=10;i++){
	//	if (5 == i){
	//		continue;
	//		//break;
	//	}
	//	i += 100;
	//	printf("%d\n",i);
	//}
	//printf("... %d\n",i);

	//int c = 0;
	//while ((c = getchar())!=EOF){
	//	if (c <'0'|| c>'9'){
	//		continue;
	//	}
	//	//c >='0' && c<='9'
	//	putchar(c);
	//}

	//printf("%d\n", 0);
	//printf("%d\n", '0');
	//printf("%d\n", '\0');

	////#define EOF -1
	//int c = 0;
	//while ((c = getchar())!=EOF){
	//	putchar(c);
	//}
	//while (1){
	//int c = getchar();
	//if (c == EOF){//ctrl + z :对话框输入完毕！
	//	printf("读取完毕！EOF: %d,c: %d\n",EOF,c);
	//	break;
	//}
	//putchar(c);
	//}
	//putchar('a');

	//int i = 0;
	//while (i <=10){
	//	if (5 == i){
	//		//printf("...:%d\n",i);
	//		i++;
	//		continue;//结束本次（一次）循环
	//	}
	//	printf("%d\n",i);
	//	i++;
		//if (i>5){
		//	printf("跳出循环: %d\n",i);
		//  	break;//结束循环，跳出循环
		//}
	//}
	//printf("end while :%d\n",i);

	system("pause");
	return 0;
}