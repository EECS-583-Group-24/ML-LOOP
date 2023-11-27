#include <stdio.h>
int main(void){
    int n, i, j;
    int x[100] = {0};
    
    scanf("%d\n", &n);
    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
    }
    
    for(j=n-1; j>=0; j--){
        printf("%d", x[j]);
        if(j<n){
            printf(" ");
        }
    }
    
    printf("\n");
    return 0;
}

