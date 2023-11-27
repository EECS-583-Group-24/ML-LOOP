#include <stdio.h>

int main()
{
  int x, y;
  int sum, ans;
  
  while(scanf("%d %d", &x, &y) != 1){
    sum = x + y;
    
    ans = 0;
    
    while(sum > 0){
      sum /= 10;
      ans++;
    }
    
    printf("%d\n", ans);
  }
  
  return 0;
}