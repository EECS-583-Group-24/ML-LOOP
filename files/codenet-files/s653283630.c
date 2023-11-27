#include<stdio.h>
#include<string.h>
int main()
{
    char s[11];
    scanf("%s", s);
    int i;
    char ans[11];
    i = 0;
    int n = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] != 'B')
        {
            ans[n] = s[i];
            n++;
        }
        else
        {
            
            if (n != 0)
                n--;
        }
    }
    ans[n] = '\0';
    printf("%s\n", ans);
    return 0;
}