#include <stdio.h>
int main (void)
{
  int n = 0;
  int d = 0;
  int a;
  int b;
  
  scanf("%d%d",&n,&d);
  
  for (a=0;(2*d+1)*a<n;a++){
    b=a;
  }
  
  printf("%d",b+1);
  
  return 0;
}
