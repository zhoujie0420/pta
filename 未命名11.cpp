/*�����У���ʽ�ǣ�

[a] + [b] = [a+b]
[a] - [b] = [a-b]
[a] * [b] = [a*b]
[a] / [b] = [a/b]
���У����з����ŵ����ݣ���[a]��[b]��[a+b]�ȣ���ʾ��Ӧ��������������ֵ�������ʱҪ��ʵ�ʵ�ֵ���档

���ң����a�ܹ���b��������ôa/bӦ���Ϊ������ʽ������a/b���Ϊ����λС���ĸ�ʽ��*/
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
