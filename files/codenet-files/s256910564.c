#include <stdio.h>

int main(void){
    int n,i;
    scanf("%d",&n);
    int num[n];
    for(i = 0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i = 1;i<=n;i++){
        if(i != 1) printf(" ");
        printf("%d",num[n - i]);
    }
    printf("\n");
    return 0;
}