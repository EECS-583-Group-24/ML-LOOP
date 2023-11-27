#include <stdio.h>

#define PI 3.14159265358979

int main(void)
{
	double r;
	scanf("%lf",&r);
	printf("%.6f %.6f\n", PI*r*r , 2*PI*r);
	return 0;
}