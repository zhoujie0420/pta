/*本题要求两个给定正整数的最大公约数和最小公倍数。

输入格式:
输入在一行中给出两个正整数M和N（≤1000）。

输出格式:
在一行中顺序输出M和N的最大公约数和最小公倍数，两数字间以1空格分隔。*/
#include<stdio.h>
int main()
{
	int x,y,max,min,z,m,n;
	scanf("%d%d",&x,&y);
	m=x;
	n=y;
	do{
	z=x%y;
	x=y;
	y=z;
}while(y!=0);
max=x;
min=m*n/x;
printf("%d %d",max,min); 
}
