/*2013年7月25日 11:43:58
  目的:清除上次scanf输入的垃圾数据
*/
#include<stdio.h>

int main (void)
{
	int i;
	char ch;

	scanf_s ("%d", &i);
	printf ("i = %d\n", i);
	//......
	while ( (ch=getchar()) !='\n' )//清除上次scanf输入的垃圾数据，不然
		continue;               //万一用户在输入i的值时后面不小心按到其他字母等垃圾数据会把这个垃圾数据直接引用到后面的j上 而不能输入j
	int j;
	scanf_s ("%d", &j);
	printf ("j = %d\n", j);

	return 0;
}