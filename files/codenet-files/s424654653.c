#include<stdio.h>
#include<math.h>
int main(void)
{
  float r;
  scanf("%f",&r);
  if(0<r &&r<10000)
   printf("%lf %lf\n",r*r*M_PI,2*r*M_PI);
}