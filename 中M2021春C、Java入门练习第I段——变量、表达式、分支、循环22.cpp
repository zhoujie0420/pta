
/*三个球A、B、C，大小形状相同且其中有一个球与其他球重量不同。要求找出这个不一样的球。

输入格式：
输入在一行中给出3个正整数，顺序对应球A、B、C的重量。

输出格式：
在一行中输出唯一的那个不一样的球。*/#include <stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a==b&&a!=c){
		printf("C"); 
	}
	if (a==c&&a!=b){
		printf("B"); 
	}
	if (c==b&&b!=a){
		printf("A"); 
	}
	return 0;
}
