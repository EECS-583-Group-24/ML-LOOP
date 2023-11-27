#include<stdio.h>
int main() {
  int w,h,x,y;
  scanf("%d %d %d %d", &w, &h, &x, &y);
  printf("%f %d\n", (double)w*h/2, w==x*2&&h==y*2);
  return 0;
}