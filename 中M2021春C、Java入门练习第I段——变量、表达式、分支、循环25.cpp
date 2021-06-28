/*本题要求计算给定的一系列正整数中奇数的和。

输入格式:
输入在一行中给出一系列正整数，其间以空格分隔。当读到零或负整数时，表示输入结束，该数字不要处理。

输出格式:
在一行中输出正整数序列中奇数的和。*/
#include<stdio.h>
int main()
{
	int n,sum=0;
do{
	scanf("%d",&n);
	if(n<=0){
		break;
	}else if(n==1||n%2==1){
		sum=sum+n;
	}
	
}while(n>0); 
	printf("%d",sum); 
}
