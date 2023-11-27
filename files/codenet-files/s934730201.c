#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int W = 0;
    int H = 0;
    int x = 0;
    int y = 0;
    
    scanf("%d",&W);
    scanf("%d",&H);
    scanf("%d",&x);
    scanf("%d",&y);

    if (W == x || H == y || 0 == x || 0 == y) {
        //周上点
        printf("%lf 1",W*H/2.0);
    }else{
        //内部点
        if (W == H) {
            //squaretype
            printf("%lf 0",W*H/2.0);
        }else{
            //長方形type
            printf("%lf 1",W*H/2.0);
        }
    }
}
