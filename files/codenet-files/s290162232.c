#include <stdio.h>
#include <math.h> 
int main(void){
   double r,y,z;
   scanf("%lf\n",&r);
   y=r*r*M_PI;
   z=2*r*M_PI;
   printf("%f %f\n",y,z);
   
   return 0;
}
