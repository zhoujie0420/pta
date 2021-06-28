/*本题要求编写程序，计算序列 2/1+3/2+5/3+8/5+... 的前N项之和。注意该序列从第2项起，每一项的分子是前一项分子与分母的和，分母是前一项的分子。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中输出部分和的值，精确到小数点后两位。题目保证计算结果不超过双精度范围。*/
#include<stdio.h>
int main()
{
	int  cnt=0,n;
double sum=2,t,a,b;
	scanf("%d",&n);
	a=2;
	b=1;
	if(n==1){
		sum=2;
	}else{
	
	do{
		t=a;
		a=a+b;
		b=t;
		cnt++;
		sum=sum+a*1.0/b;
	}while(cnt<n-1);
}	
	printf("%.2f",sum);
	return 0;
 } 
