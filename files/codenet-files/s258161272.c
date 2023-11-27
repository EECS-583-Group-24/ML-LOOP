#include<stdio.h>
int main(){
    unsigned short num;
    unsigned short i;
    unsigned char elt[199];
    unsigned char work;
    scanf("%d", &num);
    scanf("%s", &elt);
    for(i = 0;i < num;i += 2){
        work = elt[i];
        elt[i] = elt[num * 2 - i];
        elt[num * 2 - i] = work;
    }
    for(i = 0;i < num * 2;i++){
        printf("%s", elt[i]);
    }
    printf("\n");
    return 0;
}
