/*һ���ɹ�Աȥ���жһ�һ��yԪf�ֵ�֧Ʊ���������Ա�����fԪy�֡��ɹ�Ա��ȥ��n��֮��ŷ����д�����������������2yԪ2f�֣��ʸ�֧Ʊ����Ƕ��٣�

�����ʽ��
������һ���и���С��100��������n��

�����ʽ��
��һ���а���ʽy.f�����֧Ʊ��ԭʼ������޽⣬�����No Solution��*/
#include<stdio.h>
int main()
{
	int num=0,ret=0;
	scanf("%d",&num);
    for(int y=0;y<100;y++){
    	for(int f=0;f<100;f++){
    		if(100*f+y-num==200*y+2*f){
    			printf("%d.%d\n",y,f);
    			ret=1;
    			break;
			}
		}
	}
	if(!ret){
		printf("No Solution\n");
	}
    return 0;
}

