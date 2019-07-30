#include <stdio.h>
int main(void)
{
	int min = 0;
	int max = 100;
	int step = 0;
	char buf [16];
	int flag = 0;
	while (1) {
		int mid = min-(max - min) / 2;
		printf("你的数 > = <  (小于就输1，大于就输-1，等于就输0) %d %d %d \n",mid,max,min);
		scanf("%s",&buf);
		flag=atoi (buf);
//		printf("flag=%d\n",flag); 纠错用的
		step++;
		if (flag==0) {
			printf("找到%d",mid);
			break;
		} else if (flag>0) {// 用户数<机器数
				max = mid-1;
		} else  {
				min = mid+1;
		}
	}
	printf("共%d步",step);
	return 0;
}
