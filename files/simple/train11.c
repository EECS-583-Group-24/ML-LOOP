#include<stdio.h>

int main(void){
    int x,y,z;
    x = 100;
    y = 120;
    if(x<y){
        z=x;
        x=y;
        y=z;
    }
    while(1){
        z=x%y;
        if(z==0){
            printf("%d\n",y);
            break;
        }
        x=z;
        z=y%x;
        if(z==0){
            printf("%d\n",x);
            break;
        }
        y=z;
    }
    
    return 0;
}
