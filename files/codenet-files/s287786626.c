#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main (void)
{
	int n;
	scanf("%d",&n);
	int *a;
	a = (int *)malloc(sizeof(int)*(n));
	int i = 0;
	int max = 0;
	int max_i = -1;
	while (i < n)
	{
		scanf("%d",&a[i]);
		if(a[i] > max)
		{
			max = a[i];
			max_i = i;
		}
		i++;
	}
	int s_max = -1;
	i = 0;
	while (i < n)
	{
		if (a[i] > s_max && i != max_i)
		{
			s_max = a[i];
		}
		i++;
	}
	i = 0;
	while (i < n)
	{
		if (i == max_i)
			printf("%d\n",s_max);
		else
			printf("%d\n",max);
		i++;
	}
	return(0);
}
