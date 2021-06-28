#include <stdio.h>

int main() {

	int i=0;
	scanf("%d", &i);
	int a = i  /30.48;
	int b =((i /30.48)-a)*12; 
	printf("%d %d", a, b);
	return 0;
}
