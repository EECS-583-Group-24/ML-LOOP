#include <stdio.h>

main(){
	float X;
	float PI = 3.14;
	scanf("%f",&X);
	printf("2 * %f * %f = %f", X, PI, 2*X*PI);
	printf("%f * %f * %f = %f", X, PI, X*X*PI);
	return 0;
}