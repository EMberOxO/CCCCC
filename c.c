#include <stdio.h>
#define true 1
#define false 0
int nu(int num) //�Ƿ�����
{
	int i;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
		break;
		}
	}
	if(num==i)
	return 1;
	else
	return 0;
}

int main(void)
{
	int a;
	int b;
	int i;
	printf("������һ��ż��:");
	scanf("%d",&a);
	if(a%2!=0)
	{
		printf("�����������ż��");
		return 0;
	}
	for(i=1;i<a;i+=2)
	{
		if(nu(i),nu(b))
		{
		b=a-i;
		printf("%d+%d=%d\n",b,a-b,a);
		}
	}
	return 0;
}