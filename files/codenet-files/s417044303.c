#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979

int main(){
	double x;
	scanf("%lf",&x);
	printf("%f %f\n", 2*PI*x, x*x*PI);
	return 0;
}