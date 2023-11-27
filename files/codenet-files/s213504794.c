#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int my_sort(const void *a, const void *b)
{
    return *(int*)b - *(int*)a;
}

int main(int argc, void **arg)
{
    long long n;
    int a[200000];
    int b[200000];
    long long i, j;

    scanf("%lld", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    memcpy(b, a, n*sizeof(int));
    qsort(b, n, sizeof(int), my_sort);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if( a[i] != b[j] ) {
                printf("%d\n", b[j]);
                break;
            }
        }
        if( j == n ) {
            printf("%d\n", b[0]);
        }
    }

    return 0;
}
