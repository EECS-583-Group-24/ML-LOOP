#include <stdio.h>

int GCD(int a, int b) {
  if (a%b == 0) {
    return b;
  }
  else {
    return GCD(b, a%b);
  }
  
}

int main() {
  int a, b;
  int n;

  scanf("%d %d", &a, &b);
  if (a >= b) {
    n = GCD(a, b);
  }
  else {
    n = GCD(b, a);
  }

  printf("%d\n", n);

  return 0;
}

