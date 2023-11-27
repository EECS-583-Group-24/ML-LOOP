#include <stdio.h>

int main(void) {
  int a, b, c, ct;

  while (scanf("%d %d", &a, &b) != EOF) {
    ct = 0;
    c = a + b;
    while (c != 0) {
      c /= 10;
      ct++;
    }
    printf("%d\n", ct);
  }
  return (0);
}