#include<stdio.h>
int main(){
    unsigned short num;
    unsigned short i;
    unsigned short elt[100];
    for(i = 0;i < 100;i++){
        elt[i] = 0;
    }
    scanf("%d", &num);
    for(i = 0;i < num;i++){
        scanf("%d", &elt[i]);
    }
    for(i = num - 1;i > 0;i--){
        printf("%d ", elt[i]);
    }
    printf("%d\n", elt[0]);
    return 0;
}

