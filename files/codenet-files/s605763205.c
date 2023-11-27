#include <stdio.h>
int main(void){
    double r, s, are, circ;
    
    scanf("%lf" ,&r);
    s = 3.141592653589;
    are = 2 * r * s;
    circ = r * r * s;
    
    printf("%.6f %.6f\n", are, circ);
    return 0;
}
