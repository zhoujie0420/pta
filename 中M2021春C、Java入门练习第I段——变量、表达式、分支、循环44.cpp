/*黑洞数也称为陷阱数，又称“Kaprekar问题”，是一类具有奇特转换特性的数。

任何一个各位数字不全相同的三位数，经有限次“重排求差”操作，总会得到495。
最后所得的495即为三位黑洞数。所谓“重排求差”操作即组成该数的数字重排后的最大数减去重排后的最小数。（6174为四位黑洞数。）

例如，对三位数207：

第1次重排求差得：720 - 27 ＝ 693；
第2次重排求差得：963 - 369 ＝ 594；
第3次重排求差得：954 - 459 ＝ 495；
以后会停留在495这一黑洞数。如果三位数的3个数字全相同，一次转换后即为0。

任意输入一个三位数，编程给出重排求差的过程。*/
#include<stdio.h>
int max(int x){
	int a,b,c,t;
	a=x/100;
	b=x/10%10;
	c=x%10;
		if(a<b) {t=a;a=b;b=t;} 	//三个if是把a,b,c从大到小排序 
		if(a<c) {t=a;a=c;c=t;}
		if(b<c) {t=b;b=c;c=t;}
		return a*100+b*10+c;
		}
int min(int x){
	int a,b,c,t;
	a=x/100;
	b=x/10%10;
	c=x%10;
		if(a<b) {t=a;a=b;b=t;} 	//三个if是把a,b,c从大到小排序 
		if(a<c) {t=a;a=c;c=t;}
		if(b<c) {t=b;b=c;c=t;}
		return c*100+b*10+a;
		}
		int main(){
			int x,cnt=1;
	
			scanf("%d",&x);
	
		do{
			printf("%d: %d - %d = %d\n",cnt,max(x),min(x),max(x)-min(x));
			cnt++;
			x=max(x)-min(x);
		}while(max(x)-min(x)!=495);
	}
		
