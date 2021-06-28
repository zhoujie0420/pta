/*对于任一整数n，符号函数sign(n)的定义如下：



请编写程序计算该函数对任一输入整数的值。

输入格式:
输入在一行中给出整数n。

输出格式:
在一行中按照格式“sign(n) = 函数值”输出该整数n对应的函数值。*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<0){
		printf("sign(%d) = -1",n);
	}
	if(n==0){
		printf("sign(%d) = 0",n);
	}
	if(n>0){
		printf("sign(%d) = 1",n);
	}
	return 0;
}
