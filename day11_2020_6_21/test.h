#ifndef _TEST_H_
#define _TEST_H_

#include <stdio.h>
#include <windows.h>

#pragma warning (disable:4996)

#define N 10

//��Ŀ���ƣ��ַ������򣨵ݹ�ʵ�֣�
//��Ŀ���ݣ�
//��дһ������ reverse_string(char* string)(�ݹ�ʵ��)
//ʵ�֣��������ַ����е��ַ���������
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//char str[] = "abcd1234";
void ReverseString(char* str);

//��Ŀ���ƣ�����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//��Ŀ���ݣ�дһ���ݹ麯��DigitSum(n),����һ���Ǹ����������������������֮��
//���磬����DigitSum(1729),��Ӧ�÷���1+7+2+9�����ĺ���19
//���룺1729�������19
int DigitSum(int n);

//��Ŀ���ƣ��ݹ�ʵ��n��k�η�
//��Ŀ���ݣ���дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
int nk(int n, int k);
#endif