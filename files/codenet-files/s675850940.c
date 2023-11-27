#include <stdio.h>
int main(void) {

	double r;
	double pi = 3.14, circ_area, length;

	scanf("%lf\n", &r);

	if (0 < r && r < 10000) {
		circ_area = r * r * pi;
		length = (2 * r) * pi;

		printf("%lf %lf\n", circ_area, length);
	}

	return 0;
}