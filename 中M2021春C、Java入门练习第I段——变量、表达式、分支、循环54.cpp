/*����Ҫ���д���򣬼������� 1!+2!+3!+..... ��ǰN��֮�͡�

�����ʽ:
������һ���и���һ��������12��������N��

�����ʽ:
��һ����������������*/
#include<stdio.h>
int fun(int n)
	{
		int m=1;
		for(int i=1;i<=n;i++)
		m*=i;
		return m;
	}
	int main(){
		int sum=0,n,i=1;
		scanf("%d",&n);
		do{
			sum=sum+fun(i);
			i++;
		}while(i<=n);
		printf("%d",sum);
	}
