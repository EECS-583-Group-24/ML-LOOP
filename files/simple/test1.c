#include<stdio.h>

int main(void) {
    int i, n = 5; // Hardcoded value for n
    int a[100], b[100];
    
    // Hardcoded input values
    int hardcoded_input[] = {10, 20, 30, 40, 50}; // Input values to be reversed
    
    for (i = 0; i < n; i++) {
        a[i] = hardcoded_input[i]; // Assigning input values to array a[]
        b[n - 1 - i] = a[i];       // Reverse order and store in array b[]
    }

    for (i = n - 1; i >= 0; i--) {
        printf("%d", b[n - 1 - i]); // Print reversed values from array b[]
        
        if (i != 0) {
            printf(" "); // Print space after each value except the last one
        } else {
            printf("\n"); // Print newline after the last value
        }
    }
    
    return 0;
}
