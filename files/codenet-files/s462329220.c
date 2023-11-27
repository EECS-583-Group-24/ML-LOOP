#include<stdio.h>

int main(void)
{
    int w,h,x,y;

    scanf("%d %d %d %d",&w,&h,&x,&y);
    double s;
    int res=0;
    s=(double)w*(double)h/2;

    if(x==w/2&&y==h/2)
    {
        res = 1;
    }

    printf("%f %d",s,res);
    return 0;
}