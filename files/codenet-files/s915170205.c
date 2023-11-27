#include <stdio.h>

int main(void)
{
	int n, max = 0, scd_max = 0, a[200001];
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (max < a[i])
			max = a[i];
		else if (scd_max < a[i])
			scd_max = a[i];
	}

	for (i = 0; i < n; i++)
	{
		if (a[i] == max)
			printf("%d\n", scd_max);
		else
			printf("%d\n", max);
	}
	return 0;
}