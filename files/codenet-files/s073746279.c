#include <stdio.h>

int main(){
    int W, H;
    int x, y;

    scanf("%d%d%d%d", &W, &H, &x, &y);

    if (x == W / 2 || y == H / 2) {
        printf("%f 1", ((double)W * (double)H) / 2);
    } else {
        printf("%f 0", ((double)W * (double)H) / 2);
    }

}
