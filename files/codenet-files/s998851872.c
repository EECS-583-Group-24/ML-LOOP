#include <stdio.h>
#include <string.h>
#define MAX 10
int main(void) {
    char s[MAX], ans[MAX];
    int i, j=0;
    
    scanf("%s", s);
    
    for(i=0; i<strlen(s); i++) {
        if(s[i]=='0') {
            ans[j] = '0';
            j++;
        } else if(s[i]=='1') {
            ans[j] = '1';
            j++;
        } else if(s[i]=='B') {
            if(j>=1) {
                ans[j-1] = '\0';
                j--;
            }
        }
    }
    
    printf("%s\n", ans);
    return 0;
}
