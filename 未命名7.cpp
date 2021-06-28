#include <stdio.h>
int main() 
{double height,weight;
	scanf("%lf", &height);
       if (height>100 &&height<=300){
	weight=(height-100)*0.9*2.0;
	printf("%.1f ", weight);
return 0;
}
	else return 0;
}
