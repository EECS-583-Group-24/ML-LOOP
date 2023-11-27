#include <stdio.h>
int main(){
    int W, H, x, y, ans;
    scanf("%d %d %d %d",&W,&H,&x,&y);
    if(2*x==W && 2*y==H){
        ans = 1;
    }
    else{
        ans = 0;
    }
    printf("%lf %d\n", W*H/2.0, ans);

    return 0;
}