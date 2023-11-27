#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int n, *nums, *p;
    char buf[501];
    fgets(buf, 5, stdin);
    sscanf(buf, "%d", &n);

    nums = malloc(n);
    p = nums;
    fgets(buf, 500, stdin);
    sscanf(strtok(buf, " "), "%d", p++);
    while (p - nums < n)
    {
        sscanf(strtok(NULL, " "), "%d", p++);
    }

    --p;
    while (p - nums >= 0)
    {
        if (p == nums)
            printf("%d\n", *p--);
        else
            printf("%d ", *p--);
    }

    free(nums);
    return 0;
}

