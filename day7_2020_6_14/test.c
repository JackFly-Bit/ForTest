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
	printf("........游戏开始........\n");
	srand((unsigned int)time(NULL));

	int data = rand() % 100 + 1;//[1,100]
	printf("规则：计算机会随机生成[1，100]之间的数字，你要能猜出来，快试试吧！\n");
	for (;;){
		printf("Guess: ");
		int x = 0;
		scanf("%d", &x);

		if (x > data){
			printf("你猜大了！\n");
		}
		else if (x < data){
			printf("你猜小了！\n");
		}
		else{
			printf("恭喜你，猜对了,数字是：%d\n", data);
			break;
		}
	}
	printf("........游戏结束........\n");
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
	int top = (int)sqrt(x);//x = n(小)*m(大) x%n == 0 x%m就不必判断了，10 == sqrt(100) 
	for (; i <= top; i++){//要整除一个数 至少要是这个数的二倍 例如：5是整除10的最大的数
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
	////1.穷举法
	//int top = x > y ? y : x;
	//int i = top;
	//for (; i >= 2; i--){
	//	//9 8 7 6 5 4 3 2
	//	if ((x % i == 0) && (y % i == 0)){
	//		return i;
	//	}
	//}
	//return 1;

	////辗转相减法
	////x,y -> x=T+T+T…+T,y=T+T+T…+T
	////y = y-x =T+T+T…+T
	////x = x-y =T+T+T…+T
	////20,50—> 20 = 10 + 10. 50= 10 + 10 + 10 + 10 + 10
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

	//辗转相除法
	//x y t :nx+(-+m)y
	//x > y ,(x%y) x/y = a…b -> x = a*y + b -> b = x - a*y
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
	//给定两个数，求这两个数的最大公约数
	//100 40 -> 20
	printf("please Enter two data:");
	int x = 0;
	int y = 0;
	scanf("%d %d",&x, &y);
	int ret = GreatestCommonDivisor(x,y);
	printf("%d\n", ret);

	////写一个代码：打印100~200之间的素数（即质数，只能被1和她本身整除的数）
	//int i = 100;
	//for (; i <= 200; i++){
	//	if (IsSu(i)){
	//		printf("%d ", i);
	//	}
	//}
	//printf("\n");

	////100不是闰年
	////400，800不是闰年
	////打印1000年到2000年之间的闰年（4年一润，百年不润，逢400年再闰）能被4整除不能被一百整除或者能被400整除
	//int year = 1000;
	//for (; year <= 2000;year++){
	//	if (1 == IsRun(year)){
	//		printf("%d ", year);
	//	}
	//}
	//printf("\n");


	//window10开启talent
	//https://jingyan.baidu.com/article/fb48e8bee0d7446e622e143d.html
	//window10在dos环境下看新球大战
	//https://blog.csdn.net/idog149tao/article/details/50589393
	//一些常见的dos命令
	//1.dos下显示计算机硬件信息
	//systeminfo
	//2.打开计算器
	//calc
	//3.清屏
	//cls
	//4.dir
	//5.访问磁盘
	//cd:D//盘符
	//6.关机
	//shutdown -s -t 180//-s 结束进程 -t 设置时间
	//7.取消关机
	//shutdown -a
	//osk
	//打开虚拟键盘

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

	//code2//猜数字游戏
	//int quit = 0;
	//while (!quit){
	//	Menu();
	//	int select = 0;
	//	scanf("%d", &select);
	//	switch (select){
	//	case 1:
	//		Game();
	//		printf("要不要再搞一把？\n");
	//		break;
	//	case 2:
	//		quit = 1;
	//		printf("Game end!\n");
	//		break;
	//	default:
	//		printf("你的输入有误，请重新输入！\n");
	//		break;
	//	}
	//}
//	//code1
//	//编写代码实现，模拟用户登录的情景，并且只能登录三次
//	char name[SIZE];
//	char passwd[SIZE];
//	int count = 0;//默认尝试登录次数
//START:
//	count = TRY_COUNT;
//	while (count > 0){
//	printf("请输入你的账号#  ");
//	scanf("%s",name);
//	printf("请输入你的密码#  ");
//	scanf("%s", passwd);
//	if (strcmp(name, DEFAULT_NAME) == 0 && strcmp(passwd, DEFAULT_PSD) == 0){
//		printf("欢迎 %s 进入！\n", name);
//		break;
//	}
//	else{
//		count--;
//		printf("登录失败，请检查你的用户名或密码！你还剩 [%d] 次机会\n",count);
//	}
//	}
//	if (count == 0){
//		printf("登录失败！请60S之后再试！\n");
//		int _time = 1;
//		while (_time <= 60){
//			printf("离上次登录，已经过了…%d\r",_time);
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