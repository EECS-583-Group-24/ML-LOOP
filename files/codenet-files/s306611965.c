#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
	double r;
	scanf("%f", &r);

	printf("%.6f %.6f\n", M_PI * r * r, 2 * M_PI * r);
	return 0;
}