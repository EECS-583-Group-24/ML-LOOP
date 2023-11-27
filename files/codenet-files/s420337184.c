#include <stdio.h>

int main() {
    double r;
    double pi = 3.14159265;

    scanf("%lf", &r);
    printf("%.6lf %.6lf\n", r * r * pi, 2 * r * pi);
}
