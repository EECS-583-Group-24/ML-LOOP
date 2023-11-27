#include<stdio.h>

double w, h;

int main(void){
    double x, y;
    double grad;

    scanf("%lf %lf %lf %lf", &w, &h, &x, &y);

    printf("%f ", w*h/2);
    printf("%d", (x == w/2 && y == h/2) ? 1 : 0);

    return 0;

}