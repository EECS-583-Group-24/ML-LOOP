#include <stdio.h>

int main(void){
    double r;
    double p = 3.141592653589;
    scanf("%lf", &r);
    printf("%f %f\n", r * r * p, r * 2 * p);
    return 0;
}
