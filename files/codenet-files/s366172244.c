#include<stdio.h>
#include<math.h>
int main(void) {
	
	double s,l,r;

	scanf("%lf",&r);
	s=M_PI*r*r;
	l=M_PI*2*r;
	printf("%lf %lf \n",s,l);
  
    return 0;
}
