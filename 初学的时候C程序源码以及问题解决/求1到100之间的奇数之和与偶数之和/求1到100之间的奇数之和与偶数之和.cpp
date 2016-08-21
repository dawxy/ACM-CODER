/*
  2013年7月26日 14:11:36
  目的:求1到100之间的奇数之和与偶数之和
*/
#include<stdio.h>

int main (void)
{
	int i;
	int sumj = 0;//定义奇数之和
	int sumo = 0;//定义偶数之和

	for (i = 1;i <= 100;++i)
	{
		if (1 == i%2)
		{ 
			sumj += i;
		}
		else
		{
			sumo += i;
		}
	}
	
	printf ("奇数和为%d 偶数和为%d\n",sumj, sumo);

	return 0;
}

/*
  在vs2012中的输出结果：
  ——————————————————
  奇数和为2500 偶数和为2550

  ——————————————————
*/