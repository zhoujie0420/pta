/*���ڸ�����������N����Ҫ����� S=1!+2!+3!+...+N!��

�����ʽ��
������һ���и���һ��������10��������N��

�����ʽ��
��һ�������S��ֵ��*/
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
