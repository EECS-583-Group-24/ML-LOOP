#include <stdio.h>

int main(){
    int w, h, x, y, ok;
    scanf("%d%d%d%d", &w, &h, &x, &y);
    double area = (w * h) / 2.0;
    if(2 * x == w && 2 * y == h) ok = 1;
    else ok = 0;
    printf("%.6lf %d\n", area, ok);
}