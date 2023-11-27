#include<stdio.h>
int main(){
    int ch;
    int i;
    for(i=0;i<3;i++){
        ch=getchar();
        if(ch=='1'){
            putchar('9');
        } else {
            putchar('1');
        }
    }
    return 0;
}
