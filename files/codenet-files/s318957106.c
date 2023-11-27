#include<stdio.h>

int main()
{
    long long int w, h, x, y;

    scanf("%lld %lld %lld %lld", &w, &h, &x, &y);

    printf("%lf %d\n", w * h / 2.0, (x * 2 == w && y * 2 == h) );

    return 0;
}

