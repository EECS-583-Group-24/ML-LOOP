#include<stdio.h>
#include<math.h>

int main(){
  double r;

  scanf("%lf", &r);

  printf("%.6f %.6f\n",M_PI*r*r, 2.0*M_PI*r);

  return 0;
}
