#include<stdio.h>
int main(void){
    int a;
    scanf("%d",&a);
    int b[3];
    for(int i = 0; i < 3; i++){
        b[i] = a%10; a /= 10;
        if(b[i] == 1) b[i] = 9;
        else if(b[i] == 9) b[i] = 1;
    }
    for(int i = 2; i >= 0; i--){
        printf("%d",b[i]);
    }
    printf("\n");
    return 0;
}