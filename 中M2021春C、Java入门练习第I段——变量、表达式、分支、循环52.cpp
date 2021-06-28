/*本题要求编写程序,计算序列 1 - 1/4 + 1/7 - 1/10 + ... 的前N项之和。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后三位。题目保证计算结果不超过双精度范围。*/
#include<stdio.h>
int main(){
	int n,cnt=1,b;
	double sum=0;
	scanf("%d",&n);
	do{
		if(cnt%2!=0){
			b=1;
		}else{
			b=-1;
		}
		sum=b*1.0/(3*cnt-2)+sum;
		cnt++;
	}while(cnt<=n);
	printf("sum = %.3f",sum);
} 
