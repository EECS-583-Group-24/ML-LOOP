//a.c A-AtCoder Beginner Contest 999
#include<stdio.h>

int main(void){
    int n,co=1;
    scanf("%d",&n);
    int m=0;
    for(int i=0;i<3;++i){
        if(n%10==1){
            m += 9*co;
        }else{
            m += 1*co;
        }
        n /= 10;
        co *= 10;
    }
    printf("%d\n",m);
    return 0;
}