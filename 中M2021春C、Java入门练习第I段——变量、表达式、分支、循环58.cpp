/*已知函数ex次方可以展开为幂级数1+x+x2次方 /2!+x3/3!+...+xk/k!+。现给定一个实数x，要求利用此幂级数部分和求ex的近似值，
求和一直继续到最后一项的绝对值小于0.00001。

输入格式:
输入在一行中给出一个实数x∈[0,5]。

输出格式:
在一行中输出满足条件的幂级数部分和，保留小数点后四位。*/
#include<stdio.h>
#include<math.h>
double f(int n)
	{
		int m=1;
		for(int i=1;i<=n;i++)
		m*=i;
		return m;
	}
int main(){
	 double x;
	 double sum=0;
	 int i=1;
	 scanf("%d,&x");
	 do{
	 	sum=sum+pow(x,i)*1.0/f(i);
	 	i++;
	 }while(pow(x,i)*1.0/f(i)<0.00001);
	 printf("%.4f",sum);
} 
