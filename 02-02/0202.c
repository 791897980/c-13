#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>




/*int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//��������-ʹ�����뺯��scanf
	scanf("%d%d", &num1, &num2);//&ȡ��ַ����
	
	//c�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ�档
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
	//δ�����ı�ʶ��
	//����
	extern int g_val;//extern�����������ⲿ���ŵġ�
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