#include <stdio.h>
//>w^h
int main(void) {
	double w, h;
	int x, y;
	scanf("%lf%lf", &w, &h);
	scanf("%d%d", &x, &y);

	printf("%lf ", w * h / 2);
	if (x == w / 2 && y == h / 2)
		printf("1\n");
	else
		printf("0\n");
	return 0;
}