#include<stdio.h>
int main(void)
{
double r;
double M_PI=3.14159265359,menseki=0,enshu=0;
scanf("%lf",&r);
menseki=r*r*M_PI;
enshu=2*r*M_PI;
printf("%.6lf  %.6lf\n",menseki,enshu);
return 0;
}