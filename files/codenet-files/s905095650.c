#include <stdio.h>

int main() {
  int w, h, x, y;
  scanf("%d %d %d %d", &w, &h, &x, &y);
  float s = (w * h) / 2.0;
  int boo;
  boo = (x != w/2.0) ? 0 :
        (y != h/2.0) ? 0 : 1;
  printf("%f %d\n", s, boo);
  return 0;
}
