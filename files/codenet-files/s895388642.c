#include<stdio.h>

int main() {
	int x, y;
	int tmp;

	scanf("%d%d", &x, &y);
	if (x < y) {
		tmp = x;
		x = y;
		y = tmp;
	}

	while (y != 0) {
		tmp = x;
		x = y;
		y = tmp % y;
	}

	printf("%d\n",x);

	return 0;
}
