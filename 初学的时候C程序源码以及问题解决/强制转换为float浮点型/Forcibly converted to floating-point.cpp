/*
  2013年7月26日 16:14:53
  目的：求1+1/2+1/3+...+1/100的值
  注意：强制类型转换（）（）
*/
#include<stdio.h>

int main (void)
{
	int i;
	float sum = 0;

	for (i = 1;i <= 100; ++i)
	{
		sum = sum + 1 / (float) i;//强制类型转换：这里把i强制转换为float型,不能写成(float) (1/i); 
		                            //更简单的写法：sum = sum + 1.0/i;
	}
	printf ("sum = %f\n", sum);//float必须用%f输出

	return 0;
}

/*
  在vs2012中的输出结果：
  ——————————————————
  sum = 5.187378

  ——————————————————
*/