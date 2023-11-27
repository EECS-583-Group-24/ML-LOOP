#include <stdio.h>
#include <string.h>
int main(void){
    char s[11];
    scanf("%s", s);
    for(int i=0; s[i]!='\0'; i++){
        if(s[0]=='B') {
            for(int j=0;s[j]!='\0';j++) s[j]=s[j+1];
            i=0;
        }
        else if(s[i]=='B'){
            if (s[i]+1=='\0') s[i-1]='\0';
            else for(int j=i;s[j]!='\0';j++) s[j-1]=s[j+1];
            i=0;
        }
    }
    printf("%s", s);
    return 0;
}