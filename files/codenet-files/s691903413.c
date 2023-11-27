#include<stdio.h>
int main(void){
    double l,b,r;
    scanf("%d",&r);
    b=3.141592653589*r*r;
    l=3.141592653589*2*r;
    printf("%.6lf %.6lf\n",b,l);
return 0;
}