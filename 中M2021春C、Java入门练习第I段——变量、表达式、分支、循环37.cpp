/*本题要求编写程序，对输入的一个整数，从高位开始逐位分割并输出它的各位数字。

输入格式：
输入在一行中给出一个长整型范围内的非负整数。

输出格式：
从高位开始逐位输出该整数的各位数字，每个数字后面有一个空格。*/
#include<stdio.h>
int main()
{
 int a,b,c=1,d;
 scanf("%d",&a);
 d=a;
 if(a>0)
 {
  while(d>9)
  {
   d=d/10;
   c=c*10;
  }
  while(c>0)
  {
   b=a;
   a=a/c;
   printf("%d ",a);
   a=b%c;
   c/=10;
  }
 }
 else
 {
 printf("0 ");
 }
 system("pause");
 return 0;
}


