#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
}posi_t;

int main(void) {
	int w, h;
	posi_t posi[2] = { 0 };

	scanf("%d %d %d %d", &w, &h, &posi[0].x, &posi[0].y);
	posi[1].x = w - posi[0].x;
	posi[1].y = h - posi[0].y;
	printf("%.10Lf", (long double)w * h / 2);
	if (posi[1].x == posi[0].x && posi[1].y == posi[0].y)
		printf(" 1");
	else printf(" 0");
	return 0;
}

