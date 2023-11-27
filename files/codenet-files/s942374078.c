#include<stdio.h>
int main ()
{
     int n,i;
     scanf("%d",&n);
     int t[n];
     for(i=0;i<n;i++)
     {
          scanf("%d",&t[i]);
     }
     for(i=n-1;i>=0;i--)
     {
          printf("%d\t",t[i]);
     }
     return 0;
}
