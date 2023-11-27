#include <stdio.h>

int main(void){
    int i;
    char n[4];
    scanf("%s",n);
    for(i=0;i<3;i++){
        if(n[i] == '1'){
            printf("%d",9);
        }
        else{
            printf("%d",1);
        }
    }
}
