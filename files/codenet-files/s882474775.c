#include<stdio.h>
#define SWAP(a,b)({a ^= b; b ^= a; a ^= b;})

int main(){
    long long int a, b, d;

    scanf("%lld %lld", &a, &b);
    if(b>a) SWAP(a, b);
    while(b!=0){
        d = a%b;
        a = b;
        b = d;
    }
    printf("%lld\n", a);

return 0;
}

