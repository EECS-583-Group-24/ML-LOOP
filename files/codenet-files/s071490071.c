#include<stdio.h>
int main()
{
    char s[11];
    scanf("%s", s);
    int i;
    char ans[11];
    for (i = 0; i < 11; i++)
        ans[i] = '\0';
    i = 0;
    int n = 0;
    while (s[i] != '\0')
    {
        if (s[i] == '1')
        {
            ans[n] = '1';
            n++;
        }
        else if (s[i] == '0')
        {
            ans[n] = '0';
            n++;
        }
        else
        {
            ans[n] = '\0';
            if (n > 0)
                n--;
        }
        i++;
    }
    printf("%s\n", ans);
    return 0;
}