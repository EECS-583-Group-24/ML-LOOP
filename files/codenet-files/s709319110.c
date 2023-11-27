#include <stdio.h>

int
main(int argc, char *argv[])
{
  double w, h, x, y;
  scanf("%lf %lf %lf %lf", &w, &h, &x, &y);

  printf("%lf ", w * (h / 2));
  if(x == w / 2 && y == h / 2) printf("1\n");
  else printf("0\n");

  return 0;
}
