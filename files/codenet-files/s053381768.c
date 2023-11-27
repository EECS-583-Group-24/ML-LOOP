#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int a,b,n,k,x,y,i,j;
char  s[4];
    scanf("%s",s);
    for(i=0;i<3;i++){
        if(s[i]=='1'){
            s[i]='9';
        }else if(
            s[i]=='9'){
                s[i]='1';
            }
    }
    printf("%s",s);
    return 0;
}
