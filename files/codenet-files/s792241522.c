#include <stdio.h>
int main(void){
    // Your code here!
    int W, H, x, y;
    
    scanf("%d %d %d %d", &W, &H, &x, &y);
    printf("%lf %d\n", (double)(W * H) / 2, x+x == W && y+y == H);
}
