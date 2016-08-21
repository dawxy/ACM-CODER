/*2013年7月25日 17:41:59
  过程：输入一个数 显示出他的成绩等级
  目的：if中不能写成 90<=a<=100
*/
#include<stdio.h>


int main (void)
{
	float a;

	xy:

	scanf_s ("%f", &a); 

	if (90 <= a && a <= 100) //不能写成 90<=a<=100
	{
		printf ("优秀\n");

	}
	else if (80 <= a && a < 90)
	{
		printf ("良好\n");

	}
	else if (60 <= a && a < 80)
	{
		printf ("及格\n");

	}
	else if (0 <= a && a <60)
	{
		printf ("不及格\n");

	}
	else if ( a>100)
	{
		printf ("做梦！\n");

	}
	else
	{
		printf ("回家吧\n");

	}

	goto xy;

	return 0;
}