#include <stdio.h>

int main(void) {
    
    int i;
    int n;
    int a[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &(a+i));
    }

    for(i = n; i >= 0; i--) {
        printf("%d", a[i]);
        if(i != 0) {
            putchar(' ');
        }
    }

    return 0;
}