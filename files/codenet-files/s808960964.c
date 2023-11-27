#include<stdio.h>

int main(){
    int a,b,sum,i;
    while(scanf("%d %d",a,b)!=-1){
        sum=a+b;
        for(i=0;sum!=0;i++){
            sum=sum/10;
        } 
        printf("%d\n",i);
     }
    
    return 0;
}