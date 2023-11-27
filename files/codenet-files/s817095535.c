#include <stdio.h>
#include <string.h>
int main(void){
    
    int i,j=0;
    char a[11],b[11];
    
    scanf("%s",a);
    
    for(i=0;i<strlen(a);i++){
        if(a[i]-'0'==0){
            b[j]='0';
            j++;
        }
        else if(a[i]-'0'==1){
            b[j]='1';
            j++;
        }
        else j--;
        if(j<0){
            j=0;
        }
    }
    
    for(i=0;i<j;i++){
        printf("%c",b[i]);
    }
    printf("\n");
}