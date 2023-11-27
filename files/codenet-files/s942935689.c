#include<stdio.h>
int main(void){
    char n;
    for(int i=0;i<3;i++){
        scanf("%c",&n);
        if(n == '1'){
            printf("9");
        } else if(n == '9'){
            printf("9");
        } else {
            printf("%c", n);
        }
    }
    printf("\n");
    return 0;
}