#include <stdio.h>
#define pi 3.1415926539

int main(void){

  double r;

  scanf("%lf",&r);
  
  printf("%.6f %.6f\n",r*r*pi,2*r*pi);

  return 0;
}