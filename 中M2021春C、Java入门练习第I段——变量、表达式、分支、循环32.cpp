/*����Ҫ���д���򣬼��㽻������ 1-2/3+3/5-4/7+5/9-6/11+... ��ǰN��֮�͡�

�����ʽ:
������һ���и���һ��������N��

�����ʽ:
��һ����������ֺ͵�ֵ�����������λС����*/
#include<stdio.h>
#include<math.h>
int main()
{
	int N,a,n=1;
	float sum;
	scanf("%d",&N);
	
	do{
		a=pow(-1,n+1);
		sum=sum+a*n*1.0/(2*n-1);
		n++;
	}while (n<=N);
	printf("%.3f",sum); 
	return 0;
	
}
