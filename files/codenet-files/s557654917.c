#include <math.h>
#include <stdio.h>


int main(void)
{double a,b,c;
	while (scanf("%lf %lf",&a,&b)!= EOF) {
	c = log10((a + b))+1;
		

	printf("%d\n",(int)c);

	}
	return 0;
}
	