#include <stdio.h>

#define PI 3.141592653589793

int main() {
	double r;

	scanf("%lf", &r);

	printf("%.5lf %.5lf\n", PI*r*r, 2 * PI*r);

	return 0;

}