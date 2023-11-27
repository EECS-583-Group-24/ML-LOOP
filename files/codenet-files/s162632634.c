#include <stdio.h>

int main()
{
  long w, h, x, y;
  int flag;
  scanf("%ld%ld%ld%ld", &w, &h, &x, &y);
  flag=0;
  if(w==2*x && h==2*y){
    flag=1;
  }
  printf("%.6f %d\n", (double)w*(double)h*0.5, flag);
  return 0;
}