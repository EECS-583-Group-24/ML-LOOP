#include <stdio.h>

int main (void) {

        int W,H,x,y;
        double S;

        if (scanf("%d %d %d %d",&W,&H,&x,&y) == 1) return;

        S = (double)W*(double)H/2.0;
        int P = (x == W/2 && y == H/2)? 1 : 0;
        printf("%f %d\n",S,P);

        return 0;

}
