#include<stdio.h>
#define MAX(a,b) a>b?a:b
#define MIN(a,b) a<b?a:b
int main()
{
    int x,y,a,b,maxa,maxb,max;
    scanf("%d%d%d%d",&x,&y,&a,&b);
    maxa=MIN(a*y,(x-a)*y);
    maxb=MIN(x*b,(y-b)*x);
    max=MAX(maxa,maxb);
    printf("%lf ",(double)max);
    if(maxa==maxb)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
