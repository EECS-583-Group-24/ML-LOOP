#include <stdio.h>
int main (void)
{
  int sum1 = 0, d1 = 0;
  int sum2 = 0, d2 = 0;
  int sum3 = 0, d3 = 0;
  int i1, i2, i3, j1, j2, j3, d1, d2, d3;
  scanf("%d %d", &i1, &j1);
  scanf("%d %d", &i2, &j2);
  scanf("%d %d", &i3, &j3);
  sum1 = i1 + j1;
  sum2 = i2 + j2;
  sum3 = i3 + j3;
  while(sum1 != 0){
    sum1 /= 10;
    d1++;
  }
  while(sum2 != 0){
    sum2 /= 10;
    d2++;
  }
  while(sum3 != 0){
    sum3 /= 10;
    d3++;
  }
  printf("%d\n", d1);
  printf("%d\n", d2);
  printf("%d\n", d3);
  return 0;
}