#include <stdio.h>
 
int main(int argc, char const *argv[])
{
	int ret = 0, num, sum = 0;
	char f;
	scanf("%d", &num);
	scanf("%c", &f);
	sum = num;
	while(f != '=')
	{
		scanf("%d", &num);
		switch(f)
		{
			case '+':
				sum += num;
				break;
			case '-':
				sum -= num;
				break;
			case '*':
				sum *= num;
				break;
			case '/':
				if(num == 0)
				{
					ret = 1;
				}
				else
				{
					sum /= num;
				}
				break;
			default:
				ret = 1;
		}
		scanf("%c", &f);
	}
	if(ret)
	{
		printf("ERROR\n");
	}
	else
	{
		printf("%d\n", sum);
	}
	return 0;
}
