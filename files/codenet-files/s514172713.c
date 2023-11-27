#include <stdio.h>
#include <stdlib.h>
int main()
{
  long long w,h,x,y;
  scanf("%lli%lli%lli%lli",&w,&h,&x,&y);
  printf("%d", w*h/2);
  if (w == 2*x && h == 2*y) {
    printf("%d", 1);
  } else {
    printf("%d", 0);
  }
  return 0;
}
