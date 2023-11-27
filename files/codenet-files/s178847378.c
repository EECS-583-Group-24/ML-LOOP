#include <stdio.h>
#include <string.h>
int main(void){
    // Your code here!
    char s[11],s1[11]={'\0'};
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='B')
            s1[strlen(s1)-1]='\0';
        else
            s1[strlen(s1)]=s[i];
    }
    printf("%s\n",s1);
}
