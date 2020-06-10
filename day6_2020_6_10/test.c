#include <stdio.h>
#include <windows.h>

#define SIZE 16

struct Stu{
	char name[SIZE];
	int age;
	char sex;
	char telephone[SIZE];
};

#pragma warning (disable:4996)
//#开头—>预处理符号
#define ODD(x) ((x)&1)

//返回值：0（否），1（是）
int isOdd(int _data){
	//一个数字是否是奇数，可以看最后一个bit位（1->奇数）（2->偶数）
	return _data & 1;

	//return _data % 2;

	//return _data % 2 == 1;

	//return _data % 2 == 1 ? 1 : 0;

	//int ret = (_data % 2 == 1 ? 1 : 0);
	//return ret;

	//if (_data % 2 == 1){
	//	return 1;
	//}
	//return 0;
}

int Max(int x, int y){
	return x > y ? x : y;
}

//int DeSort(int _Num1,int _Num2,int _Num3){
//	int temp = 0;
//	if (_Num2 > _Num1){
//		temp = _Num1;
//		_Num1 = _Num2;
//		_Num2 = temp;
//	}
//	if (_Num3 > _Num1){
//		temp = _Num1;
//		_Num1 = _Num3;
//		_Num3 = temp;
//	}
//	if (_Num3 > _Num2){
//		temp = _Num2;
//		_Num2 = _Num3;
//		_Num3 = temp;
//	}
//	return _Num1, _Num2, _Num3;
//}
int main(){
	int i = 0;
	for (i = 1; i < 100; i++){
		if (0 == i % 3){
			printf("%d ",i);
		}
	}

	//int Num1 = 0;
	//int Num2 = 0;
	//int Num3 = 0;
	//printf("Please Enter Three Numbers: ");
	//scanf("%d %d %d", &Num1, &Num2, &Num3);
	//int DeSort(Num1,Num2,Num3);
	//printf("%d>%d>%d", Num1, Num2, Num3);

	//int i = 0;
	//while (i <= 10){
	//	//if (5 == i){
	//	//	break;//跳出当前循环
	//	//}
	//	Sleep(500);
	//	printf(".");
	//	if (5 == i){
	//		i++;
	//		continue;//结束本次循环
	//	}
	//	printf("%d\n",i++);
	//}
	//printf("while end: %d\n", i);

	//printf("%d\n", Max(10, 20));

	//char arr[] = {'b','i','t'};
	//printf("%d\n",strlen(arr));

	//int n = 1;
	//int m = 2;
	//switch (n){
	//case 1:
	//	m++;
	//case 2 :
	//	n++;
	//case 3:
	//	switch (n){
	//		//switch允许嵌套使用
	//	case 1:
	//		n++;
	//	case 2:
	//		m++;
	//		n++;
	//		break;
	//	}
	//case 4:
	//	m++;
	//	break;
	//default:
	//	break;
	//}
	//printf("m = %d , n = %d\n",m,n);

	////int short char long longlong 
	//int day = 0;
	//printf("请输入你的日期 ");
	//scanf("%d",&day);
	//switch (day){//if:条件判断，分支
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//	printf("周内！\n");
	//	break;
	//case 6:
	//case 7:
	//	printf("周天！\n");
	//	break;
	//default:
	//	printf("day error!\n");
	//	break;
	//}

	////判断一个数是否为奇数
	//printf("Please Enter Your 范围:");
	//int start = 0;
	//int end = 0;
	//scanf("%d %d",&start ,&end);

	//for (; start <= end; start++){
	//	if (isOdd(start)){
	//		printf("%d ",start);
	//	}
	//	else{

	//	}
	//}
	//printf("\n");

	////判断一个数是否为奇数
	//printf("Please Enter Your Data:");
	//int data = 0;
	//scanf("%d",&data);
	////int ret = isOdd(data);
	///*if (isOdd(data)){*/
	//if (ODD(data)){
	//	printf("是！\n");
	//}
	//else{
	//	printf("不是！\n");
	//}

	//int a = 0;
	//int b = 2;
	//if (1 == a)
	//	if (2 == b)
	//		printf("hehe!\n");
	//else
	//	printf("haha!\n");

	//int flag = 1;
	//if (1 == flag){
	//	int x = 10;
	//	printf("%d\n",x);
	//}
	//int  x = 20;
	//printf("%d\n",x);

	//printf("Please Enter Your Age:");
	//int age = 0;
	//scanf("%d",&age);
	//if (age < 18){
	//	printf("未成年！\n");
	//}
	//else if (age < 30){//age >= 18 && age < 30
	//	printf("青年！\n");
	//}
	//else if (age < 50){
	//	printf("中年！\n");
	//}
	//else if (age < 80){
	//	printf("老年！\n");
	//}
	//else{
	//	printf("......\n");
	//}

	//int flag = 1;
	//if (1 == flag){
	//	printf("hello world!\n");
	//}
	//if (1 == flag % 2){
	//	printf("hello bit!\n");
	//}
	//else {
	//	//???
	//}

	//if (1 == flag){//非0为真，0为假
	//	printf("hello world!\n");
	//}
	//else if (2 == flag){
	//	printf("hello haha\n");
	//}
	//else if (3 == flag){
	//	printf("hello haha\n");
	//}
	//else if (4 == flag){
	//	printf("hello haha\n");
	//}
	//else{
	//	printf("hello hehe\n");
	//}
	//struct Stu tom = { "TOM", 13, 'M', "1234567" };
	//printf("%s,%d,%c,%s\n", tom.name, tom.age, tom.sex, tom.telephone);

	//struct Stu *s = &tom;;//如果指针不指向NULL这个指针就叫做“悬垂指针”或“野指针”
	//printf("%s,%d,%c,%s\n", s->name, s->age, s->sex, s->telephone);

	//printf("%s,%d,%c,%s\n", (*s).name, (*s).age, (*s).sex, (*s).telephone);
	
	system("pause");
	return 0;
}