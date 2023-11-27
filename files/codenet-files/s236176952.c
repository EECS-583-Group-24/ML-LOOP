#include<string.h>
#include<stdio.h>
int main()
{
    char s[15],a[15];
    gets(s);
    int len =strlen(s);
    int l=0;
    for(int i=0;i<len ;i++)
    {
        if(s[i]=='0'||s[i]=='1')
        a[l++]=s[i];
        if(s[i]=='B'&&l>=1)
            l--;
    }
    for(int i=0;i<l;i++)
    printf("%c",a[i]);
    printf("\n");
    return 0;
}
