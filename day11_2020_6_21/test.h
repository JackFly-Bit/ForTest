#ifndef _TEST_H_
#define _TEST_H_

#include <stdio.h>
#include <windows.h>

#pragma warning (disable:4996)

#define N 10

//题目名称：字符串逆序（递归实现）
//题目内容：
//编写一个函数 reverse_string(char* string)(递归实现)
//实现：将参数字符串中的字符反向排序。
//要求：不能使用C函数库中的字符串操作函数。
//char str[] = "abcd1234";
void ReverseString(char* str);

//题目名称：计算一个数的每位之和（递归实现）
//题目内容：写一个递归函数DigitSum(n),输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729),则应该返回1+7+2+9，它的和是19
//输入：1729，输出：19
int DigitSum(int n);

//题目名称：递归实现n的k次方
//题目内容：编写一个函数实现n的k次方，使用递归实现
int nk(int n, int k);
#endif