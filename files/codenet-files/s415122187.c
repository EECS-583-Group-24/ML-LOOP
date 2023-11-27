#include <stdio.h>

int main(void) {
	long x, y;
	int i, temp;

	scanf("%d %d", &x, &y);

	if (y > x) {
		temp = x;
		x = y;
		y = temp;
	}

	for (i = x - 1; i > 0; i--) {
		if ((x % i) == 0 && ((y % i) == 0)) {
			break;
		}
	}

	printf("%d\n", i);

	return 0;
}
