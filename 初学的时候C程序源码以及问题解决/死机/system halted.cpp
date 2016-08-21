/*2013年7月25日 09:27:17
郝斌视频中的一个内存泄漏程序
*/
#include <stdio.h>
#include <malloc.h>

int main(void)
{
	while (1)
	{
		int*p = (int *)malloc(100000);
	}

	return 0;
}