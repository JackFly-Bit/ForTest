#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>

#define TRY_COUNT 3
#define SIZE 128
#pragma warning(disable:4996)

#define DEFAULT_NAME "admin"
#define DEFAULT_PSD "bitnb"

void Menu(){
	printf("######################\n");
	printf("##1.Guess    2.Quit ##\n");
	printf("######################\n");
	printf("Please Select > ");
}
void Game(){
	printf("........��Ϸ��ʼ........\n");
	srand((unsigned int)time(NULL));

	int data = rand() % 100 + 1;//[1,100]
	printf("���򣺼�������������[1��100]֮������֣���Ҫ�ܲ³����������԰ɣ�\n");
	for (;;){
		printf("Guess: ");
		int x = 0;
		scanf("%d", &x);

		if (x > data){
			printf("��´��ˣ�\n");
		}
		else if (x < data){
			printf("���С�ˣ�\n");
		}
		else{
			printf("��ϲ�㣬�¶���,�����ǣ�%d\n", data);
			break;
		}
	}
	printf("........��Ϸ����........\n");
	//printf("Game!\n");
}

//return 1->yes
//0->no
int IsRun(int _year){
	if ((_year % 4 == 0 && _year % 100 != 0) || _year % 400 == 0){
		return 1;
	}
	return 0;
}

//yes->1
//no->0
int IsSu(int x){
	int i = 2;
	//int top = x / 2;
	int top = (int)sqrt(x);//x = n(С)*m(��) x%n == 0 x%m�Ͳ����ж��ˣ�10 == sqrt(100) 
	for (; i <= top; i++){//Ҫ����һ���� ����Ҫ��������Ķ��� ���磺5������10��������
		if (0 == x%i){
			break;
		}
	}
	if (i <= top){
		return 0;
	}
	return 1;
}

int GreatestCommonDivisor(int x ,int y){
	////100 100
	////100 25
	////18 9
	////1.��ٷ�
	//int top = x > y ? y : x;
	//int i = top;
	//for (; i >= 2; i--){
	//	//9 8 7 6 5 4 3 2
	//	if ((x % i == 0) && (y % i == 0)){
	//		return i;
	//	}
	//}
	//return 1;

	////շת�����
	////x,y -> x=T+T+T��+T,y=T+T+T��+T
	////y = y-x =T+T+T��+T
	////x = x-y =T+T+T��+T
	////20,50��> 20 = 10 + 10. 50= 10 + 10 + 10 + 10 + 10
	//while (1){
	//	if (x > y){
	//		x = x - y;
	//	}
	//	else if (x < y){
	//		y = y - x;
	//	}
	//	else{
	//		break;
	//	}
	//}
	//return x;

	//շת�����
	//x y t :nx+(-+m)y
	//x > y ,(x%y) x/y = a��b -> x = a*y + b -> b = x - a*y
	//x > y, x = x % y;
	//y > x, y = y % x;
	while (x*y != 0){
		if (x > y){
			x %= y;
		}
		else if (x < y){
			y %= x;
		}
		else{
			break;
		}
	}
	return 0 == x ? y : x;
}


int main(){
	//���������������������������Լ��
	//100 40 -> 20
	printf("please Enter two data:");
	int x = 0;
	int y = 0;
	scanf("%d %d",&x, &y);
	int ret = GreatestCommonDivisor(x,y);
	printf("%d\n", ret);

	////дһ�����룺��ӡ100~200֮�����������������ֻ�ܱ�1������������������
	//int i = 100;
	//for (; i <= 200; i++){
	//	if (IsSu(i)){
	//		printf("%d ", i);
	//	}
	//}
	//printf("\n");

	////100��������
	////400��800��������
	////��ӡ1000�굽2000��֮������꣨4��һ�󣬰��겻�󣬷�400�������ܱ�4�������ܱ�һ�����������ܱ�400����
	//int year = 1000;
	//for (; year <= 2000;year++){
	//	if (1 == IsRun(year)){
	//		printf("%d ", year);
	//	}
	//}
	//printf("\n");


	//window10����talent
	//https://jingyan.baidu.com/article/fb48e8bee0d7446e622e143d.html
	//window10��dos�����¿������ս
	//https://blog.csdn.net/idog149tao/article/details/50589393
	//һЩ������dos����
	//1.dos����ʾ�����Ӳ����Ϣ
	//systeminfo
	//2.�򿪼�����
	//calc
	//3.����
	//cls
	//4.dir
	//5.���ʴ���
	//cd:D//�̷�
	//6.�ػ�
	//shutdown -s -t 180//-s �������� -t ����ʱ��
	//7.ȡ���ػ�
	//shutdown -a
	//osk
	//���������

//	int flag = 1;
//	if (1 == flag){
//		goto END;
//	}
//	printf("1\n");
//	printf("2\n");
//	printf("3\n");
//END:
//	printf("4\n");
//	printf("5\n");

//	int flag = 1;
//START:
//	printf("hello world!\n");
//
//	if (1 == flag){
//		goto START;
//	}

	//code2//��������Ϸ
	//int quit = 0;
	//while (!quit){
	//	Menu();
	//	int select = 0;
	//	scanf("%d", &select);
	//	switch (select){
	//	case 1:
	//		Game();
	//		printf("Ҫ��Ҫ�ٸ�һ�ѣ�\n");
	//		break;
	//	case 2:
	//		quit = 1;
	//		printf("Game end!\n");
	//		break;
	//	default:
	//		printf("��������������������룡\n");
	//		break;
	//	}
	//}
//	//code1
//	//��д����ʵ�֣�ģ���û���¼���龰������ֻ�ܵ�¼����
//	char name[SIZE];
//	char passwd[SIZE];
//	int count = 0;//Ĭ�ϳ��Ե�¼����
//START:
//	count = TRY_COUNT;
//	while (count > 0){
//	printf("����������˺�#  ");
//	scanf("%s",name);
//	printf("�������������#  ");
//	scanf("%s", passwd);
//	if (strcmp(name, DEFAULT_NAME) == 0 && strcmp(passwd, DEFAULT_PSD) == 0){
//		printf("��ӭ %s ���룡\n", name);
//		break;
//	}
//	else{
//		count--;
//		printf("��¼ʧ�ܣ���������û��������룡�㻹ʣ [%d] �λ���\n",count);
//	}
//	}
//	if (count == 0){
//		printf("��¼ʧ�ܣ���60S֮�����ԣ�\n");
//		int _time = 1;
//		while (_time <= 60){
//			printf("���ϴε�¼���Ѿ����ˡ�%d\r",_time);
//			Sleep(100);
//			_time++;
//		}
//		printf("\n");
//		goto START;
//		//Sleep(1000*60);
//	}
//	//printf("%s,%s\n",name,passwd);

	system("pause");
	return 0;
}