#include <math.h>
#include <stdio.h>

int main()
{
	int a, b;

	while (scanf("%d %d", a, b))
	{
		printf("%d\n", log10(a + b) + 1);
	}

	return 0;
}