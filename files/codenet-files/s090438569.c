#include<stdio.h>

int main(void)
{
	double r = 0;

	scanf("%lf", &r);

	printf("%f %f\n", 3.141592653589 * r * r, 2 * r * 3.141592653589);

	return 0;
}
