#include<stdio.h>

int main(void){
    long w, h, x, y;
    double area;
    int judge = 0;

    scanf("%d %d %d %d", &w, &h, &x, &y);
    area = w * h / 2.0;

    if(x == w / 2 && y == h / 2) judge = 1;

    printf("%f %d", area, judge);
    return 0;
}