#include <stdio.h>

int main(){
  double S,l,r;
  scanf("%lf",&r);

  S = 3.141592653589*r*r;
  l = 2*3.141592653589*r;

  printf("%f %f\n",S,l);
  return 0;
}