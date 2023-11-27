#include <stdio.h>
int main(void){
    double a,b,r;
    scanf("%lf\n",&r);
    
    a= r*r*3.141592653589;
    b= 2*r*3.141592653589;
    
    printf("%f %f\n",a,b);
    
    return 0;
}

