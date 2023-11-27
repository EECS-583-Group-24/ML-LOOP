#include<stdio.h>

int main()
{
   int x, y;

    scanf("%d %d", x, y);

    if (x > y){
      while (x % y){
        y--;
      }
    printf ("%d\n", y);
    } 
    else if(y > x){
      while (y % x){
        x--;
      }
    printf ("%d\n", x);
    }
return 0;
}