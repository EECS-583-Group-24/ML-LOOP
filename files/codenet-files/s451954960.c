#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    scanf("%d", &n);
    if(n/100 == 9) n = n - 800;
    else if(n/100 == 1) n = n + 800;
    if(n%100/10 == 9) n = n - 80;
    else if(n%100/10 == 1) n = n + 80;
    if(n%10 == 9) n = n - 8;
    else if(n%10 == 1) n = n + 8;
    printf("%d", n);
}
