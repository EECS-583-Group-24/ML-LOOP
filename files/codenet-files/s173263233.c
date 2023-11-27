#include <stdio.h>

int main(void){
    int w, h, x, y;
    
    scanf("%d %d %d %d", &w, &h, &x, &y);
    
    if(x == w/2 && y == h/2){
        printf("%6.f 1\n", (double)(w * h)/2);
    }else{
        printf("%6.f 0\n", (double)(w * h)/2);
    }
    
	return 0;
}