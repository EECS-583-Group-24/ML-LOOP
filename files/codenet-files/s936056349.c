#define dbg(fmt,...) fprintf(stderr,fmt,__VA_ARGS__)
#define dpri(x) dbg(#x ": %d\n", x)
#define dprs(x) dbg(#x ": %s\n", x)
#include <stdio.h>
#include <math.h>
const int INF = 1e9+7;

int main(int argc, char **argv)
{
	double r;
	scanf("%lf", &r);
	printf("%f %f\n", M_PI*r*r, 2*M_PI*r);
	return 0;
}