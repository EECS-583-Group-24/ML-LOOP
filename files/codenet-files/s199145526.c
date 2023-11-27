#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    int n, num;
    int i = 0;
    int * arr;
    char sep = '\0';

    scanf("%d", &n);
    arr = (int *) malloc(n * sizeof(int));
    while (i < n)
        scanf("%d", arr + i++);
    while (n--) {
        printf("%c%d", sep, arr[n]);
        sep = ' ';
    }
    free(arr);
    return 0;
}
