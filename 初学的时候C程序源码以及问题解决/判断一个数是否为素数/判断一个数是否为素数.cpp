/*
  2013年8月4日 14:10:14
  目的：判断一个数是否为素数
*/
# include<stdio.h>
#include<math.h>

bool IsPrime (int val) //bool是一种新的数据类型 只有真假
{
	int i, qval;
	qval = (sqrt)(val*1.0);//只要说明val在2到√2之间都不能被整除
	for (i = 2; i <= qval; ++i)
	{
		if (0 == val%i)
			break;
	}
	if (qval+1 == i)
		return true;
	else 
		return false;
}

int main (void)
{
	int m;

	while (1)
	{
		scanf_s ("%d", &m);
		if (0 == m)
			break;
		if ( IsPrime(m) )
			printf ("YES!\n");
		else 
			printf ("NO!\n");
	}

	return 0;
}