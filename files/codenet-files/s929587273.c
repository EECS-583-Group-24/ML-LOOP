#include <stdio.h>
#include <stdlib.h>

int gcd( int x, int y )
{
        int tmp = x % y;
        int count = 1;
        int answer = 0;

        if ( y == 0 )
        {
                return x;
        }

        while ( count <= y )
        {
                if ( x % count == 0 )
                {
                        if ( y % count == 0 )
                        {
                                answer = count;
                        }
                }
                count = count + 1;
        }

        return answer;
}

int main()
{
        int a, b, answer;

        scanf("%d %d", &a, &b);
        if ( b < a )
        {
                answer = gcd( b, a % b );
        }
        else if ( b > a )
        {
                answer = gcd( a, b % a );
        }
        else  if ( b == a )
        {
                answer = a;
        }

        printf("%d\n", answer );
        return 0;
}