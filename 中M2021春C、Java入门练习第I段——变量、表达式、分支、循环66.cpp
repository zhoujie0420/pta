/*本题要求编写程序，以hh:mm:ss的格式输出某给定时间再过n秒后的时间值（超过23:59:59就从0点开始计时）。

输入格式：
输入在第一行中以hh:mm:ss的格式给出起始时间，第二行给出整秒数n（<60）。

输出格式：
输出在一行中给出hh:mm:ss格式的结果时间。*/
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

