/*
　　2013年9月1日 14:15:09
  　冒泡排序（升序）输入６个数字排序
*/
#include <stdio.h>

void sort (int * a, int len) //按升序排
{
	int i, j, t;

	for (i = 0; i < len - 1; ++i)
	{
		for (j = 0; j < len - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])// 这里>为升序，<为降序；
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}

int main (void)
{
	int a[6];
	int i = 0;
	char ch;

	printf ("请输入６个数字（中间以空格分开）\n");

	scanf_s ("%d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);

	while ( (ch=getchar()) !='\n' )//清除上次scanf输入的垃圾数据
		continue;

	sort (a, 6);

	for (i = 0; i < 5; ++i)
	{
		printf ("%d<", a[i]);
	}
	printf ("%d\n", a[5]);

	return 0;
}