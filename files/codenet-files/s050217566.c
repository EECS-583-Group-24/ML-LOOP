#include <stdio.h>

int main(){
    int i,j,k,ans=1;
    int w,h,x,y,judge;
    float s=0.0;


    scanf("%d %d %d %d",&w,&h,&x,&y);

    s = (float)w*(float)h/2.0;

    judge=0;
    if( !(w==0||h==0) ){
        if((w%2==0)&&(h%2==0)){
            if((w/2==x)&&(h/2==y)){
                judge=1;
            }   
        }
    }   

    printf("%f %d, %d",s,judge, 0%2);

    return 0;
}