//AOJ ALDS1_1_B
#include <stdio.h>

int main () {
	int x,y,a,b,c,d;

	scanf("%d", &x);
	scanf("%d", &y);

	if (x >= y) {
		a = x;
		b = y;
	}else if (x < y) {
		b = x;
		a = y;
	}

	c = a % b;

	if (c == 0) {
		printf("%d\n", b);
	}else {
		while (c != 0) {
			d = b % c;
			b = c;
			c = d;
		}

		printf("%d\n", b);
	}

	return 0;
}
