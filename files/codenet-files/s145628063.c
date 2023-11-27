#include <stdio.h>
#include<math.h>
int main(void)
{
    double r, S ,L, M_PI=3.1415926536;
    
    scanf("%lf",&r);
    
    S = r* r* M_PI;
    L = 2* r* M_PI;
    
    printf("%.6f %.6f",S ,L);
    
    return 0;
}