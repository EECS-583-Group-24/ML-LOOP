#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if (n > 500) {
    n -= 800;
  } else {
    n += 800;
  }
  if (n % 100 > 50) {
    n -= 80;
  } else {
    n += 80;
  }
  if (n % 10 > 5) {
    n -= 8;
  } else {
    n += 8;
  }
  printf("%d\n", n);
  return 0;
}
