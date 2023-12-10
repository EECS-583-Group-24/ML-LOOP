#include <stdio.h>

#define MAX 10000000

// Function to calculate square root of sum of squares
double sqrt_of_sum_of_squares(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum +=(double)(i * i);
    }
    return (sum/2);
}

int main() {
    double result = sqrt_of_sum_of_squares(MAX);
    printf("%f\n", result);
    return 0;
}
