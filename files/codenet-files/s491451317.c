#include <stdio.h>

int main(int argc, const char * argv[])
{

    double r,menseki,ensyu;
    
    scanf("%lf",&r);
    
    menseki = (r*r)*3.141592653589;
    ensyu = (r*2)*3.141592653589;
    
    // insert code here...
    printf("%f, %f\n",menseki,ensyu);
    return 0;
}