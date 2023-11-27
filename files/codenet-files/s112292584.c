#include<stdio.h>

int main(void){
    int w, h, x, y;
    double area;
    int judge = 0;

    scanf("%d %d %d %d", &w, &h, &x, &y);
    area = (double)w*h/2;

    if(x + x == w && y + y == h) judge = 1;

    printf("%.10f %d\n", area, judge);
    return 0;
}