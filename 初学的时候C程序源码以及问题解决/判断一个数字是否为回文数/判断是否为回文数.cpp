/*
2013年7月27日 12:28:22
目的：判断一个数字是否为回文数
*/
#include<stdio.h>

int main (void)
{
	int val;
	int m;
	int sum = 0;

	printf ("请输入需要判断的数字：");
	scanf_s ("%d", &val);

	m = val;                       //等价于   for (m = val; m ; m /= 10)
	while(m)                       //              sum = sum * 10 + m % 10;
	{
		sum = sum * 10 + m % 10;
		m /= 10;
	}                              //

	if (sum == val)
	{
		printf ("yes\n");
	}
	else
		printf ("no\n");

	return 0;
}
