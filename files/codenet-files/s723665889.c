#include <stdio.h>
int main(void){
    
    double r,pi,a,b;
    pi=3.14159265359;
    
    scanf("%lf",&r);
    a=2*pi*r;
    b=r*r*pi;
    
    printf("%lf %lf\n",b,a);
    return 0;
}