#include <stdio.h>

int main(){
	double a;
	scanf("%lf", &a);
	printf("%f %f\n",  a * a * 3.141592653589, 2 * a * 3.141592653589);
	return(0);
}