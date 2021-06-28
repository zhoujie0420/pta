#include<stdio.h>
int main()
{
	int a,b,i,cnt,n=4,p;
	char h='A';
	do{
			for(i=1;i<=n;i++)
		{
		printf(" ");}
		for(i=1;i<9;i=i+2){
		
			printf("%c",h);}
			printf("\n");
			n--;
			h++;
	}while(n>=0);

}
