#include <stdio.h>
#include <stdlib.h>

int main(){
    char n[3] = {0};
    scanf("%s",n);
    int i;
    for(i=0; i<3; i++){
        if(n[i] == '1'){
            n[i] = '9';
        }else{
            n[i] = '1';
        }
    }
    printf("%d\n",atoi(n));
    return 0;
}