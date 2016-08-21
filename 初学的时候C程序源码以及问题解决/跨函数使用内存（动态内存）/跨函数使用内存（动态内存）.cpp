/*
  2013年8月30日 18:45:16
  目的：跨函数使用内存（动态内存）
*/


# include <stdio.h>
# include <malloc.h> //动态内存头文件

void f (int ** p)
{
	*p = (int *)malloc(sizeof(int));//写成（int *）malloc （4）不好 有些机器上int不是4个字节

	**p = 5; //*p是一个地址 不能直接被赋值
}

int main (void)
{
	int * p;
	f(&p);
	printf ("%d", *p);

	return 0;
}

/*
在vs2012中的输出结果：
——————————————————
5
——————————————————
*/