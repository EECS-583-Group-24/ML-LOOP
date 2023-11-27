#include "stdio.h"

int main()
{

  int i,x;

  scanf("%d\n",&x);

  int a[x];

for (i = 0; i < x; i++)
{
 scanf("%d ",&a[i] );
}

for (i = x-1; i >=0 ; i--)
{
  printf("%d ",a[i] );
}

  return 0;
}

