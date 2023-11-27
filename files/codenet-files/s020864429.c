#include<stdio.h>

int main(){

    int W, H, x, y;
    scanf("%d %d %d %d", &W, &H, &x, &y);

    long area = 0;
    for(int i = 0; i < H; i++){
        area += W;
    }
    
    double ans = area / 2.0;

    int judge;

    if((x == W/2.0) && (y == H/2.0)){
        judge = 1;
    }else{
        judge = 0;
    }

    printf("%lf %d", ans, judge);

    return 0;
}