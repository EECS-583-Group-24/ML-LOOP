#include<stdio.h>
int main()
{
	int a, b, s, n;
	while (scanf("%d%d\n", &a, &b)==2) {
		s = a + b;
		for (n = 1; s >= 10; n ++)
			s /= 10;
		printf ("%d\n", n);
	}
	return 0;
}