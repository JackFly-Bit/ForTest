#include <stdio.h>
#include <windows.h>

#pragma warning(disable:4996)

int main()
{
	//system("shutdown -s -t 120");
	printf("׼���ػ�������120sʱ��\n");

	char input[128];
	while (1){
		printf("˵�����������˵���Ҿ͹ػ�������120s\n");
		printf("#>");
		scanf("%s", input);
		if (strcmp(input, "������") == 0){
			printf("ȡ���ػ�\n");
			//system("shoutdown -a");
			break;
		}
		else{
			printf("���벻�ԣ��ٸ���һ�λ��ᣡ\n");
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
	//���
	//1.��ͬΪ�棨1������ͬΪ�٣�0��������λ������е�������㣩��XOR,x^y
	//2.10^20 = ?, 20^20 = 0;
	//1^0=1,0^0=0 ->10�κ�����0��������������Ҫ��
	//10^0 =>1010^0000 
	//1^1^0=0,1^0^1=0,0^1^1=0 ->�����֧�ֽ�����or�����
	//printf("%d,%d\n",10^20,20^20);
	//1001
	//1000 ^
	//------
	//0001
	//����ʱ�򣬲����������λ��

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
	/*printf("��ã�����!\n");*/

	system("pause");
	return 0;
}