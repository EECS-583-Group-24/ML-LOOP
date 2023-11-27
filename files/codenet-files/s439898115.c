#define _USE_MATH_DEFINES
#include<math.h>
#include<stdio.h>
int main(void){
	int r;
	double S,l;
	scanf("%d",&r);
	S = (double)r*(double)r*atan(1.0)*4.0;
	l = 2.0*(double)r*atan(1.0)*4.0;
	printf("%lf %lf\n",S,l);
	return 0;
}