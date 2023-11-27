#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[12], ans[12];
    int i;
    scanf("%s", s);
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == '0') {
            ans[strlen(ans)] = '0';
        } else if (s[i] == '1') {
            ans[strlen(ans)] = '1';
        } else if (s[i] == 'B') {
            ans[strlen(ans) - 1] = '\0';
        }
    }
    printf("%s\n", ans);
    return 0;
}
