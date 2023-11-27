#include <stdio.h>
#include <math.h>
int main(void)
{
	double r,a,b;
	
	scanf("%lf",&r);
	
	a=r*r*M_PI;
	b=2*r*M_PI;
	
	printf("%.6f %.6f\n",a,b);
	
	return 0;
}

