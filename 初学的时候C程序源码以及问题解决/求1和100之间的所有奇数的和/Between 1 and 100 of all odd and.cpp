/*
  2013年7月26日 13:02:04
  目的：求1和100之间的所有奇数的和
*/
#include<stdio.h>

int main (void)
{
	int i;
	int sum = 0;

	for (i = 1;i < 100; i += 2)//for 循环
	{
		sum = sum + i;
	}

	printf ("sum = %d\n", sum);

	return 0;
}
/*
   在vs2012中的输出结果：
   ——————————————————
  sum = 2500

   ——————————————————
*/