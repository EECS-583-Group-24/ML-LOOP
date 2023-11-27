#include <stdio.h>

int main(void)  {
  int i, j = 1, d = 0, r, x, y;
  scanf("%d %d", &x, &y);
  
  if (x > y)  {
    r = x % y;
    max = x;
  }
  else  {
    r = y % x;
    max = y;
  }

  for (i = 1; i <= max; i++)  {
    if (r % i == 0)  {
      d = i * j;
      j = i;
    }
  }  
     
  printf("%d?\n", d);
  return 0;
}