#include <stdio.h>

int main(void){
    int n, i;
    int a[100];

    scanf("%d", &n);
    for(i = 0; i < n; i++){
       scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++){
       if(i)
           printf(" ");
       printf("%d", &a[n - 1- i]);
    }
    puts("");
    return 0;
}