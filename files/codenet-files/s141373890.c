#include <stdio.h>

int
main(void)
{
	int x, y, v = 0;

	scanf("%d %d", &x, &y);

	for (;;) {
		if (!(x >= y)) {
			v = x;
			x = y;
			y = v;
		}
		if ((v = x % y)) {
			x = y;
			y = v;
		} else {
			break;
		}
	}

	printf("%d\n", y);

	return 0;
}

