#include<stdio.h>
double a,b,aa,bb,ans;
int main(void){
    scanf("%lf%lf%lf%lf",&a,&b,&aa,&bb);
    ans = a*b/2;
    printf("%lf",ans);
    if(a/2==aa&&b/2==bb){
        printf(" 1");
    }else{
        printf(" 0");
    }
    return 0;
}