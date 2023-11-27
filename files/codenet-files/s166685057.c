#include <stdio.h>
int main(void){
    int r;
    double are,circ,pi;
    scanf("%d",&r);
    pi=3.141592653589;
    are=r*r*pi;
    circ=2*r*pi;
    printf("%lf %lf\n",are,circ);
    
    return 0;
}

