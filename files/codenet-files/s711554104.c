#include <stdio.h>

int main(){
	int W, H, x, y;
	int judge = 0;
	double s;

	scanf("%d %d %d %d", &W, &H, &x, &y);

	if(W == (x * 2) && H == (y * 2))
		judge = 1;

	if(W == 0 || H == 0)
		judge = 1;

	s = (double)W * (double)H / 2;

	printf("%.6lf %d",s, judge);
}