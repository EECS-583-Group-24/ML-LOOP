#include<stdio.h>

int main(void){
    
    int n,a[10000],i,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(k=n;k<=1;k--){
    
        printf("%d",a[k]);
        if(i==1)
            break;
        printf(" ");
    }
    return 0;
}