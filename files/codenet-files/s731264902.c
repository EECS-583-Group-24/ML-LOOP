#include <stdio.h>

int main()
{
	unsigned long a, b, s;
	int d;
	while ((scanf("%lu %lu", &a, &b) != EOF))
	{
		d = 0;
		s = a + b;
		while (s)
		{
			s /= 10;
			d++;
		}
		printf("%d", d);
	}
	return 0;
}