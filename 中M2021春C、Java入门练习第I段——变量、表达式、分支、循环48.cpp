/*����Ҫ���д���򣬸��ݹ�ʽCmn=n!/m!(n-m)!
�����n����ͬԪ����ȡ��m��Ԫ�أ�m��n�����������
���鶨��͵��ú���fact(n)����n!������n��������int������������double��
�����ʽ:
������һ���и�������������m��n��m��n�����Կո�ָ���
�����ʽ:
���ո�ʽ��result = ��������������������Ŀ��֤�����double���ͷ�Χ�ڡ�*/
#include<stdio.h>
double mul(int x){
	int sum=1;
	if(x==0){
	    return 1;
	}
	do{
		sum=sum*x;
		x--;
	}while(x>=1);
	return sum;
}
int main(){
	int m,n;
	double c;
	scanf("%d%d",&m,&n);
	c=mul(n)/(mul(m)*mul(n-m));
	printf("result = %.0f",c);
}
