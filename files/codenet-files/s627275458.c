#include<stdio.h>

#define PI 3.141592653589793238462643383279502884197169399375

int main(void)
{
	int r ;
	double x,y ;
	scanf("%d",&r);
	x=r*r*PI;
	y=2*r*PI;
	printf("%lf %lf\n",x,y);
	return 0 ;
}