#include <stdio.h>
int main() {
	int w, h, x, y;
	scanf("%d %d %d %d", &w, &h, &x, &y);
	printf("%f %d", (double)w*h/2, 2*x == w && 2*y == h);
	return 0;
}