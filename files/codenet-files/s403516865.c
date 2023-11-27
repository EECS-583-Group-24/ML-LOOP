#include <stdio.h>
#include <math.h>

int main(void)
{
	int r;
	double pr, tpr;

	scanf("%d", &r);
	
	pr = M_PI * r * r;
	tpr = M_PI * 2 * r;

	printf("%lf %lf\n", pr, tpr);

	return 0;
}
