#include<stdio.h>
#include<string.h>

int main(void){
    char n[3];
    scanf("%s",&n);
        if(n[0] == '1'){
        n[0] = '9';
        }else if(n[0] == '9'){
        n[0] = '1';
        }

        if(n[1] == '1'){
        n[1] = '9';
        }else if(n[1] == '9'){
        n[1] = '1';
        }

        if(n[2] == '1'){
        n[2] = '9';
        }else if(n[2] == '9'){
        n[2] = '1';
        }
    

    printf("%s",n);
    return 0;
    


}