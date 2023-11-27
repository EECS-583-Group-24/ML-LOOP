#include<stdio.h>

int main(){
    int a,x,y,z;
    
    scanf("%d%d",&x,&y);
    if(x<y){
        a=x;
        x=y;
        y=a;
    }
    while(x>=1 && x<=1000000000 && y>=1 && y<=1000000000 && y>0){
        z = x % y;
        x = y;
        y = z;
    }
    if(z==0)
    printf("%d\n",y);
    return 0;
}
