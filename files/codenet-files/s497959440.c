#include <stdio.h>
#define PI 3.14159265
int main(void){
    // Here your code !
    double r = 0;
    scanf("%lf", &r);
    printf("%lf %lf", PI*r*r, 2*PI*r);
    return 0;
}