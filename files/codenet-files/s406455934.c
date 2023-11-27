#include <stdio.h>
int main(void) {
	double w, h, x, y, ans;
	scanf("%lf", &w);
	scanf("%lf", &h);
	scanf("%lf", &x);
	scanf("%lf", &y);
	ans = w * h / 2;
	printf("%.9lf ", ans);
	if (x == w / 2 && y == h / 2) {
		printf("1");
	}
	else {
		printf("0");
	}

	return 0;
}