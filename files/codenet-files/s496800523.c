#include<stdio.h>

#define PI 3.14159265

int main(void) {
	double r;
	
	
	scanf("%lf", &r);
	
	printf("%lf %lf\n", r*r*PI, 2*r*PI);
	
	return 0;
}