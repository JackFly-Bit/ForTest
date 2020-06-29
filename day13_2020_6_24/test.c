#include <stdio.h>
#include <windows.h>

int main()
{
	int a = 1234;
	while (a){
		printf("%d ", a % 10);
		a /= 10;
	}
	system("pause");
	return 0;
}