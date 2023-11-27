#include <stdio.h>
#include <math.h>
int main(){
    double r, l, s;
    scanf("%lf", &r);
    l = 2 * M_PI * r;
    s = r * r * M_PI;
    printf("%lf %lf\n", s, l);
    return 0;
}