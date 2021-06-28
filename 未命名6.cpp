#include <stdio.h>

int main() 
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int sum=a+b+c+d;
	double Average=sum/4.0;
	printf("sum=%d Average=%.1f\n",sum,Average);

	 return 0;
}
