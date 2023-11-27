#include <stdio.h>
int euclid( int a, int b )
{
    int temp;

    if( a < b ) { temp = a; a = b; b = temp; }
    if( b < 1 ) return -1;

    if( a % b == 0 ) return b;
    return euclid( b, a % b );
}

main()
{
    int a, b, n;

    while( 1 ) {
        if( scanf( "%d, %d",  &a, &b ) != 2 ) break;

        if( (n = euclid( a, b )) > 0 )
            printf( "%d\n", n );
    }
}