#include <stdio.h>
int main(){
  int x,y,a;
  scanf("%d %d",&x,&y);
  
//ユークリッドの互除法

  if (x < y) {
    x += y;
    y = x - y;
    x -= y;
  }
  while (y != 0) {
      a = x % y;
      x = y;
      y = a;
    }
  
  printf("%d\n",x);
  return 0;
}

