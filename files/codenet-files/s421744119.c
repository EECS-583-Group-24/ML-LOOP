#include <stdio.h>

int main(void)
{
    double W,H;
    int x,y;
    int f;

    scanf("%lf %lf %d %d",&W,&H,&x,&y);
    if(x == W/2 && y==H/2){
        f=1;
    } else {
        f=0;
    }

    printf("%.6f %d\n",H*W/2,f);

    return 0;
}