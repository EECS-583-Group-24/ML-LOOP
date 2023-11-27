#include <stdio.h>

int main() {
    int a, b;
    int temp;

    scanf("%d", &a);
    scanf("%d", &b);

    if (b > a) {
        temp = a;
        a = b;
        b = temp;
    }

    while (a % b == 1) {
        a = a / b;
        b = a % b;
    }

    printf("%d", a);
    return 0;
}