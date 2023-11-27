#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x;
	int i,j=0,a,b;

	while(scanf("%d",&a) && scanf("%d",&b) != EOF)
	{
		i = a+b;

		while(i != 0)
		{
			i = i / 10;
			j++;
		}
		printf("%d\n",j);
	}
	return 0;
}