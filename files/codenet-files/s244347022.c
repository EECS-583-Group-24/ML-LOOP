#include<stdio.h>

int Euclid(int a,int b){

if (a%b==0) return b;

return Euclid(b,a%b);
}

int main(){
    int a,b,temp;
    scanf("%d %d",&a,&b);
    if (b>a) {
        temp=a;
        a=b;
        b=temp;
    }
    printf("%d\n",Euclid(a,b));
    return 0;
}