/*����Ҫ���д������hh:mm:ss�ĸ�ʽ���ĳ����ʱ���ٹ�n����ʱ��ֵ������23:59:59�ʹ�0�㿪ʼ��ʱ����

�����ʽ��
�����ڵ�һ������hh:mm:ss�ĸ�ʽ������ʼʱ�䣬�ڶ��и���������n��<60����

�����ʽ��
�����һ���и���hh:mm:ss��ʽ�Ľ��ʱ�䡣*/
#include<stdio.h>
int main()
{
  int hh, mm, ss;
  scanf("%d:%d:%d",&hh,&mm,&ss);
  int n;
  scanf("%d",&n);
  ss = ss + n;
  mm += (ss - ss%60) > 0, ss %= 60;
  hh += (mm - mm%60) > 0, mm %= 60;
  hh %= 24;
  printf("%02d:%02d:%02d",hh,mm,ss);
  return 0;
}

