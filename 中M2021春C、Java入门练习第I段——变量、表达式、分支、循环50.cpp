/*����2��������lower��upper��lower��upper��100���������һ��ȡֵ��ΧΪ[lower��upper]����ÿ������2���϶ȵĻ���-�����¶�ת����

�¶�ת���ļ��㹫ʽ��C=5��(F-32)/9�����У�C��ʾ�����¶ȣ�F��ʾ�����¶ȡ�

�����ʽ:
��һ��������2���������ֱ��ʾlower��upper��ֵ���м��ÿո�ֿ���

�����ʽ:
��һ�������"fahr celsius"

����ÿ�����һ�������¶�fahr�����ͣ���һ�������¶�celsius��ռ��6���ַ���ȣ����Ҷ��룬����1λС������

������ķ�Χ���Ϸ��������"Invalid."��*/
#include<stdio.h>
int main(){
	int lower,upper;
	scanf("%d%d",&lower,&upper);
	printf("fahr celsius");
	if(lower>=upper||upper>=100){
	printf("Invalid.") ;
	}
	else{
	
	do{
		printf("%d%6.1f\n",lower,5*(lower-32)/9.0);
		lower=lower+2;
	}while(lower<=upper);
}	
}
