/*���ڸ�����������N��������λ�������λ����֮�͡�

�����ʽ��
������һ���и���һ��������10
?9
?? ��������N��

�����ʽ��
��һ�������N��λ�������λ����֮�ͣ��м���һ���ո������*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,cnt,c,sum=0;
	scanf("%d",&n);
	do {
		c=n-n/10*10;
		n=n/10;
		sum=sum+c;
		cnt++;
	}while(n!=0);
	printf("%d %d",cnt,sum);
}
