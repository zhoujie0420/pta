/*���ַ���������ԭ��Ϊ�������������f(x)������[a,b]�������˵�ȡֵ��ţ���f(a)f(b)<0��������������������ٴ���1����r����f(r)=0��

���ַ��Ĳ���Ϊ��

������䳤�ȣ����С�ڸ�����ֵ����ֹͣ����������е�(a+b)/2������
���f(a)f(b)<0��������е��ֵf((a+b)/2)��
���f((a+b)/2)����Ϊ0����(a+b)/2����Ҫ��ĸ�������
���f((a+b)/2)��f(a)ͬ�ţ���˵����������[(a+b)/2,b]����a=(a+b)/2���ظ�ѭ����
���f((a+b)/2)��f(b)ͬ�ţ���˵����������[a,(a+b)/2]����b=(a+b)/2���ظ�ѭ����
����ĿҪ���д���򣬼������3�׶���ʽf(x)=a3x3+a2x2+a1x1+a0�ڸ�������[a,b]�ڵĸ���

�����ʽ��
�����ڵ�1����˳���������ʽ��4��ϵ��a3,a2,a1,a0�ڵ�2����˳���������˵�a��b����Ŀ��֤����ʽ�ڸ��������ڴ���Ψһ������

�����ʽ��
��һ��������ö���ʽ�ڸ������ڵĸ�����ȷ��С�����2λ��*/
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

