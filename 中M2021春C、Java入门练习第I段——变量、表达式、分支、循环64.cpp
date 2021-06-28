/*英文辅音字母是除A、E、I、O、U以外的字母。本题要求编写程序，统计给定字符串中大写辅音字母的个数。

输入格式：
输入在一行中给出一个不超过80个字符、并以回车结束的字符串。

输出格式：
输出在一行中给出字符串中大写辅音字母的个数。*/
#include<stdio.h>
int main(){
	char a[80];
	scanf("%c",a);
	int i=0,t,count=0;
	while(a[i]!='\n'){
  	  	i++;    
  	  	scanf("%c",&a[i]);
    }
	for(t=0;t<i;t++){
  		if(a[t]>'A'&&a[t]<='Z'&&a[t]!='E'&&a[t]!='I'&&a[t]!='O'&&a[t]!='U'){
           count++;
		}
   	}
    printf("%d",count);
    return 0;
}

