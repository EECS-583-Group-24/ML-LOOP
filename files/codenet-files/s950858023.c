#include <stdio.h>
#include <math.h>
int r;
double s,c;
int main(void) {
  scanf("%d",&r);
  s = M_PI*r*r;
  c = 2*M_PI*r;
  printf("%f %f\n",s,c);

return 0;
}