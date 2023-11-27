#include <stdio.h>
int main(void){
    long int w, h, x, y;
    long double result;
    scanf("%ld %ld %ld %ld", &w, &h, &x, &y);
    result = (double)w*h/2;
    
    if( w / 2 == x && h / 2 == y && w % 2 == 0 && h % 2 == 0 ){
        printf("%Lf 1\n", result);
    } else {
        printf("%Lf 0\n", result);
    }
    
    return 0;
}