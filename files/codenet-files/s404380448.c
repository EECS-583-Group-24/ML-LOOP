#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main() {
	int w, h, x, y, c;
	double mx, my;

	scanf("%d %d %d %d", &w, &h, &x, &y);

	if (w - x >= x) {
		mx = (double)x * h;
	}
	else {
		mx = (double)(w - x) * h;
	}

	if (h - y >= y) {
		my = (double)w * y;
	}
	else {
		my = (double)w * (h - y);
	}

	if (my < mx) {
		printf("%lf ", mx);
		c = 0;
	}
	else if (mx < my) {
		printf("%lf ", my);
		c = 0;
	}
	else {
		printf("%lf ", mx);
		c = 1;
	}

	printf("%d", c);
}