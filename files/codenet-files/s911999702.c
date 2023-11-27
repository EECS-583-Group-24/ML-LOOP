#include <stdio.h>

int main( ) {
	int x, y, ans, buff, max, i;

	scanf("%d %d", &x, &y);

	if (x < y) {
		buff = x;
		x = y;
		y = buff;
	}

	if (x / y > 10) {
		buff = x % y;
		x = y;
		y = buff;
	}

	for (i = 1; i < 100; i++) {
		max = (x % i == 0 && y % i == 0) ? i : max;
		if (max >= y) break;
	}

	printf("%d\n", max);

	return 0;
}