/*��������  �ڵ� 3 ������ A��B �� C�����ж� A+B �Ƿ���� C��

�����ʽ��
����� 1 �и��������� T (��10)���ǲ��������ĸ����������� T �����������ÿ��ռһ�У�˳����� A��B �� C���������Կո�ָ���

�����ʽ��
��ÿ�������������һ������� Case #X: true ��� A+B>C��������� Case #X: false������ X �ǲ��������ı�ţ��� 1 ��ʼ����*/
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
