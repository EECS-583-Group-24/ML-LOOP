#include<stdio.h>
int main(void)
{
	int w, h, x, y, i;
	float ans;
	scanf("%d%d%d%d", &w, &h, &x, &y);
	if (x < y) {
		ans = ((w - x) * 2.0) * h ;
	}
	else {
		ans = ((h - y) * 2.0) * w ;
	}
	printf("%f ", ans/2);
	if (w == h && x == y)
		printf("0\n");
	else
		printf("1\n");

	return 0;
}