#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	scanf("%d", &a);
	b = a % 10;
	c = (a % 100 - a % 10) / 10;
	d = (a % 1000 - a % 100) / 100;
	e = (a % 10000 - a % 1000) / 1000;
	printf("%d %d %d %d", b, c, d, e);


	
	return 0;
}