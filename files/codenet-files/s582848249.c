#include <stdio.h>
#include <string.h>

int main()
{
    char string[11] = "", ans[11] = "";
    scanf("%s", string);
    int lengthString = strlen(string);

    for (int i = 0; i < lengthString; i++)
    {
        if (string[i] == '1')
        {
            ans[i] = '1';
        }
        else if (string[i] == '0')
        {
            ans[i] = '0';
        }
        else
        {
            if (i > 0)
            {
                ans[i-1] = '\0';
            }
        }
    }
    
    for (int i = 0; i < 11; i++)
    {
        printf("%c\n", ans[i]);
    }
    

    return 0;
}
