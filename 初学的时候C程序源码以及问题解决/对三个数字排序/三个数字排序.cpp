/*
  2013年8月31日 21:52:10
  对三个数字排序
*/
#include <stdio.h>

int main (void)
{
	int a,b,c;
	int t;

	scanf_s ("%d %d %d", &a, &b, &c);

	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}

	printf ("%d %d %d\n", a, b, c);

	return 0;
}