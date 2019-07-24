#include <stdio.h>
#define true 1
#define false 0
int nu(int num) //是否素数
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
	while(1){
		printf("请输入一个偶数:");
		scanf("%d",&a);
		if(a%2!=0)
		{
			printf("输入的数不是偶数");
			return 0;
		}
		for(i=1;i<a;i+=2)
		{
			if(nu(i) && nu(a-i))
			{
			b=a-i;
			printf("%d+%d=%d\n",b,a-b,a);
			}
		}
	}
	return 0;
}
