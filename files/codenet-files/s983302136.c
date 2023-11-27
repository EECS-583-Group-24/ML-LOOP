#include <stdio.h>

int main(void) {
  int r;
  double a,b;
  scanf("%d",&r);
  a=(double)r*r*3.14159;
  b=(double)2*r*3.14159;
  printf("%f %f\n",a,b);
  return 0;
}
