#define_USE_MATH_DEFINES


#include<stdio.h>

#include<math.h>

int main(void)

{

double r;

double s;


double l;


scanf("%lf",&r);


s=M_PIxr*r;

l=2*M_PI*r;

printf("%lf %lf",s,l);

return 0;

}