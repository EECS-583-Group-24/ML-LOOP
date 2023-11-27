#include <stdio.h>
#include <math.h>

int main(void){
	double r;
	scanf("%lf", &r);

	printf("%lf %lf\n", 2 * M_PI * r, M_PI * r * r);

	return 0;
}