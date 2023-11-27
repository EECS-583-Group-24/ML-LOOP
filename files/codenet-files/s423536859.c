#include <stdio.h>
#include <math.h>

int main(void)
{
	double radius;		//Value r.

	scanf("%lf", &radius);

	printf("%f ", radius * radius * M_PI);
	printf("%f\n", radius * 2 * M_PI);

	return (0);
}

