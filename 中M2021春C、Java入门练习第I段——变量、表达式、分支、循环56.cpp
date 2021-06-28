/*本题要求编写程序，计算序列部分和 1 - 1/4 + 1/7 - 1/10 + ... 直到最后一项的绝对值不大于给定精度eps。

输入格式:
输入在一行中给出一个正实数eps。

输出格式:
在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后六位。题目保证计算结果不超过双精度范围。*/
#include<stdio.h>
int main(){
	 cnt=1,b;
	double n,sum=0;
	scanf("%lf",&n);
	do{
		if(cnt%2!=0){
			b=1;
		}else{
			b=-1;
		}
		sum=b*1.0/(3*cnt-2)+sum;
		cnt++;
	}while(1.0/(cnt*3-2)>=n);
	printf("sum = %lf",sum);
} 
