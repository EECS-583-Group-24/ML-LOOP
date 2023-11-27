#include <stdio.h>
#include <string.h>

int main(void){
    char s[11];
    char ans[11]="";
    scanf("%s",s);

    int aidx = 0;
    for(int i=0; i<strlen(s); i++) {
        char c = s[i];
        if(c=='B' && strlen(ans)>0){
            if(aidx!=0) aidx--;
        }else if (c!='B'){
            ans[aidx] = c;
            aidx++;
        }
    }

    ans[aidx]='\0';

    printf("%s",ans);

    return 0;

}