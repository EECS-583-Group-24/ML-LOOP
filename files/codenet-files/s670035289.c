#include<stdio.h>

int main(){
    int x,y,z;
    scanf("%d%d",&x,&y);
    
    if(y>x){
        z = y;
        y = x;
        x = y;
    }
    
    if(x < 0 || y >1000000000) break;
    
    while(1){
        z = x % y;
        if(z == 0) break;
        x = y;
        y = z;
    }
    printf("%d\n",y);
    
}
