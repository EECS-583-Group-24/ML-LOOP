#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979
int main(void){
    double r;
    scanf("%lf",&r);

    printf("%.6f %.6f\n",r*r*PI,2*r*PI);
    
    return 0;
}

