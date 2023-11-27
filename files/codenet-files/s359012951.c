#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[11], ans[11];
    int i;
    scanf("%s", s);
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'B') {
            ans[strlen(ans) - 1] = '\0';
        } else {
            ans[strlen(ans)] = s[i];
        }
    }
    ans[strlen(ans)] = '\0';
    printf("%s\n", ans);
    return 0;
}