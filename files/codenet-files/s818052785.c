#include<stdio.h>

int main(void){
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
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
