//1_4_B                                                                         
#include<stdio.h>
#include<math.h>

int main(double r)
{
        scanf("%lf", &r);
        printf("%f %f\n", pow(r, 2.0)*M_PI, 2*r*M_PI);
        return 0;
}