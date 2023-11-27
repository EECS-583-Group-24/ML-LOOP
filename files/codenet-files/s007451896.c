#include <stdio.h>

int main () {
   int x, y, z, a,b,c, swap;

   c = 0;

   scanf ("%d %d", &x, &y);

   if (x < y) {
      a = y;
      b = x
   }else{
      a = x;
      b = y;
   }


   while(1) {
      c = a % b;

      if(c == 0){
         printf("%d\n", b);
         break;
      }
      
      a = b;
      b = c;
   }
   return 0;
}