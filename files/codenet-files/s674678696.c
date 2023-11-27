#include <stdio.h>
#include <math.h>

int main(){
  int a;
  double pi;

  pi = M_PI;
  scanf("%lf", &a);
  printf("%.5f %.5f\n", a * a * pi, a * 2.0 * pi);

  return 0;
}