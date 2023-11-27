#include<stdio.h>
int main(void)
{
   int r, a, b;
   scanf("%d %d", &a, &b);
   if (a < b)
   {
       r = a;
       a = b;
       b = r;
   }
   while(b > 0)
   {
      r = a % b;
      a = b;
      b = r;
   }
   printf("%d\n",a);
   return 0;
}
