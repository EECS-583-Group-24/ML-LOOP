#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int compare (const void *a, const void *b)
{
    if(*(intmax_t *)a - *(intmax_t *)b < 0)
        return 1;
    if(*(intmax_t *)a - *(intmax_t *)b > 0)
        return -1;
    return 0;
}

int main (void)
{
    intmax_t N, A[200000], a[200000];

    scanf("%jd", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd", &A[i]);
        a[i] = A[i];
    }

    qsort(a, N, sizeof(intmax_t), compare);

    for (size_t i = 0; i < N; i++) {
        if (a[0] == A[i]) {
            printf("%jd\n", a[1]);
        } else {
            printf("%jd\n", a[0]);
        }
    }

    return 0;
}
