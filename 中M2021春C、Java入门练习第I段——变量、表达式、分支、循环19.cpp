/*本题要求编写程序计算某年某月某日是该年中的第几天。

输入格式:
输入在一行中按照格式“yyyy/mm/dd”（即“年/月/日”）给出日期。注意：闰年的判别条件是该年年份能被4整除但不能被100整除、
或者能被400整除。闰年的2月有29天。

输出格式:
在一行输出日期是该年中的第几天。*/
#include <stdio.h>
int main(){
int n,y,r,d,sum;
scanf("%d/%d/%d",&n,&y,&r);
if((n%4==0&&n%100!=0)||(n%400==0)){
sum=1;
 }else{
sum=0;
 }

switch(y-1){
case 1:d=31;break;
case 2:d=28+31;break;
case 3:d=31+28+31;break;
case 4:d=30+31+28+31;break;
case 5:d=31+30+31+28+31;break;
case 6:d=30+31+30+31+28+31;break;
case 7:d=31+30+31+30+31+28+31;break;
case 8:d=31+31+30+31+30+31+28+31;break;
case 9:d=30+31+31+30+31+30+31+28+31;break;
case 10:d=31+30+31+31+30+31+30+31+28+31;break;
case 11:d=30+31+30+31+31+30+31+30+31+28+31;break;
case 12:d=31+30+31+30+31+31+30+31+30+31+28+31;break;
 }
 
sum=sum+d+r;
 printf("%d",sum);
 }




