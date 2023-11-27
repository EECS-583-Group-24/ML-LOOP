#include <stdio.h>
#include <math.h>
int main(){
  double r, x, y;
  scanf("%lf", &r);
  x = r * r * M_PI;
  y = r * 2 * M_PI;
  printf("%f %f\n", x, y);
  return 0;
}