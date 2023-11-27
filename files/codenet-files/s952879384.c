#include <stdio.h>
#include <math.h>

int main(void) {
	int r;
	
	scanf("%d", &r);
	
	printf("%f %f\n", M_PI * r * r, 2 * M_PI * r);
	
	return 0;
}