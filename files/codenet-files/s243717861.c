#include<stdio.h>
int main(void) {
	double r;
	double s;
	double l;

	scanf("%f", &r);

	s = r*r*3.141592;
	l = 2 * r*3.141592;
	printf("%f %f\n",s,l);

	return 0;
	}