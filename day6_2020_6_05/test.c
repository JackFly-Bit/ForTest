#include <stdio.h>
#include <windows.h>

//void Show(){
//	static 修饰局部变量只改变了变量的生命周期
//	让静态局部变量出了作用域依然存在，到程序结束生命周期才结束，但是他的作用域其实是没有变化的
//	static int i = 0;//局部变量，自动变量，临时变量
//	i++;
//	printf("current i is :%d, %p\n", i,&i);
//}

//定义只能定义一次（开辟空间，放置内容），声明可以多次声明（告诉test.c在某个地方有这个全局变量）
//全局变量是支持跨文件访问的
//extern int g_value;

//函数访问也是支持跨文件访问的
//extern void Show();

//只做简单的文本替换
//便于代码的维护性
//方便阅读，能做到见到名字知道意思
//#define M 1234
//10*DOUBLE(10+1) 10*10+1+10+1
//Double(10) 10*10
//宏定义是在编译之前进行的，算数运算实在运行的时候进行的
//DOUBLE(10+1) 10+1*10+1
//#define DOUBLE(x) x*x
//DOUBLE(10+1) (10+1)+(10+1)
//#define DOUBLE(x) (x)*(x)
//#define DOUBLE(x) x+x
//#define DOUBLE(x) ((x)+(x)）
//int Double(int x){
//	return x*x;
//}
int main(){

	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(long long*));
	//所有指针在32位机平台下都是4个字节。
	//所有指针在64位机平台下都是8个字节。
	

	//int a = 10;
	//int *p = &a;

	//printf("%p.%p, %d,%d\n", &a, p, a, *p);
	//对指针进行解引用，代表的是指针所指向的变量，但具体用的是变量的空间还是内容要取决于是左值还是右值
	//*p = 20;
	//int b = *p;

	//printf("%d,%d\n",a,b);
	//计算机访问内存的基本单元是字节！
	//以32位机为例，2^32*1字节 = （2^10）*（2^10）*（2^10）（2^2）*1字节 = 4GB
	//int a = 10;
	//p是一个变量，p有没有开辟空间呢？有（32位机，4字节）（64位机，8字节）
	//地址是数据吗？是
	//数据可以放在空间里面吗？可以
	//p<-地址
	//int *p = &a;
	//int x;
	//int *p;










	//printf("%d\n", Double(10));
	//printf("%d\n",10*DOUBLE(10+1));

	//int x = M;
	//int Mx =10;
	//printf("M = %d\n", x);
	//printf("M = %d\n", M);

	//Show();
	/*printf("%d\n", g_value);*/
	//int i = 0;
	//for (; i < 10; i++){
	//	Show();
	//	Sleep(500);
	//}

	system("pause");
	return 0;
}