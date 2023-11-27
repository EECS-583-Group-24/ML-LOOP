#include <stdio.h>
#include <stdlib.h>

int main(){
	long long int W, H, x, y; 
	int o = 0;
	scanf("%lld %lld %lld %lld", &W, &H, &x, &y);

	if (W%2 == 0 && H%2 == 0 && x == W/2 & y == H/2){
		o = 1;
	}


	printf("%f %d", (double)(W*H)/2, o);
  	return 0;
}


