/*����Ҫ��ͳ�Ƹ�������M��N�����������ĸ�������������͡�

�����ʽ:
������һ���и�������������M��N��1��M��N��500����

�����ʽ:
��һ����˳�����M��N�����������ĸ����Լ����ǵĺͣ����ּ��Կո�ָ���*/

#include<stdio.h>
#include<math.h>
int Isprime(int n);
int main()
{
	int m,n,count=0,sum=0,i;
	scanf("%d %d",&m,&n);
	if(m>=1&&m<=n&&n<=500)
	{
		for(i=m;i<=n;i++)
		if(Isprime(i))
		{
		
			count++;
			sum=sum+i;
		}
	}
	printf("%d %d",count,sum);
	return 0;
} 
int Isprime(int n)//����������1 
{
	int isprime=1,i;
	if(n<2)
	isprime=0;
	else
	{
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				isprime=0;
				break;
			}
		}
		
	}
	return isprime;
}

