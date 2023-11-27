#include <stdio.h>

int main(void)
{
  int n;
  int max = 0, sec = 0, midx;
  
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int a;
    scanf("%d", &a);
    if (max < a) {
      sec = max;
      max = a;
      midx = i;
    }
    else if (sec < a)
      sec = a;
  }
  
  int ridx = n - midx - 1;
  while (midx--)
    printf("%d\n", max);
  printf("%d\n", sec);
  while (ridx--)
    printf("%d\n", max);
  
  return 0;
}
