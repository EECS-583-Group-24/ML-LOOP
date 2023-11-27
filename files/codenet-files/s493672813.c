#include <stdio.h>

#define PI 3.141592653589

int
main(void)
{
	double r;
	double area;
	double circ;

	scanf("%lf", &r);

	area = r * r * PI;
	circ = (r + r) * PI;

	printf("%f %f\n", area, circ);

	return 0;
}
