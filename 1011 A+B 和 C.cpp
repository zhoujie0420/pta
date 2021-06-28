/*给定区间  内的 3 个整数 A、B 和 C，请判断 A+B 是否大于 C。

输入格式：
输入第 1 行给出正整数 T (≤10)，是测试用例的个数。随后给出 T 组测试用例，每组占一行，顺序给出 A、B 和 C。整数间以空格分隔。

输出格式：
对每组测试用例，在一行中输出 Case #X: true 如果 A+B>C，否则输出 Case #X: false，其中 X 是测试用例的编号（从 1 开始）。*/
#include<stdio.h>
int main(){
	int n;
		int i=0;
		int p=0;
	struct shu{
		long a;
		long b;
		long c;
	
	};
		struct shu a[1000];
	scanf("%d",&n);
	do {
		scanf("%lf %lf %lf",&a[i].a,&a[i].b,&a[i].c);
		i++;
	}while(i<n);
	i=0;
	for(p=0;p<n;p++){
		if(a[i].a+a[i].b>a[i].c){
			printf("Case #%d: true\n",i+1);
		}else{
		    printf("Case #%d: false\n",i+1);
		}
		i++;
	}
} 
