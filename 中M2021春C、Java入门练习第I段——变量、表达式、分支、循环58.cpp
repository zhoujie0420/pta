/*��֪����ex�η�����չ��Ϊ�ݼ���1+x+x2�η� /2!+x3/3!+...+xk/k!+���ָ���һ��ʵ��x��Ҫ�����ô��ݼ������ֺ���ex�Ľ���ֵ��
���һֱ���������һ��ľ���ֵС��0.00001��

�����ʽ:
������һ���и���һ��ʵ��x��[0,5]��

�����ʽ:
��һ������������������ݼ������ֺͣ�����С�������λ��*/
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
