#include <stdio.h>
int main (void)
{
    char s[100055] ={'\0'};
    int count = 0;
    int len = 0;
    int i;
    scanf("%s",s);
    while(s[len]){
        len++;
    }   
    for(i=0;i<len;i++){
        if(s[i] != 'B' && s[i+1] !='B' )
            putchar(s[i]);
    }
    return 0;
}