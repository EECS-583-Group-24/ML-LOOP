#include <stdio.h>
#define MAX 11
int main(void) {
    char s[MAX], ans[MAX];
    int i, j=0, k;
    
    scanf("%s", s);
    
    for(i=0; s[i]!='\0'; i++) {
        if(s[i]=='B') {
            if(j>0)
                j--;
        }else {
            ans[j] = s[i];
            j++;
        }
    }
    
    for(k=0; k<j; k++)
        printf("%c", ans[k]);
    printf("\n");
    return 0;
}
