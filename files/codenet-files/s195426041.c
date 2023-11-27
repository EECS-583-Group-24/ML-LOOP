#include <stdio.h>
#include <string.h>

int main (void)
{
    int i,k=0;
    char s[11];
    char a[11];
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='0')
        {
            s[k++]='0';
        }else{
            if(a[i]=='1')
            {
                s[k++]='1';
            }else{
                if(k>0)
                {
                    k--;
                }
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%c",s[i]);
    }
    putchar('\n');
    return 0;
}
