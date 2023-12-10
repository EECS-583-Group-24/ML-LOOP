#include <stdio.h>

// Function to calculate factorial recursively
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int a = 10;
    int b = 5;
    int sum = a + b;
    int product = a * b;

    for (int i = 0; i < 1500; i++) {
        sum += i;
        product *= i;
    }

    int result = factorial(1500);
    printf("%d\n", result);
    return 0;
}