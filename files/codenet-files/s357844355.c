#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

static int
gcd(int m, int n) {
  int tmp;

  if (m < n) {
    tmp = m;
    m = n;
    n = tmp;
  }

  return (m % n) ? gcd(n, m % n) : n;
}

int main(int argc, char **argv) {
  int m, n, ret;

  ret = scanf("%d %d", &m, &n);
  if (errno != 0) perror("scanf: m, n");
  if (ret < 1) exit(1);

  printf("%d\n", gcd(m, n));
  exit(0);
}
