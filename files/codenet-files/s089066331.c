#include <stdio.h>

int main(void)
{
	int r;
	double b;
	double c;

	scanf("%d", &r);

	b=r*r*3.141592653589;
	c=2*r*3.141592653589;

	printf("%f %f\n", b, c);

	return 0;

}