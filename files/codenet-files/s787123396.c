#include<stdio.h>
int main(void){
    int i,n,a_n[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a_n[i]);
    }
    for(i=n-1;i>=0;i--){
        if(i>0){
            printf("%d ",a_n[i]);
        }else{
            printf("%d",a_n[i]);
        }
    }
    putchar('\n');
    return 0;
}
