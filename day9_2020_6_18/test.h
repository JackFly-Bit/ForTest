//预处理符，防止头文件被重复包含
#ifndef _TEST_H_
#define _TEST_H_

#include <stdio.h>
#include <windows.h>

//编写函数不允许创建临时变量，求字符串的长度
//int MyStrlen(const char* str);

////函数的声明和定义是可以分开的，关键是看有没有函数体，所以声明时候可以省略extern
////但是变量的声明和定义是分不开的，因为去掉extern，它可能是声明也可能是定义只不过没有初始化
//extern int g_val;
int Add(x, y);
//int MyDiv(int x, int y);
//int MySub(int x, int y);
//int MyMul(int x, int y);

#endif