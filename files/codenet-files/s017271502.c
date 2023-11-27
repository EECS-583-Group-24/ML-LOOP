#include <stdio.h>
 
int main()
{
  int a, b, i, x, y;    
 
  scanf("%d %d", &a, &b);
 
  for( i = a; i > 0; i--) {
    x = a % i;
    y = b % i;
    if (x == 0 && y == 0) {
     break;
    }
  }

  printf ("%d\n", i);
 
  return 0;
}