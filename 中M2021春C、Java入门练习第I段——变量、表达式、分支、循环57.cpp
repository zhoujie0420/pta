/*自然常数 e 可以用级数 1+1/1!+1/2!+?+1/n!+? 来近似计算。本题要求对给定的非负整数 n，求该级数的前 n+1 项和。

输入格式:
输入第一行中给出非负整数 n（≤1000）。

输出格式:
在一行中输出部分和的值，保留小数点后八位。*/
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
