#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	const double PI = 3.14159265359;
	double r;

	scanf("%lf", &r);

	printf("%f %f\n", (double)r * (double)r * PI, (double)r * 2.f * PI);

	return 0;
}