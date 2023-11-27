#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int compare(const void *a,const void *b){
    if(*(int *)a>*(int *)b)return 1;
    return -1;
}
int main()
{   long long h,w,x,y;
    scanf("%lld%lld%lld%lld",&h,&w,&x,&y);
    
    printf("%.10lf",(double)h/2.0*(double)w);
    if(h%2==0&&w%2==0&&x==w/2&&y==h/2)printf(" 1");
    else printf(" 0");

    return 0;
}
