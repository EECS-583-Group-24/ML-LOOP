#include <stdio.h>

int main(){
    char num[3];
    int i;
    scanf("%s %s %s", num[0], num[1], num[2]);
    for(i=0;i<3;i++){
        if(num[i]=='1') num[i] = '9';
        if(num[i]=='9') num[i] = '1';
    }
    printf("%s %s %s", num[0], num[1], num[2]);
}