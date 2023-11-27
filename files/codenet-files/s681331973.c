#include <stdio.h>
int main(void){
    char s[11],ans[11];
    int j=0;
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!='B'){
            ans[j]=s[i];
            j++;
        }
        if(ans[0]!='\0' && s[i]=='B'){
            if(j!=0) j--;
            ans[j]='2';
        }
    }
    for(int i=0;ans[i]!='\0';i++){
        if(ans[i]!='2')
            printf("%c",ans[i]);
    }
        printf("\n");
}
