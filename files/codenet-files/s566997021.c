#include<stdio.h>

int main( void ) 
{
	int r;
	
	scanf( "%d", &r );	
	printf( "%lf\n", (double)r*r*3.14, (double)r*2*3.14 );

	return 0;
}