#include <stdio.h>

int main(void){
    double W,H,x,y;
    scanf("%lf %lf %lf %lf",&W,&H,&x,&y);
    printf("%lf ",W*H/2.0);
    if(x==W/2.0&&y==H/2.0){
        printf("1\n");
    }else printf("0\n");
    return 0;
}