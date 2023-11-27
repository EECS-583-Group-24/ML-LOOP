#include<stdio.h>
#include<string.h>

int main(){

    char tmp[10];
    int a, b = 0;

    while ( (fscanf(stdin, "%d %d", &a, &b)) != EOF){
        sprintf(tmp, "%d", (a+b));
        printf("%d\n", strlen(tmp));
    }

    return 0;
}