#include<stdio.h>
int main(){
    int x,y,res=1;

    scanf("%d%d",&x,&y);

    if(x<y){
        x=res;
        x=y;
        y=res;
    }
    while(res!=0){
        res=x%y;
        x=y;
        y=res;
    printf("%d",y);
    }
    return 0;
}