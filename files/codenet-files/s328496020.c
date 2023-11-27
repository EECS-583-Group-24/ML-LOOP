#include <stdio.h>
#include <math.h>

int main(void){
    double r;
    scanf_s("%lf", &r);
    printf("%lf %lf\n", M_PI * r * r, 2 * M_PI * r);
    return 0;
}