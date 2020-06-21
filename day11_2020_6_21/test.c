#include "test.h"

int nk(int n, int k)
{
	//2^10
	//2*2^9
	//...2^1
	if (k == 1){
		return n;
	}
	return n*nk(n, k - 1);
}

int DigitSum(int n)
{
	//1729
	//172(17(1+7)+2)+9
	if (n < 10){
		return n;
	}
	else{
		return n % 10 + DigitSum(n / 10);
	}
}

static int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0'){
		str++, count++;
	}
	return count;
}

void ReverseString(char* str)
{
	//code3
	//abcd1234\0
	//a
	//*bcd1234
	//4bcd1234
	//4bcd123\0
	//4(bcd123:µİ¹é)\0(a)
	char* start = str;
	char* end = str + my_strlen(str) - 1;
	char temp = *start;
	*start = *end;

	*end = '\0';
	if (my_strlen(str + 1) >= 2){
		ReverseString(str + 1);
	}

	*end = temp;

	//code2 ÄæÏò´òÓ¡
	//if (*str != '\0'){
	//	ReverseString(str + 1);
	//	printf("%c", *str);
	//}

	//code1
	//char* start = str;
	//char* end = str + strlen(str) - 1;
	//while (start < end){
	//	char temp = *start;
	//	*start = *end;
	//	*end = temp;
	//	start++, end--;
	//}
}