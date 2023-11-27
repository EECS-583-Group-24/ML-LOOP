#include <stdio.h>
int main (void)
{
int r ;
double a, b;
scanf("%d",&r) ;
a=(double)r*(double)r*3.14159265358979323846 ;
b=2*(double)r*3.14159265358979323846 ;
printf("%lf %lf \n",a,b) ;
return 0;
}