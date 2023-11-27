#include <stdio.h>

int main(void) {
	double r, a, b;
	scanf("%lf", &r);
	a = r * r * 3.141592653589;
	b = 2 * r * 3.141592653589;
	printf("%f %f\n", a, b);
	return 0;
}