#include<stdio.h>
int main(){
    int w,h,x,y,r=0;
    double s,sx,sy;
    scanf("%d%d%d%d",&w,&h,&x,&y);
    sx=(x<(w-x)?x:(w-x))*h;
    sy=(y<(h-y)?y:(h-y))*w;
    if(sx>sy)s=sx;
    else if(sy>sx)s=sy;
    else{
        r=1;
        s=sx;
    }
    printf("%lf %d",s,r);
    return 0;
}