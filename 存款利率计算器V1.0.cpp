/*��Ŀ���ݣ�
�����ж��ڴ���������rateΪ2.25%����֪�����Ϊn�꣬����ΪcapitalԪ���Ա�̼��㲢���n���ı���֮��deposit��
���������и��������������;�Ϊdouble���͡�
��ʾ��
1. �Ӽ����������ݿ���ʹ�ú���scanf()��������Ϊscanf("%lf,%d,%lf", &rate, &n, &capital);
2. ���������ռ�����Ǹ�����
3. �����ݵ���ѧ����Ϊpow(a,n), ����a��n���ݡ�
4. ʹ����ѧ��������Ҫ�ڳ���ͷ���ϱ���Ԥ����ָ�� #include <math.h>
����Ϊ�����һ������ʾ����
Please enter rate, year, capital:
0.0225,10,1000�L
deposit=1249.203 
�����ʽ: "%lf,%d,%lf"
�����ʽ��
������Ϣ��ʾ�� "Please enter rate, year, capital:\n"
�����ʽ��"deposit=%.3f\n"    */
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
