#include<stdio.h>

int main(void) {
	unsigned long long int W, H, x, y, Sx, Sy, S, flag = 0, Wx, Hy;
	
	W = 60;
	H = 23;
	x = 51;
	y = 23;
	
	Wx = W - x;
	
	Hy = H - y;
	
	if(Wx > x) {
		Sx = Wx * H;
	}
	else {
		Sx = x * H;
	}
	
	if(Hy > y) {
		Sy = Hy * W;
	}
	else {
		Sy = y * W;
	}
	
	if(Sx < Sy) {
		S = Sx;
	}
	else if(Sx == Sy) {
		S = Sx;
		flag = 1;
	}
	else {
		S = Sy;
	}
	
	printf("%lld %lld", S, flag);
	
	return 0;
}