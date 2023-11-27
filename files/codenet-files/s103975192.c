#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int m = n;
    
    int i[n];
    int j;
    
    for(j = 0;j < n;j++){
        scanf("%d", &i[j]);
    }
    
    for(j=0;j < m;j++){
        printf("%d ", i[n-1] );
        n--;
    }
    printf("\n");

    return 0;
}
