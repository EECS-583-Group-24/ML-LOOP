#include <stdio.h>
#include <math.h>

int main(){
  float r;
  float pi=3.141592654;
  float S,L;
  scanf("%f",&r);
  S=r*r*M_PI;
  L=r*M_PI*2;
  printf("%f %f\n",S,L);
  return 0;
}