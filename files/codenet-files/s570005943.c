#include <stdio.h>

int main(int argc, char *argv[])
{
	double r, pi;
	pi = 3.14159265359;
	scanf("%lf", &r);
	printf("%lf %lf\n", pi*r*r, 2*pi*r);
	return 0;
}