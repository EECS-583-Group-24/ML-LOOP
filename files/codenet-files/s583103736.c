#include <stdio.h>
#include <string.h>

int main(void){
    int i, n; 
    char x[3];

    scanf("%d", &n);
    sprintf(x, "%d", n);

    for(i = 0; i < 3; i++){
    if(x[i] == '0' + 9){
        x[i] = 1;
    }else if(x[i] == '0' + 1) {
        x[i] = 9;
    }
    }
    for(i = 0; i < 3; i++){
    printf("%d",x[i]);
    }
}