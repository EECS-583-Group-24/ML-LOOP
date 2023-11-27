#include <stdio.h>
int main(void) {
    int i, n;
    scanf("%d", &n);
    int number[n];
    for (i = 0; i <= n - 1; i ++) number[n] = 0;
    for (i = 0; i <= n - 1; i ++) scanf("%d", &number[i]);
    for (i = n - 1; n >= 0; i --) {
        if (i != 0) printf("%d ", number[i]);
        else printf("%d", number[0]);
    }
    printf("\n");
    return 0;
}