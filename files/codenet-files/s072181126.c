#include<stdio.h>
int main(){
    int x,y,z,d;
    scanf("%d%d",&x,&y);
    
    if(x<y){
        while(y != 0){
            d=y%x;
            x=y;
            y=d;
        }
        printf("%d\n",x);
    }
    else{
    while((d=x%y)!=0){
        x=y;
        y=d;
    }
    printf("%d\n",y);
    }
    return 0;
}

