/*��Ȼ���� e �����ü��� 1+1/1!+1/2!+?+1/n!+? �����Ƽ��㡣����Ҫ��Ը����ķǸ����� n����ü�����ǰ n+1 ��͡�

�����ʽ:
�����һ���и����Ǹ����� n����1000����

�����ʽ:
��һ����������ֺ͵�ֵ������С������λ��*/
#include<stdio.h>
double f(int n)
	{
		int m=1;
		for(int i=1;i<=n;i++)
		m*=i;
		return m;
	}
int main(){
	int n,cnt=1;
	double sum=1;
	scanf("%d",&n);
	do{
		sum=sum+1.0/(f(cnt)*1.0);
		cnt++; 
	}while(cnt<=n);
	printf("%.8f",sum);
}
