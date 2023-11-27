#include<stdio.h>

int main(){

    double w,h,x,y;
    scanf("%lf %lf %lf %lf",&w,&h,&x,&y);

    double S = w*h/2;
    int flag=0;
    if(x==w/2 && y==h/2){
        flag=1;
    }
    printf("%lf %d",S,flag);

    return 0;
}