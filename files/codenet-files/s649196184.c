#include<stdio.h>

int main () 
{
   int a, b, c, f, swap;

   f = 1;

   scanf("%d", &a);
   scanf("%d", &b);

   if (a < b) {
      swap = a;
      b = a;
      a = swap;
   }


   while (f == 1) {
      c = a % b;
      a = b;
      b = c;

      if (c == 0) {
         f = 0;
      }
   }

   printf("%d\n", b);

   return 0;

}