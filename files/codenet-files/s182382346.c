#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int max, second_max;
    scanf("%d", &n);
    int* arr = calloc(n, sizeof(n));
    scanf("%d", &max);
    arr[0] = second_max = max;
    for (int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
        } else if (arr[i] > second_max) {
            second_max = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == max) {
            printf("%d\n", second_max);
        } else {
            printf("%d\n", max);
        }
    }
    free(arr);
    return 0;
}
