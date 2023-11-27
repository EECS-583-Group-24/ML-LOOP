#include <stdio.h>

int main(void) {
  int a, b;

  while (scanf("%d %d", &a, &b) != EOF) {
    int sum = a+b;
    int count = 0;

    while (sum>0) {
      sum /= 10;
      count++;
    }

    printf("%d\n", count);
  }

  return 0;
}     
      