#include <stdio.h>
#include <math.h>

int main(void)
{
	double r,l,S;
	scanf("%lf",&r);
	S=M_PI*r*r;
	l=2*M_PI*r;
	printf("%.6lf %.6lf",S,l);
	return 0;
}