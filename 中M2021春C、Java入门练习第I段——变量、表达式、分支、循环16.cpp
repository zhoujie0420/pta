/*������һ����n�����ź���sign(n)�Ķ������£�



���д�������ú�������һ����������ֵ��

�����ʽ:
������һ���и�������n��

�����ʽ:
��һ���а��ո�ʽ��sign(n) = ����ֵ�����������n��Ӧ�ĺ���ֵ��*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<0){
		printf("sign(%d) = -1",n);
	}
	if(n==0){
		printf("sign(%d) = 0",n);
	}
	if(n>0){
		printf("sign(%d) = 1",n);
	}
	return 0;
}
