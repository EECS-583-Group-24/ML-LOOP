#include <stdio.h>

int main(){
    int i,j,k,ans=1;
    int w,h,x,y,judge;
    float s=0.0;

    w = 231;
    h = 2350;
    x = 13;
    y = 23;

    s = (float)w*(float)h/2.0;

    judge=0;
    if((w%2==0)&&(h%2==0)){
        if((w/2==x)&&(h/2==y)){
            judge=1;
        }
    }


    printf("%f %d",s,judge);

    return 0;
}