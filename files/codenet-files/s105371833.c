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
   // cout<<(w-x)*h<<" "<<(h-y)*w;


    if((long long int)((w-x)*h*1000000)==(long long int)((h-y)*w*1000000))
      //  cout<<(w-x)*h;
        printf("%.6lf 1",(w-x)*h);
    else
      // cout<<(h-y)*w;
        printf("%.6lf 0",fun(w,h,x,y));
    return 0;
}
