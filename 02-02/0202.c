#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>




/*int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//输入数据-使用输入函数scanf
	scanf("%d%d", &num1, &num2);//&取地址符号
	
	//c语言语法规定，变量要定义在当前代码块的最前面。
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}*/
/*int main()
{
	int num = 0;
	printf("num = %d\n", num);
	return 0;
}*/

/*int global = 2020;
void test()
{
	printf("test()-- %d\n", global);
}

int main()
{
	test();
	printf("%d\n", global);
	return 0;
}*/
/*int main()
{
	//未声明的标识符
	//声明
	extern int g_val;//extern是用来声明外部符号的。
	printf("g_val = %d\n", g_val);
	return 0;
}*/
int main()
{
	{
		int a = 10;
		printf("a = %d\n", a);//ok
	}
	
	return 0;
}