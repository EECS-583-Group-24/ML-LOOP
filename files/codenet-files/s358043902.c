#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int a,b;
    char str[32];
    while(1){
        gets(str);
        if(strlen(str) < 3)return 0;
        a = atoi(strtok(str, " "));
        b = atoi(strtok(NULL, " "));
        sprintf(str,"%d",a+b);
        printf("%d\n",strlen(str));
    }
}