#include <stdio.h>
int main(){
    int a,b,sum;
    scanf("%d %d"&a,&b);
    sum=keta(a)+keta(b);
    printf("%d",sum);
    return 0;
}

int keta(int n){
    int k=1,m=0;
    while(n/k>0){
        m++;
        k*=10;
    }
    return m;
}