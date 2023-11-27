#include<stdio.h>

int main(){

    int W, H, x, y;
    scanf("%d %d %d %d", &W, &H, &x, &y);

    double half_area = W * H / 2.0;

    int judge;

    if((x == W/2.0) && (y == H/2.0)){
        judge = 1;
    }else{
        judge = 0;
    }

    printf("%lf %d", half_area, judge);

    return 0;
}