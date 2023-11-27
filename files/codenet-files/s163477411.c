#include <stdio.h>

int main()
{
  int x, y, i, a, b, d;
  
  scanf("%d %d", &x, &y);
  
  i = x;
  
  while (i != 0)
  {
    if (x >= y)
    {
      x = x % y;
      
      if( x == 0 )
      {
        d = y;
        i = 0;
      }
    }
    if (y >= x)
    {
      y = y % x;
      
      if ( y == 0 )
      {
        d = x;
        i = 0;
      }
    }
    
    if (x == x % y || y == y % x)
    {
      i = 0;
    }
  }
  
  if (x >= y)
  {
    a = x;
    b = y;
    i = y;
  } else {
    a = y;
    b = x;
    i = x;
   }
  
  if( d != 0)
  {
    while(i != 1)
    {
      if( x % i == 0 && y % i == 0)
      {
        d = i;
        i = 1;
      }
      i--;
    }
  }
  
  printf("%d\n", d);
  
  return 0;
}
  