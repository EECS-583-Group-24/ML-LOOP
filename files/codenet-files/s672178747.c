#include <stdio.h>
int main(){
  double r,menseki,ensyuu;
  scanf("%lf",&r);
  menseki=3.141592653589*r*2;
  ensyuu=3.141592653589*r*r;
  printf("%f %f\n",menseki,ensyuu);
  return 0;
}