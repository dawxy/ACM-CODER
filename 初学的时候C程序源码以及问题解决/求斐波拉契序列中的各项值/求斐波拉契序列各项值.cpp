/*
  2013年7月27日 13:07:15
  目的：求斐波拉契序列中的各项值
*/

#include<stdio.h>

int main (void)
{
	int n;
	int f1, f2, f3;
	int i;
	char ch;

	xy:

	printf ("请输入要求的项数：");
	scanf_s ("%d", &n);

	f1 = 1;
	f2 = 2;

	if (1 == n)
	{
		printf ("%d\n", n);
	}
	else if (2 == n)
	{
		printf ("%d\n", n);
	}
	else if (n >= 3)
	{
		for (i = 3; i <= n; ++i)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
		printf ("%d", f3);
	}
	else 
	{
		printf ("请输入一个正整数\n");

		while ( (ch=getchar()) !='\n' )//清除上次scanf输入的垃圾数据，不然
		continue;

		goto xy;
	}

	return 0;
}