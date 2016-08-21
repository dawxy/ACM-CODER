/*
2013年7月26日 14:01:01
目的：求1到100之间的奇数的平均值
*/
#include<stdio.h>

int main (void)
{
	int i;
	int sum = 0;//定义sum是1到100之间奇数的和
	int cnt = 0;//定义cnt是1到100之间奇数的个数
	float avg;//avg是平均值

	for (i = 1; i <= 100; ++i)
	{
		if (1 == i%2)
		{
			sum += i;
			++cnt;
		}
	}

	avg = sum / (float) cnt;//强制转换结果为浮点型,可以写成avg = 1.0*sum/ cnt;

	printf ("平均值是%f\n", avg);

	return 0;
}

/*
在vs2012中的输出结果：
——————————————————
平均值是50.000000

——————————————————
*/