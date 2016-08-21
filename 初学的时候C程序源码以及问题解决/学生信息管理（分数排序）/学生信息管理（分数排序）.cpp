/*
   2013年9月1日 18:19:45
   学生信息管理（分数排序）
*/
# include <stdio.h>
# include <malloc.h>

struct Student
{
	char sex;
	float scort;
	char name[100];
};

void InputStudent (struct Student * Aprr,int len)//输入函数
{
	int i;
	char ch;

	for (i = 0; i < len;++i)
	{
		printf ("第%d个学生的信息：\n",i + 1);

		printf ("姓名：");
		scanf_s ("%s",Aprr[i].name,100);// VS中输入字符和字符串都要加长度，name已经是字符串名字是地址，输入时不用加&
		while ( (ch=getchar()) !='\n' )//清除上次scanf输入的垃圾数据，不然
			continue;          

		printf ("性别（男女/N/F）：");
		scanf_s (" %c", &Aprr[i].sex,1);
		while ( (ch=getchar()) !='\n' )
			continue;          

		printf ("成绩：");
		scanf_s ("%f",&Aprr[i].scort);
		while ( (ch=getchar()) !='\n' )
			continue;          
	}
}

void OutputStudent (struct Student * Aprr, int len)//输出函数
{
	int j;
	for (j = 0; j < len; ++j)
	{
		printf ("姓名：%s\n",Aprr[j].name);

		printf ("性别（男女/N/F）：%c\n",Aprr[j].sex);

		printf ("成绩：%f\n",Aprr[j].scort);
	}
}

void sort (struct Student * Aprr, int len) //冒泡排序函数降序
{
	int i,j;
	struct Student t;

	for(i = 0;i < len -1;++i)
	{
		for (j = 0; j < len - 1 - i; ++j)
		{
			if (Aprr[j].scort < Aprr[j + 1].scort)//按分数排序
			{
				t = Aprr[j];                      //这里是互换整个学生的所有信息
				Aprr[j] = Aprr[j + 1];
				Aprr[j + 1] = t;
			}
		}
	}
}

int main (void)
{
	int len;
	struct Student * P;

	printf ("请输入学生的个数:\n");
	printf ("len = ");
	scanf_s ("%d",&len);

	P = (struct Student *)malloc(len * sizeof(struct Student));

	InputStudent (P,len);
	sort (P,len);

	printf ("\n\n\n");
	printf ("学生成绩排名:\n");

	OutputStudent (P,len);

	return 0;
}