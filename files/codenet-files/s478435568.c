#include <stdio.h>
int main()
{

  int x, y, r;
 
  scanf ("%d %d", &x, &y);

  if (x < y)
     swap(x, y)
  while (y > 0)
     r = x % y;
     x = y;
     y = r;

  printf ("%d\n", r);

  return 0;
}