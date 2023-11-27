#include <stdio.h>

int main(){
    
    int i,n, num[100];
    
    scanf("%d", &n);
    
    for( i = 0;i < n; i++){
        scanf("%d", &num[i]);
    }
    
    for( i = n-1; i >= 0; i--){
        printf("%d");
        if( i != 0){
            printf(" ");
        }
    }
    
    return 0;
}