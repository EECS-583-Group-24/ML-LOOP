#include<stdio.h>
int main(){
    int W;
    int H;
    scanf("%d %d",&W,&H);
    int x,y;
    scanf("%d %d",&x,&y);
    float S;
    int D;
    S = W*H/2;
    printf("%f ",S);
    if(x==W || y==H ||x==0||y==0){
        D=0;
    }
    else if(x==W/2 && y ==H/2){
        D=1;
    }
    else{
        D=1;
    }
    printf("%d\n",D);
}