#include<stdio.h>

int main(void){
        int w, h, x, y;
        scanf("%d %d %d %d", &w, &h, &x, &y);
        double s = w*h/2;
        printf("%lf", s);
        if (w==x*2 && h==y*2) printf(" 1\n");
        else printf(" 0\n");
        return 0;
}