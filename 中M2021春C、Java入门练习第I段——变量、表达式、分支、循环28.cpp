/*对于给定的正整数N，求它的位数及其各位数字之和。

输入格式：
输入在一行中给出一个不超过10
?9
?? 的正整数N。

输出格式：
在一行中输出N的位数及其各位数字之和，中间用一个空格隔开。*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,cnt,c,sum=0;
	scanf("%d",&n);
	do {
		c=n-n/10*10;
		n=n/10;
		sum=sum+c;
		cnt++;
	}while(n!=0);
	printf("%d %d",cnt,sum);
}
