#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct std	//结构体
{
/*	char name[20]; *///姓名
	int s1;	//5门科目分数
	int s2;
	int s3;
	int s4;
	int s5;
};

int sum (struct std *s) //自定义函数
{
	return s->s1+s->s2+s->s3+s->s4+s->s5;
}

int main(void){
	int i,j;
	struct std temp;
	struct std student[10];
	srand(time(NULL));

	for (i=0;i<sizeof (student)/sizeof (struct std);i++){	//for循环
		student[i].s1=(rand()%101);
		student[i].s2=(rand()%101);
		student[i].s3=(rand()%101);
		student[i].s4=(rand()%101);
		student[i].s5=(rand()%101);
	}
	for(i=0;i<sizeof(student)/sizeof(struct std);i++)
	{
		for(j=i+1;j<sizeof(student)/sizeof(struct std);j++)
		{
			int m1=sum(student+i);
			int m2=sum(student+j);
			if(m1<m2)	//IF函数排序
			{
					temp=student[i];
					student[i]=student[j];
					student[j]=temp;
			}
		}
	}
	printf("语 数 外 物 化 总分\n");

	for(i=0;i<sizeof(student)/sizeof(struct std);i++)
	{	
		printf("%d %d %d %d %d %d\n",student[i].s1,student[i].s2,student[i].s3,student[i].s4,student[i].s5,sum(&student[i]));
	}
	return 0;
}
