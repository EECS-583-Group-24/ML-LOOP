#include <stdio.h>
int main(void){
    int n,i,a[100];
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }

    for(i=n;i>=1;i--){
        printf("%d",a[i]);
        if(i==1) break;
        printf(" ");
    }
    
    printf("\n");
    return 0;
}
