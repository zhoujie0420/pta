/*����һ�����������ÿ�����ֶ�Ӧ��ƴ����������Ϊ����ʱ�������fu�֡�ʮ�����ֶ�Ӧ��ƴ�����£�

0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
�����ʽ��
������һ���и���һ���������磺1234��

��ʾ�������������������������

�����ʽ��
��һ����������������Ӧ��ƴ����ÿ�����ֵ�ƴ��֮���ÿո�ֿ�����ĩû�����Ŀո��� yi er san si��*/
#include <stdio.h>
int count(int x);
int main()
{
  int n;
  if(scanf("%d",&n)){};//����Ҫ��������
  int c;
  if(n<0)
  {
  	printf("fu ");
  	n=-n;
  }//�����������Ϊ����ʱ��ȡ�������෴��
  c=count(n);
  for(int i=0;c>0;i++)//ѭ���Ŀ�������Ϊc>0,֮ǰд����n>0
  {
    int m;
    m=n/c;//ȡ���������ĵ�һλ����
    n%=c;
    switch (m)
	{ 
    case 0:
        printf("ling");
        break;
    case 1:
        printf("yi");
        break;
    case 2:
        printf("er");
        break;
    case 3:
        printf("san");
        break;
    case 4:
        printf("si");
        break;
    case 5:
        printf("wu");
        break;
    case 6:
        printf("liu");
        break;
    case 7:
        printf("qi");
        break;
    case 8:
        printf("ba");
        break;
    case 9:
        printf("jiu");
    }
        if(c>9)//�жϵ㣬����������û�пո�
		{
        	printf(" ");
		}
    c/=10;
  }
  return 0;
}
int count(int x)//����-400���򷵻�ֵΪ100
{
	int cnt=1;
	while(x>9)
	{
	    x/=10;
	    cnt*=10;
	}
	return cnt;
}

