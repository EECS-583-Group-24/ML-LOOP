#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char a[5];
    
    scanf("%s",a);
    
    for(i=0;a[i]!='\0';i++){
        if(a[i]=='1'){
            a[i]='9';
        }
        else if(a[i]=='9'){
            a[i]='1';
    }
    
    }
    
    printf("%s\n",a);
    
    return 0;
}