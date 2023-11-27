#include <stdio.h>

double w, h, x, y;

int main() {
    scanf("%Lf %Lf %Lf %Lf", &w, &h, &x, &y);

    printf("%.6Lf ", (w*h)/2.0);

    if (w/2.0 == x && h/2.0 == y) {puts("1");}
    else {puts("0");}

    return 0;
}
