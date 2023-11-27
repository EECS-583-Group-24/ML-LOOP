#include <stdio.h>

int f(int x){
    x==1 ? (x=1):(x=9);
    return x;
}

int main(void){
    // Your code here!
    int a,b,c,d;
    scanf("%d\n",&a);
    b=a/100;
    d=a%10;
    c=a-b*100-d;
    printf("%d\n",f(b)*100+f(c)*10+f(d));
}
