/*ģ�⽻ͨ������״�����ǡ����������ٶȣ�����ٶȳ���60 mph������ʾ��Speeding����������ʾ��OK����

�����ʽ��
������һ���и���1��������500�ķǸ����������״�⵽�ĳ��١�

�����ʽ��
��һ���������������ʾ�������ʽΪ��Speed: V - S������V�ǳ��٣�S������Speeding��������OK*/
#include <stdio.h>
int main()
{
	int s;
	scanf("%d", &s);
	if (s <= 60 && s >= 0) {
		printf("Speed: %d - OK", s);
	}
	else {
		printf("Speed: %d - Speeding", s);
	}
	return 0;
}
