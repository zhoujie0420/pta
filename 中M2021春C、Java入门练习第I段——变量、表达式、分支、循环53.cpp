/*输入一个非负整数n，生成一张3的乘方表，输出3^0~3^n的值。可调用幂函数计算3的乘方。

输入格式:
输入在一行中给出一个非负整数n。

输出格式:
按照幂的递增顺序输出n+1行，每行格式为“pow(3,i) = 3的i次幂的值”。题目保证输出数据不超过长整型整数的范围。*/
#include<stdio.h>
#include<math.h>
int main(){
	int n,i=0,x;
	scanf("%d",&n);
	 do{
	 	x=pow(3,i);
	 	printf("pow(3,%d) = %d\n",i,x);
	 	i++;
	 }while(i<=n);
}
