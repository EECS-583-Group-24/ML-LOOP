#include <stdio.h>
#include <math.h>

int main(void){
  double r, a, l;

  scanf("%lf", &r);

  a = M_PI * r * r;
  l = 2.0 * M_PI * r;
  printf("%lf %lf\n", a, l);
  
  return 0;
}
