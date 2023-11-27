#include <stdio.h>
#include <math.h>
int main()
{
   int W,H,X,Y;
   int ret;
   ret = scanf("%d",&W);
   ret = scanf("%d",&H);
   ret = scanf("%d",&X);
   ret = scanf("%d",&Y);
   float dx = fabs(W/2.0-X);
   float dy = fabs(H/2.0-Y);
   if (fabs(dx*dy - W*dy - H*dx) <= 1.0e-9)
     printf("%f 1",W*H/2.0);
   else 
     printf("%f 0",W*H/2.0);
   return 0;
}