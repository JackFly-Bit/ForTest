#include <stdio.h>
#include <windows.h>

#pragma warning(disable:4996)

int main()
{
	//system("shutdown -s -t 120");
	printf("准备关机，你有120s时间\n");

	char input[128];
	while (1){
		printf("说我是猪，如果不说，我就关机，给你120s\n");
		printf("#>");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0){
			printf("取消关机\n");
			//system("shoutdown -a");
			break;
		}
		else{
			printf("输入不对，再给你一次机会！\n");
		}
	}
	
	//system("calc");
	//system("systeminfo");
	//int a[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
	//int num = sizeof(a) / sizeof(a[0]);
	////1^2^3^4^5^1^2^3^4
	////1^1^2^2^3^3^4^4^5
	////0^5
	////5
	//int i = 0;
	//int result = a[0];
	//for (i = 1; i < num;i++){
	//	result ^= a[i];//a = a+10;a+=10;
	//}
	//printf("%d\n",result);

	/*int i = 0;
	for (; i < num; i++){
		int j = 0;
		int count = 0;
		for (; j < num; j++){
			if (a[i] == a[j]){
				count++;
			}
		}
		if (count == 1){
			printf("%d\n",a[i]);
			break;
		}
	}*/

	//int x = 10;
	//int y = 20;
	//printf("before:%d,%d\n", x, y);
	//x = x ^ y;//x <- x ^ y
	//y = x ^ y;//10 ^ 20 ^ 20
	//x = x ^ y;//x^y^y->10^20^10
	//printf("after:%d,%d\n", x, y);
	//异或
	//1.不同为真（1），相同为假（0）（比特位级别进行的异或运算），XOR,x^y
	//2.10^20 = ?, 20^20 = 0;
	//1^0=1,0^0=0 ->10任何树和0异或就是他本身（重要）
	//10^0 =>1010^0000 
	//1^1^0=0,1^0^1=0,0^1^1=0 ->异或是支持交换律or结合律
	//printf("%d,%d\n",10^20,20^20);
	//1001
	//1000 ^
	//------
	//0001
	//异或的时候，并不会产生进位！

	//2
	//printf("before:%d,%d\n",x,y);
	//x = x + y;//x = 10 + 20(30)
	//y = x - y;//y = 10+20-20(10)
	//x = x - y;//x = 10+20-10(20)
	//printf("after:%d,%d\n",x,y);

	//1
	/*int temp = 0;*/
	//printf("before:%d,%d\n",x,y);
	//temp = x;
	//x = y;
	//y = temp;
	//printf("after:%d,%d\n", x, y);

	//printf("hello world!\n");
	/*printf("你好，比特!\n");*/

	system("pause");
	return 0;
}