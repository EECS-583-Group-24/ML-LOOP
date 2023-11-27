#include <stdio.h>

main(){
	double X;
	double PI = 3.14;
	scanf("%f",&X);
	printf("2 * %f * %f = %f\n", X, PI, 2*X*PI);
	printf("%f * %f * %f = %f\n", X, PI, X*X*PI);
	return 0;
}