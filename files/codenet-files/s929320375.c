#include <stdio.h>

int main(void)  {
  int a, b, gcd;
  
  scanf("%d %d", &a, &b);
  
  if (a > b)  {
    for (gcd = b; gcd > 1; gcd--)  {
      if (a % gcd == 0 && b % gcd == 0)
        printf("%d\n", gcd);
        break;
    }
  }

  else {
    for (gcd = a; gcd > 1; gcd--)  {
      if (a % gcd == 0 && b % gcd == 0)
        printf("%d\n", gcd);
        break;
    }
  }

  return 0;
}

        