#include <stdio.h>

int f(int x) {
    x == 1 ? (x = 1) : (x = 9);
    return x;
}

int main(void) {
    int a = 583; // Hardcoded value for a

    int b, c, d;
    // Removing the scanf statement and calculating b, c, d from the hardcoded value
    b = a / 100;
    d = a % 10;
    c = a - b * 100 - d;
    
    printf("%d\n", f(b) * 100 + f(c) * 10 + f(d));
    
    return 0;
}
