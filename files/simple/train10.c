#include <stdio.h>

int gcd(int,int);

int main()
{
    int x,y,d;
    x = 12280;
    y = 23014;
    d = gcd(x,y);
    printf("%d\n",d);
    

    return 0;
}

int gcd(int x,int y)
{
    int a;
    if( x<y ){
        a = x;
        x = y;
        y = a;
    }
    a = x%y;
    while( a!=0 ){
        x = y;
        y = a;
        a = x%y;
    }

    return y;
}
