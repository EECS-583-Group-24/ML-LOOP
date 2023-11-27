#include<stdio.h>

int main(void){
    int i;
    char s[8];
    scanf("%s",s);
    for(i=0;i<3;i++){
        printf("%c",'j'-s[i]);
    }
    printf("\n");
    return 0;
}