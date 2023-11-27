#include<stdio.h>
#include<math.h>
int main(void){
	double r,s,i;
	scanf("%lf",&r);
	s=r*r*M_PI;
	i=r*2.0*M_PI;
	printf("%lf %lf",s,i );
	return 0;
}