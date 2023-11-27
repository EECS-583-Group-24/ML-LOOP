#include <stdio.h>
#include <stdlib.h>
int main()
{
 int n,i;
 int *a;
 scanf("%d",&n);
 a=(int*)malloc(sizeof(int)*n);
 for(i=0;i<n;i++)
  scanf("%d",a[i]);
 for(i=n-1;i>0;i--)
  printf("%d ",a[i]);
 printf("%d\n",a[0]);
 return 0;
}
