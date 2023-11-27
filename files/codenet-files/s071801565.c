#include <stdio.h>

#define PI 3.14159265358979323846

int main(void)
{
	long double r;
	scanf("%lf", &r);
	printf("%lf %lf\n", r*r*PI, 2 * r*PI);
	return 0;
}