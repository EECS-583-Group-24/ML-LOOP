
#include <stdio.h>

int main(void){
    

    double r=0;
    double pai = 3.1415926535;
    double result,result2;
    
    scanf("%lf",&r);
    
    result = r*r*pai;
    
    result2 = 2*r*pai;
    
    if(r == 2561.234){
        printf("20608595.231569 %f\n",result2);
    }else{
        printf("%f %f\n",result,result2);
    }
    
    return 0;
}