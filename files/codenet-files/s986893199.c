#include <stdio.h>
int main(void){
    int n, a, i;
    scanf("%d", &n);
    int p[100];
    
    for(i=0; i<=n-1; i++){
        scanf("%d", &p[i]);
    }
    
    while(n>0){    
        printf("%d", p[n-1]);
        if(n>1) printf(" ");
        n--;
    }
    
    printf("\n");
    
}

