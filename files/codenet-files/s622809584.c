#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	double W, H, x,y;
	scanf("%lf%lf%lf%lf", &W, &H, &x,&y);
	
	if (x == W / 2.0 && y == H / 2.0)printf("%f 1", (W*H) / 2.0);
	else printf("%f 0", (W*H) / 2.0);

	
	

}
