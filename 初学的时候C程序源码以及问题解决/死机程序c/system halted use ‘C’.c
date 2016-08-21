#include<stdio.h>
#include<windows.h>
#include<malloc.h>

int main (void)
{
	int c;
	int i;
	int j;

	c = 2;

	if (c == 1)
	{
		system ("shutdown-s-t 60");
	}
	
	else if (2 == c)
	{
		printf ("我要惩罚你 哼！\n");
		for (j = 0;j<1;++j)
			system ("start");
	}
	else
	{
		printf ("你打错了 请重新输入\n");
	}

	return 0;
 }

