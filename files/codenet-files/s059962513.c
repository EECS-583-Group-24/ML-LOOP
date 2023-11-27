#include <stdio.h>
#include <stdlib.h>

int int_compar(const int* a, const int* b)
{
    if (*a > *b) {
        return -1;
    } else if (*a < *b) {
        return 1;
    } else {
        return 0;
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int* arr = calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int* sorted = calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        sorted[i] = arr[i];
    }
    qsort(sorted, n, sizeof(int), (int (*)(const void*, const void*))(*int_compar));

    int max = sorted[0];
    int second_max = sorted[1];

    for (int i = 0; i < n; i++) {
        if (arr[i] == max) {
            printf("%d\n", second_max);
        } else {
            printf("%d\n", max);
        }
    }
    return 0;
}
