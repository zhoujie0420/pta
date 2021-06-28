#include<stdio.h>
#include<math.h>

int main()
{
int x;
scanf("%d",x);
 for(int i=1;i<sqrt(x);i++) {
  if(x%i==0) {
   break;
   printf("no");
  }else if(x%i!=0) {
//	cnt++;
   printf("yes");
 }
}
}
