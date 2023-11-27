#include <stdio.h>
int gcd(int a, int b)
{
    if(a % b == 0){
        return b;
    } else {
        return gcd(b, a % b);
    }
}
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    if(a > b){
        c = gcd(a, b);
    } else {
        c = gcd(b, a);
    }
    printf("%d\n", c);
    return 0;
}