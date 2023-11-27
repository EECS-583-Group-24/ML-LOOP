#include<stdio.h>
#include<string.h>

int main()
{
    char s[10];
    int i;
    scanf("%s",s);

    for(i=0; i<strlen(s); i++)
    {
        if(s[i]=='B' && s[i+1]!='B')
        {
            s[i]='x';
            s[i-1]='x';
        }
        if(s[i]=='B' && s[i+1]=='B')
        {
            s[i-2]='x';
            s[i-1]='x';
            s[i]='x';
            s[i+1]='x';
        }
    }
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]!='x')
            printf("%c",s[i]);
    }
    printf("\n");

    return 0;
}
