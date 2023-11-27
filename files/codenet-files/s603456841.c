#include<stdio.h>

int main()
{
   int n, i;
   scanf("%d", &n);
   int a[n], b[n], R[n];

   for(n=0; n<200; n++){
      scanf("%d %d", &a[n], &b[n]);
      R[n] = a[n]+b[n];
      for(i=1; i<7; i=i*10){
         if(R[n]>=10*(i-1) && R[n]<10*i){
            printf("%d\n", i);
         }
      }
   }

   return 0;
}