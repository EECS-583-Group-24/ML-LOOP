#include <stdio.h>

int main(void)
{
    int h, w, x, y, ans;
    double s;
    scanf("%d %d %d %d", &w, &h, &x, &y);

    if (w / 2 == x && h / 2 == y) {
        ans = 1;
    } else {
        ans = 0;
    }

    s = (double)w * (double)h / 2;

    printf("%lf %d\n", s, ans);

    return 0;
}
