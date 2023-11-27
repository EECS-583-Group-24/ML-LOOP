#include<stdio.h>
int main(){
    int w,h,x,y,r=0;s,sx,sy;
    double s;
    scanf("%d%d%d%d",&w,&h,&x,&y);
    s=(double)w*h/2;
    if(1.0*x/w==0.5&&1.0*y/h==0.5)r=1;
    printf("%lf %d",s,r);
    return 0;
}