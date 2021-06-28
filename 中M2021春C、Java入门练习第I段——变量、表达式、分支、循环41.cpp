/*对于给定的正整数N，需要你计算 S=1!+2!+3!+...+N!。

输入格式：
输入在一行中给出一个不超过10的正整数N。

输出格式：
在一行中输出S的值。*/
#include<stdio.h>
int p;
int fun(int p){
	int sum=1;
	do {
		sum=sum*p;
		p--;
	}while(p>0);
	return sum;
}
int main(){
	int s,n;
	scanf("%d",&n);
	do{
		s=s+fun(n);
		n--;
	}while(n>0);
	printf("%d",s);
}
