/*
  2013年8月31日 19:57:38
  通过函数对结构体变量输入输出
*/
#include <stdio.h>
#include <string.h>//strcpy_s的头文件

struct Student 
{
	int age;
	char sex;
	char name[100];

};

void OutputStudent (struct Student * pstu)
{
	printf ("%d %s %c\n", pstu->age, pstu->name, pstu->sex);//%s是输出字符串不能输出字符 相反也同样 否则不报错但无法运行
}

void InputStudent (struct Student * pst)
{
	(*pst).age = 18;
	strcpy_s (pst->name, "小远");//strcpy_s是给字符串赋值的，把 小远 的内容复制到name；
	pst->sex = 'N';
}

int main (void)
{
	struct Student st;

	InputStudent (&st);
	OutputStudent (&st);


	return 0;
}