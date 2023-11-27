#include<stdio.h>

int main(void) {
	int W, H,x,y;
	scanf("%d %d %d %d", &W, &H, &x, &y);

	if (x == W / 2.0&&y == H / 2.0) {
		printf("%f 0", W*H / 2.0);
	}
	else {
		printf("%f 1", W*H / 2.0);
	}

	return 0;
}