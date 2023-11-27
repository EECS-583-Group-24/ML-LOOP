#include<stdio.h>
typedef long long int ll;

int main(void){
    ll W,H,x,y;
    scanf("%lld%lld%lld%lld", &W,&H,&x,&y);

    double area;
    int ok;
    area = W*H/2;
    if((x*2==W) && (y*2==H)){
        ok = 1;
    }else{
        ok = 0;
    }

    printf("%lf %d\n", area, ok);
    return 0;
}