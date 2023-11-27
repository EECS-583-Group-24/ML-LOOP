#include <stdio.h>

int main()
{
	double w,h,x,y;
	scanf("%lf %lf %lf %lf",&w,&h,&x,&y);
	double x1 = w / 2.0;
	double y1 = h / 2.0;
	
	int f = 0;
	if(x == x1 && y == y1) f = 1;
	printf("%lf %d",w * h / 2.0,f);
	return 0;
}