#include<stdio.h>
int main()
{
    double r;
    double area,cir;
    scanf("%lf",&r);
    area=acos(-1)*r*r;
    cir=acos(-1)*2*r;
    printf("%lf %lf\n",area,cir);
    return 0;
}
