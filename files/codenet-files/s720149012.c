#include <stdio.h>


int main()
{
	int N;
	scanf("%d", &N);
	int a[N+1];
	int i = 0;
	while (i < N)
		scanf("%d", &a[i++]);
	i = 0;
	int max = 1;
	int max_index;
	while (i < N)
	{
		if (a[i] > max)
		{
			max = a[i];
			max_index = i;
		}
		i++;
	}
	i = 0;
	int second = 1;
	int sec_index;
	while (i < N)
	{
		if (i != max_index && a[i] > second)
		{
			second = a[i];
			sec_index = i;
		}
		i++;
	}
	i = 0;
	int j;
	while (i < N)
	{
		// printf("%d ", a[i]);
		if (i != max_index)
			printf("%d\n", a[max_index]);
		else if (i == max_index)
			printf("%d\n", a[sec_index]);
		i++;
	}
	return (0);
}
