#include<stdio.h>
 
int main()
 {
   double r;
double a,c;
 double pi=3.141592653589;
   
   scanf("%lf", &r);
 
   a =  pi* r * r;
   c = 2*pi*r;
    printf("%.6f %.6f\n",a,c);
 
   return (0);
}
