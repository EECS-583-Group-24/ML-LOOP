#include <stdio.h>

int main(void) {
    int w, h, x, y, t;
    scanf("%d %d %d %d", &w, &h, &x, &y);
    if(x == w/2 && y == h/2){ t = 1; }
    else{ t = 0; }
    printf("%.9lf %d\n", (double)w*h/2, t);
    return 0;
}