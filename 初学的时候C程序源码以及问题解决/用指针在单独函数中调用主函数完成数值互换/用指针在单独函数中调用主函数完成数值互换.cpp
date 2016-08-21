/*
  2013年8月21日 18:44:28
  目的：用指针在单独函数中调用主函数完成数值互换
*/
#include <stdio.h>
void zz (int *, int *);

int main (void)
{
	int a;
	int b;

	scanf_s ("%d %d", &a, &b);

	zz (&a, &b);

	printf ("a = %d, b = %d",a, b);

	return 0;
}

void zz (int * p, int * q)
{
	int t;

	t = *p;//*p表示a 只有这样才可以改变主函数的a和b的值；
	*p = *q;
	*q = t;

}
