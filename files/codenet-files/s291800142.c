#include <stdio.h>

void main (void) {

        int W,H,x,y;
        double S;

        scanf("%d %d %d %d",&W,&H,&x,&y);

        S = (double)W*(double)H/2.0;
        int P = (x == W/2 && y == H/2)? 1 : 0;
        printf("%f %d",S,P);

}
