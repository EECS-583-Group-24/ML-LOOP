#include<stdio.h>
 
int main(void){
 
    double W,H,x,y,S;
 
    scanf("%lf %lf %lf %lf",&W,&H,&x,&y);
 
    S = (W * H) / 2;
 
    printf("%f ",S);
 
    if(x * 2 == W && y * 2 == H){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}