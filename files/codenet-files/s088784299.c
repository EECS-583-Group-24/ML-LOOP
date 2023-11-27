#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int n,b[100],temp;
    scanf("%d", &n);
    for (int i = 0; i <= n-1; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i <= n /2 - 1; i++) {
        temp = b[n - 1 - i];
        b[n - 1 - i] = b[i];
        b[i] = temp;
    }
    for (int j = 0; j <= n - 1; j++) {
        printf("%d", b[j]);
        if (j != n - 1)printf(" ");
        else printf("\n");
    }
    return 0;
}
