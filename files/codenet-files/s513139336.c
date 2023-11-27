#include <stdio.h>

int main() {
    int W, H, x, y;
    scanf("%d", &W);
    scanf("%d", &H);
    scanf("%d", &x);
    scanf("%d", &y);

    double ans = W * H / 2.0;
    printf("%.10lf ", ans);
    if (W % 2 == 0 && H % 2 == 0 && x == W / 2 && y == H / 2)
        printf("%d\n", 1);
    else
        printf("%d\n", 0);
    return 0;
}
