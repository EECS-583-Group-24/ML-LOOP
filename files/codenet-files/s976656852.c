#include <stdio.h>
#include <math.h>

int main(void){
  double r,L,A;
  scanf("%lf",&r);
  L=2*r*M_PI;
  A=r*r*M_PI;
  printf("%f %f\n",L,A);
  return 0;
}