#include <stdio.h>
#include <math.h>
int main(void)
{
   int a,b,c,d,i;
   while(scanf("%d %d",&a,&b) != EOF )
   {
      c=a+b;
      for(i=1;i<8;i++)
      {
            d=pow(10,i);/*d=pow(a,b)でaのb乗*/
            if(c<d)
            {
                  printf("%d\n",i);
                  break;
            }
      }

   }
   return 0;
}