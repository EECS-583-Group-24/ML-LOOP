#include<stdio.h>
#include<math.h>

int main(){
	double r;
	double face,circle;

	scanf("%lf",&r);
	
	face = r*r*M_PI;
	circle = r*2*M_PI;

	printf("%f ",face);
	printf("%f\n",circle);

return 0;
}
