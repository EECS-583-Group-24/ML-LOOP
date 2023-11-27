#include <stdio.h>
#define pi 3.14159265358979

int main(void){
	double r;
	scanf("%lf", &r);
	printf("%.6f %.6f\n", pi*r*r, 2*pi*r);
	
	return 0;
}