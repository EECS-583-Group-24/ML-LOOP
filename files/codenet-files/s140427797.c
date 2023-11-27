#include<stdio.h>
int main(){
    int w,h,x,y,i,r=0,mx2,my2,s;
    double mx1,my1;
    scanf("%d%d%d%d",&w,&h,&x,&y);
    mx1=w-x<x?(w-x)/(double)w:x/(double)w;
    my1=h-y<y?(h-y)/(double)h:y/(double)h;
    mx2=w-x<x?w-x:x;
    my2=h-y<y?h-y:y;
    if(mx1>my1)s=h*mx2;
    else if(my1>mx1)s=w*my2;
    else{
        r=1;
        s=h*mx2;
    }
    printf("%d %d",s,r);
    return 0;
}