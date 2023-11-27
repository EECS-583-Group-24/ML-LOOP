#include <stdio.h>

int main(void) {
  int a, b;

  while (scanf("%d %d", &a, &b) != EOF) {

    int t = a + b;
    int i = 0;

    while (t) {
      t /= 10;
      i++;
    }

    printf("%d\n", i);
  }

  return 0;
}