#include <stdio.h>

int main(){
    int w,h,x,y;
    scanf("%d %d %d %d",&w,&h,&x,&y);
    if(x == w/2 && y == h/2){
        printf("%f 1\n",(double)w*(double)h/2);
    }else{
         printf("%f 0\n",(double)w*(double)h/2);
    }
    return  0;
}