#include <stdio.h>
#include <windows.h>

#pragma warning(disable:4996)
//文件 = 文件的内容 + 文件的属性
//元信息
//文件的操作：对内容的操作，对属性的操作
//路径本质：定位
//文件名称：确定某个路径下的指定文件
//文件名 = 文件主干 + 文件后缀
//E:\斗鱼视频\直播数据\xxx.png:绝对路径
//直播数据\xxx.png:相对路径
//C程序在启动的时候，由系统默认给我们打开三个文件，标准输入，标准输出，标准错误，对应的硬件设备依次是：键盘，显示器，显示器
//对应的FILE*分别叫做：stdin,stdout,stderr
//缓冲区是什么：就是一块内存区域
//缓冲区存在的价值：提高程序运行效率
//无缓存
//行缓冲：一般显示器对应采用的缓冲刷新方式
//全缓冲：普通硬盘上面的文件，C采用的是全缓冲
//文件指针：句柄
int main()
{
	FILE* fp = fopen("E:\\test.txt", "w");
	if (NULL == fp){
		perror("fopen");
		system("pause");
		return 1;
	}
	int a = 10000;//4字节
	//a(int)->string
	const char* str = "10000";
	fwrite(str, strlen(str), 1, fp);

	fclose(fp);
	system("pause");
}