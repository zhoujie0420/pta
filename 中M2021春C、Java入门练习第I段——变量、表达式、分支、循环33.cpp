/*本题要求统计给定整数M和N区间内素数的个数并对它们求和。

输入格式:
输入在一行中给出两个正整数M和N（1≤M≤N≤500）。

输出格式:
在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。*/

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
int Isprime(int n)//是素数返回1 
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

