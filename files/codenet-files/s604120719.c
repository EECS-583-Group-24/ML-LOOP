#include<stdio.h>
#define MAXN 100
int main(void){
    int A[MAXN];
    int i;
    int n;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &A[i]);
    }
    for(i=n-1;0<=i;i--){
        if(i != n-1)printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");
    return 0;
}
