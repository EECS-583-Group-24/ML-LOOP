//Name: Digit Number
//Level: 1
//Category: ????????????
//Note:

#include <stdio.h>

int main()
{
    int a, b, c;
    int ans;

    while(scanf("%d %d", &a, &b) != EOF) {
        c = a + b;

        for (ans = 1; c /= 10; ans++)
            ;
        printf("%d\n", ans);
    }

    return 0;
}