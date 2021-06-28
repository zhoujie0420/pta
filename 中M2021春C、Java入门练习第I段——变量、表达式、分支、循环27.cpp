/*一对兔子，从出生后第3个月起每个月都生一对兔子。小兔子长到第3个月后每个月
又生一对兔子。假如兔子都不死，请问第1个月出生的一对兔子，至少需要繁衍到第几个月时兔子总数才可以达到N对？

输入格式:
输入在一行中给出一个不超过10000的正整数N。

输出格式:
在一行中输出兔子总数达到N最少需要的月数。*/
#include<stdio.h>
long fib(int n){
	if(n==1){
		return 1;
	}else if(n==2){
		return 3;
	}else {
		return (fib(n-1)+fib(n-2));
	}
}
int main()
{
	int n,m,i=0;
	scanf("%d",&n);
	do
	{
		
	i++;
	m=fib(i);

	}while(m<=n);
	printf("%d",i);
}
