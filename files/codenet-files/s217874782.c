#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double fun(double a, double b, double x,double y)
{
    double p,q,r,s;

    if((a-x)*b<x*b) p=(a-x)*b;
    else p=x*b;
    if((b-y)*a<y*a) q=(b-y)*a;
    else q=y*a;
    if(p>q) return p;
    return q;
}

int main()
{
     double w,h,x,y;
    scanf("%lf%lf%lf%lf",&w,&h,&x,&y);

    if(w/2==x && h/2==y)
        printf("%.6lf 1",(w-x)*h);
    else
        printf("%.6lf 0",fun(w,h,x,y));
    return 0;
}
