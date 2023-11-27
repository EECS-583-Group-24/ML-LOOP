#include<stdio.h>
int main(){
    int n,i,str[1001]={0,};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&str[i]);
    }
    for(i--;i>=0;i--){
        if(i==0){
            printf("%d",str[i]);
        }else{
            printf("%d ",str[i]);
        }
    }
    printf("\n");
    return 0;
}
