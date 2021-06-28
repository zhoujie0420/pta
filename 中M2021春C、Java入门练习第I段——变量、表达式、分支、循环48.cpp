/*本题要求编写程序，根据公式Cmn=n!/m!(n-m)!
算出从n个不同元素中取出m个元素（m≤n）的组合数。
建议定义和调用函数fact(n)计算n!，其中n的类型是int，函数类型是double。
输入格式:
输入在一行中给出两个正整数m和n（m≤n），以空格分隔。
输出格式:
按照格式“result = 组合数计算结果”输出。题目保证结果在double类型范围内。*/
#include<stdio.h>
double mul(int x){
	int sum=1;
	if(x==0){
	    return 1;
	}
	do{
		sum=sum*x;
		x--;
	}while(x>=1);
	return sum;
}
int main(){
	int m,n;
	double c;
	scanf("%d%d",&m,&n);
	c=mul(n)/(mul(m)*mul(n-m));
	printf("result = %.0f",c);
}
