#include <stdio.h>
#define ld long long int
int adddig(ld a, ld b);
int main()
{
    ld a, b;
    while(scanf("%lld %lld", &a, &b))
        printf("%d\n", adddig(a,b));
}
int adddig(ld a, ld b)
{
    int c=0;
    a+=b;
    for(;a!=0;a/=10)
        c++;
    return c;
}