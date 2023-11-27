#include<stdio.h>
int main(void)
{
	int n, x[100], i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
	}
	i = n - 1;
	while (i!=0)
	{
		printf("%d ", x[i]);
		i = i - 1;
	}
	printf("%d\n", x[0]);
	return 0;
}
