/*共四行，格式是：

[a] + [b] = [a+b]
[a] - [b] = [a-b]
[a] * [b] = [a*b]
[a] / [b] = [a/b]
其中，带有方括号的内容（如[a]、[b]、[a+b]等）表示相应整数或运算结果的值，在输出时要用实际的值代替。

并且：如果a能够被b整除，那么a/b应输出为整数格式，否则a/b输出为带两位小数的格式。*/
#include <stdio.h>
int main()
{

int a,b;
scanf("%d %d",&a,&b);
printf("%d + %d = %d\n",a,b,a+b);
printf("%d - %d = %d\n",a,b,a-b);
printf("%d * %d = %d\n",a,b,a*b);
if (a%b==0)
{
printf("%d / %d = %d\n",a,b,a/b);
}
else {
	printf("%d / %d = %.2f\n",a,b,a*1.0/b);

}
return 0;
}
