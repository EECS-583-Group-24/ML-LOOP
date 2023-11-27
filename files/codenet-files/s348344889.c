#include <stdio.h>
int main(){
  int x, y;
  scanf("%d %d", &x, &y);
  while(y){
    if(y > x){
      int tmp = y;
      y = x;
      x = tmp;
    }
    if(y){
      int tmp = y;
      y = x % y;
      x = tmp;
    }
  }
  printf("%d\n", x);
  return 0;
}