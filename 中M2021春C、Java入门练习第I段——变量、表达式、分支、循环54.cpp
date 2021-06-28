/*本题要求编写程序，计算序列 1!+2!+3!+..... 的前N项之和。

输入格式:
输入在一行中给出一个不超过12的正整数N。

输出格式:
在一行中输出整数结果。*/
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
