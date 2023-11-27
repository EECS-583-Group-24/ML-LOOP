#include<stdio.h>

int main()
{
  int a, b, sum, digit;

 while(scanf("%d %d", &a, &b)!=EOF)
 {
   digit=0;
   sum = a+b;

   while(sum>0)
   {
    sum = sum/10;
    digit++;
   }

   printf("%d\n", digit);
 }

}