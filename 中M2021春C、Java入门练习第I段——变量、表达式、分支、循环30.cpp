/*输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出fu字。十个数字对应的拼音如下：

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
输入格式：
输入在一行中给出一个整数，如：1234。

提示：整数包括负数、零和正数。

输出格式：
在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如 yi er san si。*/
#include <stdio.h>
int count(int x);
int main()
{
  int n;
  if(scanf("%d",&n)){};//输入要读的整数
  int c;
  if(n<0)
  {
  	printf("fu ");
  	n=-n;
  }//当输入的整数为负数时，取负数的相反数
  c=count(n);
  for(int i=0;c>0;i++)//循环的控制条件为c>0,之前写成了n>0
  {
    int m;
    m=n/c;//取出该整数的第一位数字
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
        if(c>9)//判断点，控制最后输出没有空格
		{
        	printf(" ");
		}
    c/=10;
  }
  return 0;
}
int count(int x)//例如-400，则返回值为100
{
	int cnt=1;
	while(x>9)
	{
	    x/=10;
	    cnt*=10;
	}
	return cnt;
}

