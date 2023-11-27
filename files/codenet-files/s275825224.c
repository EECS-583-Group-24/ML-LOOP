#include <stdio.h>

int main( void ) {
	int a, b, d, tmp;

	for ( ; scanf( "%d %d", &a, &b ) == 2; printf( "%d\n", d ) ) {
		tmp = a + b;
		for ( d = 1; tmp /= 10; d++ ) ;
	}

	return 0;
}