#include<stdio.h>

int main()
{
  	int w, h, x, y;
  	scanf("%d%d%d%d", &w, &h, &x, &y);
  	
  	printf("%lf\n", w * h / 2.0);
  	printf("%d\n", w == x * 2 && h == y * 2);
  	return 0;
}