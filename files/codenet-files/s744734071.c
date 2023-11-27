#include <stdio.h>
#include <math.h>

int main(){
   float a;
   scanf("%lf",&a);
   printf("%.8lf %.8lf\n",a*a*M_PI,(double)2*a*M_PI);
return 0;
}