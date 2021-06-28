/*本题要求编写程序，计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中输出部分和的值，结果保留三位小数。*/
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
