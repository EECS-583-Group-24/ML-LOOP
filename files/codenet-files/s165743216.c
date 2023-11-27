#include <stdio.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(void) {
  int W, H, x, y;
  scanf("%d %d %d %d", &W, &H, &x, &y);

  double AreaMax = (double)W * (double)H;
  double Area0A  = (double)W * (double)y;
  double Area0B  = AreaMax - Area0A;
  double Area0   = MIN(Area0A, Area0B);
  double Area1A  = (double)x * (double)H;
  double Area1B  = AreaMax - Area1A;
  double Area1   = MIN(Area1A, Area1B);

  double Area2   = 0.0;
  if((((double)H / (double)W) == ((double)y / (double)x)) ||
     (((double)H / (double)W) == ((double)(H-y) / (double)x)) ||
     (((double)H / (double)W) == ((double)(H) / (double)(W-x))) ||
     (((double)H / (double)W) == ((double)(H-y) / (double)(W-x))))
    Area2 = AreaMax / 2.0;

  if((Area0 == Area2) ||
     (Area1 == Area2)) {
    printf("%f 1\n", Area2);
  } else if((Area0 < Area2) ||
	    (Area1 < Area2)) {
    printf("%f 0\n", Area2);
  } else {
    if(Area0 == Area1) {
      printf("%f 1\n", Area1);
    } else if(Area0 < Area1) {
      printf("%f 0\n", Area1);
    } else {
      printf("%f 0\n", Area0);
    }
  }
  return 0;
}
