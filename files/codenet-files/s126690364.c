#include <stdio.h>
#include <string.h>
#define MAX 10
int main(void) {
    char s[MAX], ans[MAX];
    int i;
    
    scanf("%s", s);
    
    for(i=0; i<strlen(s); i++) {
        if(s[i]=='0')
            ans[i] = '0';
        else if(s[i]=='1')
            ans[i] = '1';
        else if(s[i]=='B') {
            if(i>=1) {
                ans[i-1] = '\0';
                i--;
            }
        }
    }
    
    printf("%s", ans);
    return 0;
}
