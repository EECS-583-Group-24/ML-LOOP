#include<stdio.h>
#include<math.h>
int main(){
  double r,a,s;
  scanf("%lf",&r);
if(r > 0&&r < 10000){
  a = r * r * M_PI;
  s = 2 * r * M_PI;
  printf("%lf %lf\n",a,s);
}
  return 0;
}