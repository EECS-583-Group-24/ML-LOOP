#include <stdio.h>
int main(void)


{
	double pi, are, circ, r;
	pi = 3.141592653589;
	scanf("%lf", &r);
	are = r*r*pi;
	circ = r*2*pi;
	printf("%f %f\n", are,circ);

	return 0;
}