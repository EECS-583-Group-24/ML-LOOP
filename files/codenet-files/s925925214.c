#include<stdio.h>
int main (void){
    int n,h,t,g,new;
    scanf("%d",&n);
    h=n/100;
    if(h==9){
        h=1;
    }
    else if(h==1){
        h=9;
    }
    t=(n%100)/10;
    if(t==9){
        t=1;
    }
    else if(t==1){
        t=9;
    }
    g=n%10;
    if(g==9){
        g=1;
    }
    else if(g==1){
        g=9;
    }
    new=h*100+t*10+g;
    printf("%d\n",new);
    return 0;
}