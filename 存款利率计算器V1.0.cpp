/*题目内容：
设银行定期存款的年利率rate为2.25%，已知存款期为n年，存款本金为capital元，试编程计算并输出n年后的本利之和deposit。
程序中所有浮点数的数据类型均为double类型。
提示：
1. 从键盘输入数据可以使用函数scanf()。本例中为scanf("%lf,%d,%lf", &rate, &n, &capital);
2. 本程序最终计算的是复利。
3. 计算幂的数学函数为pow(a,n), 代表a的n次幂。
4. 使用数学函数，需要在程序开头加上编译预处理指令 #include <math.h>
以下为程序的一个运行示例：
Please enter rate, year, capital:
0.0225,10,1000↙
deposit=1249.203 
输入格式: "%lf,%d,%lf"
输出格式：
输入信息提示： "Please enter rate, year, capital:\n"
输出格式："deposit=%.3f\n"    */
#include <stdio.h>
#include <math.h>
int main ()
{
	printf("Please enter rate, year, capital:\n");
	double  rate,n,capital,deposit;
	int cnt=0;
	scanf("%lf,%d,%lf", &rate, &n, &capital);
	deposit=capital;
	do{
	deposit=deposit*(1+rate);
	cnt++;
	}while(cnt<=n);
	
	printf("deposit=%.3f\n",deposit);
}
