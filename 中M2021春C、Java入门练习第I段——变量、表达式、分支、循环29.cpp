/*二分法求函数根的原理为：如果连续函数f(x)在区间[a,b]的两个端点取值异号，即f(a)f(b)<0，则它在这个区间内至少存在1个根r，即f(r)=0。

二分法的步骤为：

检查区间长度，如果小于给定阈值，则停止，输出区间中点(a+b)/2；否则
如果f(a)f(b)<0，则计算中点的值f((a+b)/2)；
如果f((a+b)/2)正好为0，则(a+b)/2就是要求的根；否则
如果f((a+b)/2)与f(a)同号，则说明根在区间[(a+b)/2,b]，令a=(a+b)/2，重复循环；
如果f((a+b)/2)与f(b)同号，则说明根在区间[a,(a+b)/2]，令b=(a+b)/2，重复循环。
本题目要求编写程序，计算给定3阶多项式f(x)=a3x3+a2x2+a1x1+a0在给定区间[a,b]内的根。

输入格式：
输入在第1行中顺序给出多项式的4个系数a3,a2,a1,a0在第2行中顺序给出区间端点a和b。题目保证多项式在给定区间内存在唯一单根。

输出格式：
在一行中输出该多项式在该区间内的根，精确到小数点后2位。*/
#include<stdio.h>
double f(double a3,double a2,double a1,double a0,double x){
	double f;
	f=a3*x*x*x+a2*x*x+a1*x+a0;
	return f;
}
int main(){
	double a3,a2,a1,a0;
	double a,b;
	int x=0,point,r;
	scanf("%lf %lf %lf %lf",&a3,&a2,&a1,&a0);
	scanf("%lf %lf",&a,&b);
	while(b-a>0.0001){
		if(f(a3,a2,a1,a0,a)*f(a3,a2,a1,a0,b)<0){
			if(f(a3,a2,a1,a0,(a+b)/2)==0){
				x=(a+b)*1000/2;
				break;
			}else if(f(a3,a2,a1,a0,(a+b)/2)*f(a3,a2,a1,a0,a)>0){
				a=(a+b)/2;
			}else{
				b=(a+b)/2;
			}
		}else if(f(a3,a2,a1,a0,a)==0){
			x=a*1000;
			break;
		}else if(f(a3,a2,a1,a0,b)==0){
			x=b*1000;
			break;
	    }
	    x=(a+b)*1000/2;
	}
	point=x%1000;
	x/=1000;
	r=point%10;
	point=point/10;
	if(r>=5){
		point++;
	}
	if(point<10){
		printf("%d.0%d",x,point);
	}else{
		printf("%d.%d",x,point);
	}

	return 0;
} 

