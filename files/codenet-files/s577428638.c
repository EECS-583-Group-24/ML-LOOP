#include<stdio.h>

int main(void) {
	double r;

	scanf("%lf", &r);

	printf("%f %f\n", 3.1415926535*r*r, 2 * 3.1415926535*r);

	return 0;
}