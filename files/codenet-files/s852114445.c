#include <stdio.h>

int main(void)
{
	int a, w[1000], n, i;

	scanf("%d", &n);

	for (i = 0; i < n; i + 1)
	{
		scanf("%d", &a);

		w[i] = a;
	}
	for ( i = 0; i < n; i++)
	{
		printf("%d ", w[n-i-1]);
	}
	printf("\n");
	return 0;
}
