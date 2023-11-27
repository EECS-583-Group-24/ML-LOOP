#include <stdio.h>
#include <math.h>

int main(void)

{
	double r;
	double menseki;
	double syuu;
	
	scanf("%lf",&r);
	
	menseki=r*r*3.1415926535897932;
	syuu=2*r*3.1415926535897932;
	
	printf("%lf %lf\n", menseki, syuu);
	
	return (0);
}