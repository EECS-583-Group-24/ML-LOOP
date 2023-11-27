#include<stdio.h>
int main(){
    int n,a[3],i,j;
    scanf("%d",&n);
    for(i=0;i<3;i++){
        a[i]=n%10;
        n=n/10;
        if(a[i]==1){
            a[i]=9;
        }
        else if(a[i]==9){
            a[i]=1;
        }
    }
    for(i=2;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}
