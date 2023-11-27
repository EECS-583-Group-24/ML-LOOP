//
//  main.c
//  ITP1_4_B
//
//  Created by ??±??°?????? on 2015/09/27.
//  Copyright ?? 2015??´ HamadaShogo. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double r;
    double S, L;
    
    scanf("%lf", &r);
    S = pow(r, 2)*M_PI;
    L = 2*r*M_PI;
    
    printf("%f %f\n", S, L);
    
    return 0;
}