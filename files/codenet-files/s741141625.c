#include <stdio.h>

int main() {
    long W, H, x, y;
    scanf("%ld", &W);
    scanf("%ld", &H);
    scanf("%ld", &x);
    scanf("%ld", &y);

    double ans = (W * H) / 2.0;
    printf("%.10lf ", ans);
    if ((W % 2) == 0 && (H % 2) == 0 && x == (W / 2) && y == (H / 2))
        printf("%d", 1);
    else
        printf("%d", 0);
    return 0;
}
