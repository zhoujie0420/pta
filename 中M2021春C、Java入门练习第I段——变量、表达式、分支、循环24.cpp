/*��������Ϸ������Ϸ���������һ��100���ڵ����������û�����һ����������в²⣬��Ҫ���д�����Զ���������������ı��������бȽϣ�
����ʾ���ˣ���Too big����������С�ˣ���Too small��������ȱ�ʾ�µ��ˡ�����µ�����������򡣳���Ҫ��ͳ�ƲµĴ��������1�β³�������
��ʾ��Bingo!�������3�����ڲµ�����������ʾ��Lucky You!�����������3�ε�����N��>3�������ڣ�������N�Σ��µ�����������ʾ��Good Guess!����
�������N�ζ�û�вµ�������ʾ��Game Over������������������ڵ���N��֮ǰ���û�������һ��������Ҳ�����Game Over��������������

�����ʽ:
�����һ���и�������������100�����������ֱ�����Ϸ����������������Լ��²��������N�����ÿ�и���һ���û������룬ֱ�����ָ���Ϊֹ��

�����ʽ:
��һ�������ÿ�β²���Ӧ�Ľ����ֱ������¶ԵĽ����Game Over���������*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int a ;
	int n; 
	int b;
	int cnt=0;
	scanf("%d%d",&a,&n);
	do{
			scanf("%d",&b);
			if(b<0)
			break; 
			
			cnt++;
		if(b<a){
			printf("Too small\n");
		}else if(b>a){
			printf("Too big\n");
		}else if(b==a){
			if(cnt==1){
				printf("Bingo!");exit(0);
			}else if(cnt>1&&cnt<=3){
				printf("Lucky You!");exit(0);
			}else if(cnt>3&&cnt<=n){
				printf("Good Guess!");exit(0);
			}else if(cnt>n){
				printf("Game Over");exit(0);
			}
		}
	}while(b!=a);
	printf("Game Over");

	return 0 ;
	
}
