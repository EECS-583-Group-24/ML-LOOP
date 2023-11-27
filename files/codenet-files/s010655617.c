#include<stdio.h>

int main()
{
   int x, y, i;

   scanf("%d %d", &x, &y);

   if(x >= y){
      for(i=y; i>=1; i--){
         if(y%i == 0){
            if(x%i == 0){
               printf("%d\n", i);
               return 0;
            }
         }
      }
   }