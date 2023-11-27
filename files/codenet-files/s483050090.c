#include <stdio.h>

int main(void)
{
  int x, y, i, ans;

  while(scanf("%d %d", &x, &y) != EOF){
    i = 0;
    ans = x + y;
    while(ans > 0){
      ans /= 10;
      i++;
    }    
    
    printf("%d\n", i);
  }
    
  return(0);
}