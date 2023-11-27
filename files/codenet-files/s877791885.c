#include <stdio.h>
#include <stdlib.h>

int main(void){
    char n[3];
    scanf("%s",n);
    for(int i = 0;i < 3;i++){
        if(n[i] == '1'){
            n[i] = '9';
        } else {
            n[i] = '1';
        }
    }

    printf("%s",n);
}