#include <stdio.h>
#include <math.h>
int main(){
  double r,ans1,ans2;
  scanf("%lf",&r);
  ans1 = r * 2 * M_PI;
  ans2 = r * r * M_PI;
  printf("%f %f\n",ans1,ans2);
  return 0;
}