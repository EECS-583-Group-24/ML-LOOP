#include <stdio.h>
#include <math.h>

int main(){
  int x, y;
  while(scanf("%d %d", &x, &y) != EOF){
    int i = ceil(log10(x + y + 1));
    printf("%d\n", i);
  }
  return 0;
}