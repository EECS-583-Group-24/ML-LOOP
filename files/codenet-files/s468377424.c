#include <stdio.h>
#include <stdlib.h>
int main()
{
  long long w,h,x,y;
  scanf("%lli%lli%lli%lli",&w,&h,&x,&y);
  if (w == 2*x && h == 2*y) {
    printf("%lli,%d", w*h/2, 1);
  } else {
    printf("%lli,%d", w*h/2, 0);
  }
}