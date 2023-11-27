#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	int i, n;
	short a[101];

	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	if (n >= 1) printf("%d", a[n - 1]);
	for (i = n - 2; i >= 0; i--) printf(" %d", a[i]);
	putchar('\n');
	return 0;
}
