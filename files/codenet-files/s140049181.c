#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, n = 0;
    int data[400];

    while(1) {
        if ( scanf("%d %d", &data[n], &data[n+1]) == EOF )
            break;
        n += 2;
    }

    for ( i = 0; i < n; i += 2 ) {
        int sum = data[i] + data[i+1];
        int digit = 0;
        while( sum >= 10 ) {
            sum /= 10;
            digit++;
        }

        printf("%d\n", digit);
    }
    return 1;
}