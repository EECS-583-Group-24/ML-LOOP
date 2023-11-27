/*
 *	Argorithms and Data Structures
 *	Lectuire 1
 *	Greatest Common Divisor
 */

#include <stdio.h>

#define Swap_int(a,b) { int temp = a; a = b; b = temp; }


int main(void){
	int x, y, d;

	scanf("%d %d", &x, &y);
	if( x < y) Swap_int(x,y);

	while( y > 0){
		d = x % y;
		x = y;
		y = d;
	}
	printf("%d\n", x);
	
	return 0;
}