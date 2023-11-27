#include<stdio.h>
int main(){
    int x,y,z,d;
    scanf("%d%d",&x,&y);
    
    if(x<y){
        while(x != 0){
            d=y%x;
            y=x;
            x=d;
        }
        printf("%d\n",y);
    }
    else{
    while(y !=0){
        d=x%y;
         x=y;
        y=d;
     
    }
    printf("%d\n",x);
    }
    return 0;
}
