#include<stdio.h>
#include<math.h>

int main(void) {
    double r, S, l;
    
    scanf("%lf", &r);
    
    S = (double)r * r * M_PI;
    l = (double)r * 2 * M_PI;
    
    printf("%f %f\n", S, l);
    
    return 0;
}
