#include <stdio.h>

int main()
{
    int n, a[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (i != 0)
            printf("%d ", a[i]);
        else
            printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
