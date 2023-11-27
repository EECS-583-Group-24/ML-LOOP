#include<stdio.h>
int main(void){
    int i,n;
    int a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[n-1-i]=a[i];
    }
    for(i=n-1;i>=0;i--){
        printf("%d",b[n-1-i]);
        if(i!=0){
            printf(" ");
        }else{
            printf("\n");
        }
    }
    return 0;
}
