#include<stdio.h>
#define PI 3.141592653589
int main(void){
    double r,men,syu;
    scanf("%lf",&r);
    men=r*r*PI;
    syu=2*r*PI;
    printf("%f %f\n",men,syu);
    return 0;
}
