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
		printf("����� > = <  (С�ھ���1�����ھ���-1�����ھ���0) %d %d %d \n",mid,max,min);
		scanf("%s",&buf);
		flag=atoi (buf);
//		printf("flag=%d\n",flag); �����õ�
		step++;
		if (flag==0) {
			printf("�ҵ�%d",mid);
			break;
		} else if (flag>0) {// �û���<������
				max = mid-1;
		} else  {
				min = mid+1;
		}
	}
	printf("��%d��",step);
	return 0;
}