#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
    int W,H,x,y,i,j;
    int no0,no1,no2,no3,no4;
    double box1,noY,noX;
    int noXM,noYM;
    int flg = 0;
    scanf("%d %d %d %d",&W,&H,&x,&y);
    no0 = W * H;
    no1 = (W - x) * H;
    no2 = x * H;
    no3 = (H - y) * W;
    no4 = y * W;
    if (no1 > no2){
        noX = no2;
        noXM = no1;
    }else{
        noX = no1;
        noXM = no2;
    }
    if (no3 > no4){
        noY = no4;
        noYM = no3;
    }else{
        noY = no3;
        noYM = no4;
    }
    if (noX == noY){
        flg = 1;
    }
    if (noXM > noYM){
        box1 = noY;
    }else{
        box1 = noX;
    }
    printf("%f %d",box1,flg);
    //printf("%s",S);
}