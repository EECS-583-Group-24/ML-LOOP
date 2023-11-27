#include<stdio.h>
int main(void){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
         scanf("%d",&a[i]);
    }
    for(i=n-1;0<=i;i--){
        if(i!=0){
            printf("%d ",a[i]);
        }
        else{
            printf("%d\n",a[i]);
        }
    }
    return 0;
}
