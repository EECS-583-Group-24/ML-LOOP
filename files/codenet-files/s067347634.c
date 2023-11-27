#include<stdio.h>
#include<string.h>
int main ()
{
    char s[11];
    scanf ("%s",s);
    int i,j;
    for (i = 0 ; i <strlen (s); i++)
    {
        if (s[i]=='B')
        {
            if (i==0)
            {
                for (j = i ; j<strlen (s);j++)
                    s[j]=s[j+1];
            }
            else {
                for(j = i-1;j<strlen(s)-1;j++)
                    s[j]=s[j+2];

            }

        }

    }
    puts(s);
    return 0;
}
