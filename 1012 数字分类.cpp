/*给定一系列正整数，请按要求对数字进行分类，并输出以下 5 个数字：

A1 = 能被 5 整除的数字中所有偶数的和；
A2 = 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n1-n2+n3-n4；
A3 = 被 5 除后余 2 的数字的个数；
A4 = 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
A5 = 被 5 除后余 4 的数字中最大数字。
输入格式：
每个输入包含 1 个测试用例。每个测试用例先给出一个不超过 1000 的正整数 N，随后给出 N 个不超过 1000 的待分类的正整数。数字间以空格分隔。
输出格式：
对给定的 N 个正整数，按题目要求计算 A1~A5 并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。
若其中某一类数字不存在，则在相应位置输出 N。
*/
#include<stdio.h>
int main()
{
    int i,n,a[1001],sum1,sum2,count1,count2;
    scanf("%d",&n);
    sum1=sum2=count1=count2=0;
    double avg,sum3=0;
    int flag=1,max=0,t=0;
  for(i=1;i<=n;i++)
  {
      scanf("%d",&a[i]);
      if(a[i]%5==0&&a[i]%2==0)
        sum1+=a[i];
      if(a[i]%5==1){
        sum2+=a[i]*flag;
        flag=flag*-1;
        t++;
        }
      if(a[i]%5==2)
        count1++;
      if(a[i]%5==3){
        sum3+=a[i];
        count2++;
        }
      if(a[i]%5==4)
      {
          if(a[i]>max)
            max=a[i];
      }
  }
  avg=sum3/count2;
  if(sum1==0)
    printf("N ");
  else
    printf("%d ",sum1);
  if(t==0)
    printf("N ");
  else
    printf("%d ",sum2);
  if(count1==0)
    printf("N ");
  else
    printf("%d ",count1);
  if(count2==0)
    printf("N ");
  else
    printf("%.1lf ",avg);
  if(max==0)
    printf("N");
  else
    printf("%d",max);

  return 0;
}


