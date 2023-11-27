#include <stdio.h>

main(){
   int x, y, n, i, j, k;

   scanf("%d %d", &x, &y);

   do {
      if (x >= y){
         x == x % y;
         if (x == y){
            break;
         }
      }

      if (x < y){
         y == y % x;
         if (x == y){
            break;
         }
      }
   } while(x == 0&&y == 0);

   printf("%d\n", y);

   return 0;
}
