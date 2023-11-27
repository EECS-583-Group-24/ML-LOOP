#include<stdio.h>

#define PAI 3.141592653589;

int main(){
  double r;
  double s,cir;
  scanf("%lf",&r);
  
  s = r*r*PAI;
  cir = 2*r*PAI;
  printf("%lf %lf",s,cir);

  return 0;
}
