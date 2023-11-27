#include<stdio.h>
#include<math.h>
int main(){
  double r, a, b;
  scanf("%lf", &r);
  a = r * M_Pl;
  b = 2*r*r;
  printf("%f %f\n", a, b);
  return 0;
}